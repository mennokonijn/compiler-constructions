# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.25.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.25.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mennokonijn/Desktop/Compiler-Constructions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug

# Include any dependencies generated for this target.
include palm/CMakeFiles/palm_tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include palm/CMakeFiles/palm_tests.dir/compiler_depend.make

# Include the progress variables for this target.
include palm/CMakeFiles/palm_tests.dir/progress.make

# Include the compile flags for this target's objects.
include palm/CMakeFiles/palm_tests.dir/flags.make

palm/CMakeFiles/palm_tests.dir/tests.c.o: palm/CMakeFiles/palm_tests.dir/flags.make
palm/CMakeFiles/palm_tests.dir/tests.c.o: /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/tests.c
palm/CMakeFiles/palm_tests.dir/tests.c.o: palm/CMakeFiles/palm_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object palm/CMakeFiles/palm_tests.dir/tests.c.o"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT palm/CMakeFiles/palm_tests.dir/tests.c.o -MF CMakeFiles/palm_tests.dir/tests.c.o.d -o CMakeFiles/palm_tests.dir/tests.c.o -c /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/tests.c

palm/CMakeFiles/palm_tests.dir/tests.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/palm_tests.dir/tests.c.i"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/tests.c > CMakeFiles/palm_tests.dir/tests.c.i

palm/CMakeFiles/palm_tests.dir/tests.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/palm_tests.dir/tests.c.s"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/tests.c -o CMakeFiles/palm_tests.dir/tests.c.s

# Object files for target palm_tests
palm_tests_OBJECTS = \
"CMakeFiles/palm_tests.dir/tests.c.o"

# External object files for target palm_tests
palm_tests_EXTERNAL_OBJECTS =

palm/palm_tests: palm/CMakeFiles/palm_tests.dir/tests.c.o
palm/palm_tests: palm/CMakeFiles/palm_tests.dir/build.make
palm/palm_tests: palm/libpalm.a
palm/palm_tests: palm/CMakeFiles/palm_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable palm_tests"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/palm_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
palm/CMakeFiles/palm_tests.dir/build: palm/palm_tests
.PHONY : palm/CMakeFiles/palm_tests.dir/build

palm/CMakeFiles/palm_tests.dir/clean:
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && $(CMAKE_COMMAND) -P CMakeFiles/palm_tests.dir/cmake_clean.cmake
.PHONY : palm/CMakeFiles/palm_tests.dir/clean

palm/CMakeFiles/palm_tests.dir/depend:
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mennokonijn/Desktop/Compiler-Constructions /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm/CMakeFiles/palm_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : palm/CMakeFiles/palm_tests.dir/depend

