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
include palm/CMakeFiles/palm.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include palm/CMakeFiles/palm.dir/compiler_depend.make

# Include the progress variables for this target.
include palm/CMakeFiles/palm.dir/progress.make

# Include the compile flags for this target's objects.
include palm/CMakeFiles/palm.dir/flags.make

palm/CMakeFiles/palm.dir/src/dbug.c.o: palm/CMakeFiles/palm.dir/flags.make
palm/CMakeFiles/palm.dir/src/dbug.c.o: /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/dbug.c
palm/CMakeFiles/palm.dir/src/dbug.c.o: palm/CMakeFiles/palm.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object palm/CMakeFiles/palm.dir/src/dbug.c.o"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT palm/CMakeFiles/palm.dir/src/dbug.c.o -MF CMakeFiles/palm.dir/src/dbug.c.o.d -o CMakeFiles/palm.dir/src/dbug.c.o -c /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/dbug.c

palm/CMakeFiles/palm.dir/src/dbug.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/palm.dir/src/dbug.c.i"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/dbug.c > CMakeFiles/palm.dir/src/dbug.c.i

palm/CMakeFiles/palm.dir/src/dbug.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/palm.dir/src/dbug.c.s"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/dbug.c -o CMakeFiles/palm.dir/src/dbug.c.s

palm/CMakeFiles/palm.dir/src/memory.c.o: palm/CMakeFiles/palm.dir/flags.make
palm/CMakeFiles/palm.dir/src/memory.c.o: /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/memory.c
palm/CMakeFiles/palm.dir/src/memory.c.o: palm/CMakeFiles/palm.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object palm/CMakeFiles/palm.dir/src/memory.c.o"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT palm/CMakeFiles/palm.dir/src/memory.c.o -MF CMakeFiles/palm.dir/src/memory.c.o.d -o CMakeFiles/palm.dir/src/memory.c.o -c /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/memory.c

palm/CMakeFiles/palm.dir/src/memory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/palm.dir/src/memory.c.i"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/memory.c > CMakeFiles/palm.dir/src/memory.c.i

palm/CMakeFiles/palm.dir/src/memory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/palm.dir/src/memory.c.s"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/memory.c -o CMakeFiles/palm.dir/src/memory.c.s

palm/CMakeFiles/palm.dir/src/ctinfo.c.o: palm/CMakeFiles/palm.dir/flags.make
palm/CMakeFiles/palm.dir/src/ctinfo.c.o: /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/ctinfo.c
palm/CMakeFiles/palm.dir/src/ctinfo.c.o: palm/CMakeFiles/palm.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object palm/CMakeFiles/palm.dir/src/ctinfo.c.o"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT palm/CMakeFiles/palm.dir/src/ctinfo.c.o -MF CMakeFiles/palm.dir/src/ctinfo.c.o.d -o CMakeFiles/palm.dir/src/ctinfo.c.o -c /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/ctinfo.c

palm/CMakeFiles/palm.dir/src/ctinfo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/palm.dir/src/ctinfo.c.i"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/ctinfo.c > CMakeFiles/palm.dir/src/ctinfo.c.i

palm/CMakeFiles/palm.dir/src/ctinfo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/palm.dir/src/ctinfo.c.s"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/ctinfo.c -o CMakeFiles/palm.dir/src/ctinfo.c.s

palm/CMakeFiles/palm.dir/src/str.c.o: palm/CMakeFiles/palm.dir/flags.make
palm/CMakeFiles/palm.dir/src/str.c.o: /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/str.c
palm/CMakeFiles/palm.dir/src/str.c.o: palm/CMakeFiles/palm.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object palm/CMakeFiles/palm.dir/src/str.c.o"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT palm/CMakeFiles/palm.dir/src/str.c.o -MF CMakeFiles/palm.dir/src/str.c.o.d -o CMakeFiles/palm.dir/src/str.c.o -c /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/str.c

palm/CMakeFiles/palm.dir/src/str.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/palm.dir/src/str.c.i"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/str.c > CMakeFiles/palm.dir/src/str.c.i

palm/CMakeFiles/palm.dir/src/str.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/palm.dir/src/str.c.s"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/str.c -o CMakeFiles/palm.dir/src/str.c.s

