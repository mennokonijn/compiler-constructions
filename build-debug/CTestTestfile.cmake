# CMake generated Testfile for 
# Source directory: /Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton
# Build directory: /Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(basic "/run.bash" "/Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/build-debug/civicc" "basic")
set_tests_properties(basic PROPERTIES  WORKING_DIRECTORY "/Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/test" _BACKTRACE_TRIPLES "/Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/CMakeLists.txt;12;add_test;/Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/CMakeLists.txt;0;")
add_test(nested_funs "/run.bash" "/Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/build-debug/civicc" "nested_funs")
set_tests_properties(nested_funs PROPERTIES  WORKING_DIRECTORY "/Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/test" _BACKTRACE_TRIPLES "/Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/CMakeLists.txt;13;add_test;/Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/CMakeLists.txt;0;")
add_test(arrays "/run.bash" "/Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/build-debug/civicc" "arrays")
set_tests_properties(arrays PROPERTIES  WORKING_DIRECTORY "/Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/test" _BACKTRACE_TRIPLES "/Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/CMakeLists.txt;14;add_test;/Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/CMakeLists.txt;0;")
subdirs("palm")
