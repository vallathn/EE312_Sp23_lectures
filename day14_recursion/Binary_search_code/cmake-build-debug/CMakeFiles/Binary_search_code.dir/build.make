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
CMAKE_SOURCE_DIR = /Users/vn2783/github_repos/EE312_Sum_22_lectures/day14_recursion/Binary_search_code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/vn2783/github_repos/EE312_Sum_22_lectures/day14_recursion/Binary_search_code/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Binary_search_code.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Binary_search_code.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Binary_search_code.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Binary_search_code.dir/flags.make

CMakeFiles/Binary_search_code.dir/EE312_day14_binary_search.c.o: CMakeFiles/Binary_search_code.dir/flags.make
CMakeFiles/Binary_search_code.dir/EE312_day14_binary_search.c.o: ../EE312_day14_binary_search.c
CMakeFiles/Binary_search_code.dir/EE312_day14_binary_search.c.o: CMakeFiles/Binary_search_code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vn2783/github_repos/EE312_Sum_22_lectures/day14_recursion/Binary_search_code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Binary_search_code.dir/EE312_day14_binary_search.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Binary_search_code.dir/EE312_day14_binary_search.c.o -MF CMakeFiles/Binary_search_code.dir/EE312_day14_binary_search.c.o.d -o CMakeFiles/Binary_search_code.dir/EE312_day14_binary_search.c.o -c /Users/vn2783/github_repos/EE312_Sum_22_lectures/day14_recursion/Binary_search_code/EE312_day14_binary_search.c

CMakeFiles/Binary_search_code.dir/EE312_day14_binary_search.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Binary_search_code.dir/EE312_day14_binary_search.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vn2783/github_repos/EE312_Sum_22_lectures/day14_recursion/Binary_search_code/EE312_day14_binary_search.c > CMakeFiles/Binary_search_code.dir/EE312_day14_binary_search.c.i

CMakeFiles/Binary_search_code.dir/EE312_day14_binary_search.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Binary_search_code.dir/EE312_day14_binary_search.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vn2783/github_repos/EE312_Sum_22_lectures/day14_recursion/Binary_search_code/EE312_day14_binary_search.c -o CMakeFiles/Binary_search_code.dir/EE312_day14_binary_search.c.s

# Object files for target Binary_search_code
Binary_search_code_OBJECTS = \
"CMakeFiles/Binary_search_code.dir/EE312_day14_binary_search.c.o"

# External object files for target Binary_search_code
Binary_search_code_EXTERNAL_OBJECTS =

Binary_search_code: CMakeFiles/Binary_search_code.dir/EE312_day14_binary_search.c.o
Binary_search_code: CMakeFiles/Binary_search_code.dir/build.make
Binary_search_code: CMakeFiles/Binary_search_code.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/vn2783/github_repos/EE312_Sum_22_lectures/day14_recursion/Binary_search_code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Binary_search_code"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Binary_search_code.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Binary_search_code.dir/build: Binary_search_code
.PHONY : CMakeFiles/Binary_search_code.dir/build

CMakeFiles/Binary_search_code.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Binary_search_code.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Binary_search_code.dir/clean

CMakeFiles/Binary_search_code.dir/depend:
	cd /Users/vn2783/github_repos/EE312_Sum_22_lectures/day14_recursion/Binary_search_code/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/vn2783/github_repos/EE312_Sum_22_lectures/day14_recursion/Binary_search_code /Users/vn2783/github_repos/EE312_Sum_22_lectures/day14_recursion/Binary_search_code /Users/vn2783/github_repos/EE312_Sum_22_lectures/day14_recursion/Binary_search_code/cmake-build-debug /Users/vn2783/github_repos/EE312_Sum_22_lectures/day14_recursion/Binary_search_code/cmake-build-debug /Users/vn2783/github_repos/EE312_Sum_22_lectures/day14_recursion/Binary_search_code/cmake-build-debug/CMakeFiles/Binary_search_code.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Binary_search_code.dir/depend

