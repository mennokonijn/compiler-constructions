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
CMAKE_SOURCE_DIR = /Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/build-debug

# Utility rule file for dot.

# Include any custom commands dependencies for this target.
include CMakeFiles/dot.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/dot.dir/progress.make

CMakeFiles/dot:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generate a png of your ast based on the generated dot diagram."
	dot -Tpng ccngen/ast.dot > ast.png

dot: CMakeFiles/dot
dot: CMakeFiles/dot.dir/build.make
.PHONY : dot

# Rule to build all files generated by this target.
CMakeFiles/dot.dir/build: dot
.PHONY : CMakeFiles/dot.dir/build

CMakeFiles/dot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dot.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dot.dir/clean

CMakeFiles/dot.dir/depend:
	cd /Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton /Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton /Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/build-debug /Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/build-debug /Users/mennokonijn/Desktop/School/premaster/compilerConstructions/test/civicc-skeleton/build-debug/CMakeFiles/dot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dot.dir/depend

