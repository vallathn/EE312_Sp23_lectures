# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/vallathn/Box Sync/EE312_su_2019/Lectures/day1_intro/HW1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/vallathn/Box Sync/EE312_su_2019/Lectures/day1_intro/HW1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/HW1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HW1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW1.dir/flags.make

CMakeFiles/HW1.dir/HW.c.o: CMakeFiles/HW1.dir/flags.make
CMakeFiles/HW1.dir/HW.c.o: ../HW.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vallathn/Box Sync/EE312_su_2019/Lectures/day1_intro/HW1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/HW1.dir/HW.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/HW1.dir/HW.c.o   -c "/Users/vallathn/Box Sync/EE312_su_2019/Lectures/day1_intro/HW1/HW.c"

CMakeFiles/HW1.dir/HW.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HW1.dir/HW.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/vallathn/Box Sync/EE312_su_2019/Lectures/day1_intro/HW1/HW.c" > CMakeFiles/HW1.dir/HW.c.i

CMakeFiles/HW1.dir/HW.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HW1.dir/HW.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/vallathn/Box Sync/EE312_su_2019/Lectures/day1_intro/HW1/HW.c" -o CMakeFiles/HW1.dir/HW.c.s

# Object files for target HW1
HW1_OBJECTS = \
"CMakeFiles/HW1.dir/HW.c.o"

# External object files for target HW1
HW1_EXTERNAL_OBJECTS =

HW1: CMakeFiles/HW1.dir/HW.c.o
HW1: CMakeFiles/HW1.dir/build.make
HW1: CMakeFiles/HW1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/vallathn/Box Sync/EE312_su_2019/Lectures/day1_intro/HW1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable HW1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HW1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW1.dir/build: HW1

.PHONY : CMakeFiles/HW1.dir/build

CMakeFiles/HW1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HW1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HW1.dir/clean

CMakeFiles/HW1.dir/depend:
	cd "/Users/vallathn/Box Sync/EE312_su_2019/Lectures/day1_intro/HW1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/vallathn/Box Sync/EE312_su_2019/Lectures/day1_intro/HW1" "/Users/vallathn/Box Sync/EE312_su_2019/Lectures/day1_intro/HW1" "/Users/vallathn/Box Sync/EE312_su_2019/Lectures/day1_intro/HW1/cmake-build-debug" "/Users/vallathn/Box Sync/EE312_su_2019/Lectures/day1_intro/HW1/cmake-build-debug" "/Users/vallathn/Box Sync/EE312_su_2019/Lectures/day1_intro/HW1/cmake-build-debug/CMakeFiles/HW1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/HW1.dir/depend

