# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = "/Users/vn2783/github_repos/EE312_lectures_Fall/day19_linkedList/LinkedLIst in C/LinkedList"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/vn2783/github_repos/EE312_lectures_Fall/day19_linkedList/LinkedLIst in C/LinkedList/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/LinkedList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LinkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinkedList.dir/flags.make

CMakeFiles/LinkedList.dir/LinkedListSolution.c.o: CMakeFiles/LinkedList.dir/flags.make
CMakeFiles/LinkedList.dir/LinkedListSolution.c.o: ../LinkedListSolution.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vn2783/github_repos/EE312_lectures_Fall/day19_linkedList/LinkedLIst in C/LinkedList/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LinkedList.dir/LinkedListSolution.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LinkedList.dir/LinkedListSolution.c.o   -c "/Users/vn2783/github_repos/EE312_lectures_Fall/day19_linkedList/LinkedLIst in C/LinkedList/LinkedListSolution.c"

CMakeFiles/LinkedList.dir/LinkedListSolution.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LinkedList.dir/LinkedListSolution.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/vn2783/github_repos/EE312_lectures_Fall/day19_linkedList/LinkedLIst in C/LinkedList/LinkedListSolution.c" > CMakeFiles/LinkedList.dir/LinkedListSolution.c.i

CMakeFiles/LinkedList.dir/LinkedListSolution.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LinkedList.dir/LinkedListSolution.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/vn2783/github_repos/EE312_lectures_Fall/day19_linkedList/LinkedLIst in C/LinkedList/LinkedListSolution.c" -o CMakeFiles/LinkedList.dir/LinkedListSolution.c.s

# Object files for target LinkedList
LinkedList_OBJECTS = \
"CMakeFiles/LinkedList.dir/LinkedListSolution.c.o"

# External object files for target LinkedList
LinkedList_EXTERNAL_OBJECTS =

LinkedList: CMakeFiles/LinkedList.dir/LinkedListSolution.c.o
LinkedList: CMakeFiles/LinkedList.dir/build.make
LinkedList: CMakeFiles/LinkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/vn2783/github_repos/EE312_lectures_Fall/day19_linkedList/LinkedLIst in C/LinkedList/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable LinkedList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinkedList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinkedList.dir/build: LinkedList

.PHONY : CMakeFiles/LinkedList.dir/build

CMakeFiles/LinkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LinkedList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LinkedList.dir/clean

CMakeFiles/LinkedList.dir/depend:
	cd "/Users/vn2783/github_repos/EE312_lectures_Fall/day19_linkedList/LinkedLIst in C/LinkedList/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/vn2783/github_repos/EE312_lectures_Fall/day19_linkedList/LinkedLIst in C/LinkedList" "/Users/vn2783/github_repos/EE312_lectures_Fall/day19_linkedList/LinkedLIst in C/LinkedList" "/Users/vn2783/github_repos/EE312_lectures_Fall/day19_linkedList/LinkedLIst in C/LinkedList/cmake-build-debug" "/Users/vn2783/github_repos/EE312_lectures_Fall/day19_linkedList/LinkedLIst in C/LinkedList/cmake-build-debug" "/Users/vn2783/github_repos/EE312_lectures_Fall/day19_linkedList/LinkedLIst in C/LinkedList/cmake-build-debug/CMakeFiles/LinkedList.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/LinkedList.dir/depend