palm/CMakeFiles/palm.dir/src/hash_table.c.o: palm/CMakeFiles/palm.dir/flags.make
palm/CMakeFiles/palm.dir/src/hash_table.c.o: /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/hash_table.c
palm/CMakeFiles/palm.dir/src/hash_table.c.o: palm/CMakeFiles/palm.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object palm/CMakeFiles/palm.dir/src/hash_table.c.o"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT palm/CMakeFiles/palm.dir/src/hash_table.c.o -MF CMakeFiles/palm.dir/src/hash_table.c.o.d -o CMakeFiles/palm.dir/src/hash_table.c.o -c /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/hash_table.c

palm/CMakeFiles/palm.dir/src/hash_table.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/palm.dir/src/hash_table.c.i"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/hash_table.c > CMakeFiles/palm.dir/src/hash_table.c.i

palm/CMakeFiles/palm.dir/src/hash_table.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/palm.dir/src/hash_table.c.s"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/hash_table.c -o CMakeFiles/palm.dir/src/hash_table.c.s

palm/CMakeFiles/palm.dir/src/filesystem.c.o: palm/CMakeFiles/palm.dir/flags.make
palm/CMakeFiles/palm.dir/src/filesystem.c.o: /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/filesystem.c
palm/CMakeFiles/palm.dir/src/filesystem.c.o: palm/CMakeFiles/palm.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object palm/CMakeFiles/palm.dir/src/filesystem.c.o"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT palm/CMakeFiles/palm.dir/src/filesystem.c.o -MF CMakeFiles/palm.dir/src/filesystem.c.o.d -o CMakeFiles/palm.dir/src/filesystem.c.o -c /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/filesystem.c

palm/CMakeFiles/palm.dir/src/filesystem.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/palm.dir/src/filesystem.c.i"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/filesystem.c > CMakeFiles/palm.dir/src/filesystem.c.i

palm/CMakeFiles/palm.dir/src/filesystem.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/palm.dir/src/filesystem.c.s"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm/src/filesystem.c -o CMakeFiles/palm.dir/src/filesystem.c.s

# Object files for target palm
palm_OBJECTS = \
"CMakeFiles/palm.dir/src/dbug.c.o" \
"CMakeFiles/palm.dir/src/memory.c.o" \
"CMakeFiles/palm.dir/src/ctinfo.c.o" \
"CMakeFiles/palm.dir/src/str.c.o" \
"CMakeFiles/palm.dir/src/hash_table.c.o" \
"CMakeFiles/palm.dir/src/filesystem.c.o"

# External object files for target palm
palm_EXTERNAL_OBJECTS =

palm/libpalm.a: palm/CMakeFiles/palm.dir/src/dbug.c.o
palm/libpalm.a: palm/CMakeFiles/palm.dir/src/memory.c.o
palm/libpalm.a: palm/CMakeFiles/palm.dir/src/ctinfo.c.o
palm/libpalm.a: palm/CMakeFiles/palm.dir/src/str.c.o
palm/libpalm.a: palm/CMakeFiles/palm.dir/src/hash_table.c.o
palm/libpalm.a: palm/CMakeFiles/palm.dir/src/filesystem.c.o
palm/libpalm.a: palm/CMakeFiles/palm.dir/build.make
palm/libpalm.a: palm/CMakeFiles/palm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C static library libpalm.a"
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && $(CMAKE_COMMAND) -P CMakeFiles/palm.dir/cmake_clean_target.cmake
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/palm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
palm/CMakeFiles/palm.dir/build: palm/libpalm.a
.PHONY : palm/CMakeFiles/palm.dir/build

palm/CMakeFiles/palm.dir/clean:
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm && $(CMAKE_COMMAND) -P CMakeFiles/palm.dir/cmake_clean.cmake
.PHONY : palm/CMakeFiles/palm.dir/clean

palm/CMakeFiles/palm.dir/depend:
	cd /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mennokonijn/Desktop/Compiler-Constructions /Users/mennokonijn/Desktop/Compiler-Constructions/coconut/palm /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm /Users/mennokonijn/Desktop/Compiler-Constructions/build-debug/palm/CMakeFiles/palm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : palm/CMakeFiles/palm.dir/depend

