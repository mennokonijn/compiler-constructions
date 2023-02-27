cmake_minimum_required(VERSION 3.13)

project(civicc VERSION 1.0 LANGUAGES C)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/Modules")

set(TEST_DIR "${CMAKE_CURRENT_LIST_DIR}/test")
set(COMPILER "${CMAKE_CURRENT_BINARY_DIR}/civicc")

# These will only work after you received the testing framework from us.
enable_testing()
add_test(NAME "basic" COMMAND "${TEST_COMMAND}/run.bash" "${COMPILER}" basic WORKING_DIRECTORY "${TEST_DIR}")
add_test(NAME "nested_funs" COMMAND "${TEST_COMMAND}/run.bash" "${COMPILER}" nested_funs WORKING_DIRECTORY "${TEST_DIR}")
add_test(NAME "arrays" COMMAND "${TEST_COMMAND}/run.bash" "${COMPILER}" arrays WORKING_DIRECTORY "${TEST_DIR}")

# On macOS, search Homebrew for keg-only versions of Bison and Flex. Xcode does
# not provide new enough versions for us to use.
if (CMAKE_HOST_SYSTEM_NAME MATCHES "Darwin")
    execute_process(
        COMMAND brew --prefix bison
        RESULT_VARIABLE BREW_BISON
        OUTPUT_VARIABLE BREW_BISON_PREFIX
        OUTPUT_STRIP_TRAILING_WHITESPACE
    )
    if (BREW_BISON EQUAL 0 AND EXISTS "${BREW_BISON_PREFIX}")
        message(STATUS "Found Bison keg installed by Homebrew at ${BREW_BISON_PREFIX}")
        set(BISON_EXECUTABLE "${BREW_BISON_PREFIX}/bin/bison")
    endif()

    execute_process(
        COMMAND brew --prefix flex
        RESULT_VARIABLE BREW_FLEX
        OUTPUT_VARIABLE BREW_FLEX_PREFIX
        OUTPUT_STRIP_TRAILING_WHITESPACE
    )
    if (BREW_FLEX EQUAL 0 AND EXISTS "${BREW_FLEX_PREFIX}")
        message(STATUS "Found Flex keg installed by Homebrew at ${BREW_FLEX_PREFIX}")
        set(FLEX_EXECUTABLE "${BREW_FLEX_PREFIX}/bin/flex")
    endif()
endif()

find_package(BISON REQUIRED)
find_package(FLEX REQUIRED)

bison_target(CivicParser src/scanparse/parser.y "${CMAKE_CURRENT_BINARY_DIR}/parser.c"
    DEFINES_FILE "${CMAKE_CURRENT_BINARY_DIR}/parser.h" VERBOSE)

flex_target(CivicLexer src/scanparse/lexer.l "${CMAKE_CURRENT_BINARY_DIR}/lexer.c"
    DEFINES_FILE "${CMAKE_CURRENT_BINARY_DIR}/lexer.h")
ADD_FLEX_BISON_DEPENDENCY(CivicLexer CivicParser)


include(./coconut/coconut.cmake)

# Whenever you add a file, add it here too.
add_executable(civicc ${FLEX_CivicLexer_OUTPUTS} ${BISON_CivicParser_OUTPUTS}
    src/main.c src/print/print.c src/scanparse/scanParse.c
    src/global/globals.c src/global/globals.h
    src/framework_assignments/strength_reduction.c
    src/framework_assignments/arithmetic_occurrences.c
    src/framework_assignments/identifier_occurrences.c

    # Youre free to remove the demo directory and these entries.
    src/demo/opt_sub.c src/demo/sum_ints.c src/demo/rename_identifiers.c
)

target_compile_options(civicc PRIVATE
        $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -pedantic -Wno-unused-function>
)

coconut_target_generate(civicc "${CMAKE_CURRENT_LIST_DIR}/src/main.ccn" dynamic)
target_include_directories(civicc 
    PUBLIC "${CMAKE_CURRENT_LIST_DIR}/src" 
)

add_custom_target(dot 
    dot -Tpng ccngen/ast.dot > ast.png
    COMMENT "Generate a png of your ast based on the generated dot diagram."
)
