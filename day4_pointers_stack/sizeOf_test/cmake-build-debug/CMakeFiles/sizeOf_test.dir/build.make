# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/vn2783/github_repos/EE312_Sum_22_lectures/day4_pointers_stack/sizeOf_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/vn2783/github_repos/EE312_Sum_22_lectures/day4_pointers_stack/sizeOf_test/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sizeOf_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sizeOf_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sizeOf_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sizeOf_test.dir/flags.make

CMakeFiles/sizeOf_test.dir/sizeOf.c.o: CMakeFiles/sizeOf_test.dir/flags.make
CMakeFiles/sizeOf_test.dir/sizeOf.c.o: ../sizeOf.c
CMakeFiles/sizeOf_test.dir/sizeOf.c.o: CMakeFiles/sizeOf_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vn2783/github_repos/EE312_Sum_22_lectures/day4_pointers_stack/sizeOf_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/sizeOf_test.dir/sizeOf.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/sizeOf_test.dir/sizeOf.c.o -MF CMakeFiles/sizeOf_test.dir/sizeOf.c.o.d -o CMakeFiles/sizeOf_test.dir/sizeOf.c.o -c /Users/vn2783/github_repos/EE312_Sum_22_lectures/day4_pointers_stack/sizeOf_test/sizeOf.c

CMakeFiles/sizeOf_test.dir/sizeOf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sizeOf_test.dir/sizeOf.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vn2783/github_repos/EE312_Sum_22_lectures/day4_pointers_stack/sizeOf_test/sizeOf.c > CMakeFiles/sizeOf_test.dir/sizeOf.c.i

CMakeFiles/sizeOf_test.dir/sizeOf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sizeOf_test.dir/sizeOf.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vn2783/github_repos/EE312_Sum_22_lectures/day4_pointers_stack/sizeOf_test/sizeOf.c -o CMakeFiles/sizeOf_test.dir/sizeOf.c.s

# Object files for target sizeOf_test
sizeOf_test_OBJECTS = \
"CMakeFiles/sizeOf_test.dir/sizeOf.c.o"

# External object files for target sizeOf_test
sizeOf_test_EXTERNAL_OBJECTS =

sizeOf_test: CMakeFiles/sizeOf_test.dir/sizeOf.c.o
sizeOf_test: CMakeFiles/sizeOf_test.dir/build.make
sizeOf_test: CMakeFiles/sizeOf_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/vn2783/github_repos/EE312_Sum_22_lectures/day4_pointers_stack/sizeOf_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable sizeOf_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sizeOf_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sizeOf_test.dir/build: sizeOf_test
.PHONY : CMakeFiles/sizeOf_test.dir/build

CMakeFiles/sizeOf_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sizeOf_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sizeOf_test.dir/clean

CMakeFiles/sizeOf_test.dir/depend:
	cd /Users/vn2783/github_repos/EE312_Sum_22_lectures/day4_pointers_stack/sizeOf_test/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/vn2783/github_repos/EE312_Sum_22_lectures/day4_pointers_stack/sizeOf_test /Users/vn2783/github_repos/EE312_Sum_22_lectures/day4_pointers_stack/sizeOf_test /Users/vn2783/github_repos/EE312_Sum_22_lectures/day4_pointers_stack/sizeOf_test/cmake-build-debug /Users/vn2783/github_repos/EE312_Sum_22_lectures/day4_pointers_stack/sizeOf_test/cmake-build-debug /Users/vn2783/github_repos/EE312_Sum_22_lectures/day4_pointers_stack/sizeOf_test/cmake-build-debug/CMakeFiles/sizeOf_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sizeOf_test.dir/depend

