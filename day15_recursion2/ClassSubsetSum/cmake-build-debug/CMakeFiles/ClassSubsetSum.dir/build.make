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
CMAKE_SOURCE_DIR = /Users/vn2783/github_repos/EE312-lectures/day16_recusion2/ClassSubsetSum

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/vn2783/github_repos/EE312-lectures/day16_recusion2/ClassSubsetSum/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ClassSubsetSum.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ClassSubsetSum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ClassSubsetSum.dir/flags.make

CMakeFiles/ClassSubsetSum.dir/main.c.o: CMakeFiles/ClassSubsetSum.dir/flags.make
CMakeFiles/ClassSubsetSum.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vn2783/github_repos/EE312-lectures/day16_recusion2/ClassSubsetSum/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ClassSubsetSum.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ClassSubsetSum.dir/main.c.o   -c /Users/vn2783/github_repos/EE312-lectures/day16_recusion2/ClassSubsetSum/main.c

CMakeFiles/ClassSubsetSum.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ClassSubsetSum.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vn2783/github_repos/EE312-lectures/day16_recusion2/ClassSubsetSum/main.c > CMakeFiles/ClassSubsetSum.dir/main.c.i

CMakeFiles/ClassSubsetSum.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ClassSubsetSum.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vn2783/github_repos/EE312-lectures/day16_recusion2/ClassSubsetSum/main.c -o CMakeFiles/ClassSubsetSum.dir/main.c.s

# Object files for target ClassSubsetSum
ClassSubsetSum_OBJECTS = \
"CMakeFiles/ClassSubsetSum.dir/main.c.o"

# External object files for target ClassSubsetSum
ClassSubsetSum_EXTERNAL_OBJECTS =

ClassSubsetSum: CMakeFiles/ClassSubsetSum.dir/main.c.o
ClassSubsetSum: CMakeFiles/ClassSubsetSum.dir/build.make
ClassSubsetSum: CMakeFiles/ClassSubsetSum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/vn2783/github_repos/EE312-lectures/day16_recusion2/ClassSubsetSum/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ClassSubsetSum"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ClassSubsetSum.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ClassSubsetSum.dir/build: ClassSubsetSum

.PHONY : CMakeFiles/ClassSubsetSum.dir/build

CMakeFiles/ClassSubsetSum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ClassSubsetSum.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ClassSubsetSum.dir/clean

CMakeFiles/ClassSubsetSum.dir/depend:
	cd /Users/vn2783/github_repos/EE312-lectures/day16_recusion2/ClassSubsetSum/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/vn2783/github_repos/EE312-lectures/day16_recusion2/ClassSubsetSum /Users/vn2783/github_repos/EE312-lectures/day16_recusion2/ClassSubsetSum /Users/vn2783/github_repos/EE312-lectures/day16_recusion2/ClassSubsetSum/cmake-build-debug /Users/vn2783/github_repos/EE312-lectures/day16_recusion2/ClassSubsetSum/cmake-build-debug /Users/vn2783/github_repos/EE312-lectures/day16_recusion2/ClassSubsetSum/cmake-build-debug/CMakeFiles/ClassSubsetSum.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ClassSubsetSum.dir/depend
