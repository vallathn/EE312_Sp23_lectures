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
CMAKE_SOURCE_DIR = /Users/vn2783/github_repos/EE312_Sum_22_lectures/day8_more_structs/drinking_age

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/vn2783/github_repos/EE312_Sum_22_lectures/day8_more_structs/drinking_age/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/drinking_age.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/drinking_age.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/drinking_age.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/drinking_age.dir/flags.make

CMakeFiles/drinking_age.dir/main.c.o: CMakeFiles/drinking_age.dir/flags.make
CMakeFiles/drinking_age.dir/main.c.o: ../main.c
CMakeFiles/drinking_age.dir/main.c.o: CMakeFiles/drinking_age.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vn2783/github_repos/EE312_Sum_22_lectures/day8_more_structs/drinking_age/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/drinking_age.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/drinking_age.dir/main.c.o -MF CMakeFiles/drinking_age.dir/main.c.o.d -o CMakeFiles/drinking_age.dir/main.c.o -c /Users/vn2783/github_repos/EE312_Sum_22_lectures/day8_more_structs/drinking_age/main.c

CMakeFiles/drinking_age.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/drinking_age.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vn2783/github_repos/EE312_Sum_22_lectures/day8_more_structs/drinking_age/main.c > CMakeFiles/drinking_age.dir/main.c.i

CMakeFiles/drinking_age.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/drinking_age.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vn2783/github_repos/EE312_Sum_22_lectures/day8_more_structs/drinking_age/main.c -o CMakeFiles/drinking_age.dir/main.c.s

# Object files for target drinking_age
drinking_age_OBJECTS = \
"CMakeFiles/drinking_age.dir/main.c.o"

# External object files for target drinking_age
drinking_age_EXTERNAL_OBJECTS =

drinking_age: CMakeFiles/drinking_age.dir/main.c.o
drinking_age: CMakeFiles/drinking_age.dir/build.make
drinking_age: CMakeFiles/drinking_age.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/vn2783/github_repos/EE312_Sum_22_lectures/day8_more_structs/drinking_age/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable drinking_age"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/drinking_age.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/drinking_age.dir/build: drinking_age
.PHONY : CMakeFiles/drinking_age.dir/build

CMakeFiles/drinking_age.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/drinking_age.dir/cmake_clean.cmake
.PHONY : CMakeFiles/drinking_age.dir/clean

CMakeFiles/drinking_age.dir/depend:
	cd /Users/vn2783/github_repos/EE312_Sum_22_lectures/day8_more_structs/drinking_age/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/vn2783/github_repos/EE312_Sum_22_lectures/day8_more_structs/drinking_age /Users/vn2783/github_repos/EE312_Sum_22_lectures/day8_more_structs/drinking_age /Users/vn2783/github_repos/EE312_Sum_22_lectures/day8_more_structs/drinking_age/cmake-build-debug /Users/vn2783/github_repos/EE312_Sum_22_lectures/day8_more_structs/drinking_age/cmake-build-debug /Users/vn2783/github_repos/EE312_Sum_22_lectures/day8_more_structs/drinking_age/cmake-build-debug/CMakeFiles/drinking_age.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/drinking_age.dir/depend

