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
CMAKE_SOURCE_DIR = /Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/vector_sum21.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/vector_sum21.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/vector_sum21.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vector_sum21.dir/flags.make

CMakeFiles/vector_sum21.dir/main.cpp.o: CMakeFiles/vector_sum21.dir/flags.make
CMakeFiles/vector_sum21.dir/main.cpp.o: ../main.cpp
CMakeFiles/vector_sum21.dir/main.cpp.o: CMakeFiles/vector_sum21.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vector_sum21.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vector_sum21.dir/main.cpp.o -MF CMakeFiles/vector_sum21.dir/main.cpp.o.d -o CMakeFiles/vector_sum21.dir/main.cpp.o -c /Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21/main.cpp

CMakeFiles/vector_sum21.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vector_sum21.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21/main.cpp > CMakeFiles/vector_sum21.dir/main.cpp.i

CMakeFiles/vector_sum21.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vector_sum21.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21/main.cpp -o CMakeFiles/vector_sum21.dir/main.cpp.s

CMakeFiles/vector_sum21.dir/Vector.cpp.o: CMakeFiles/vector_sum21.dir/flags.make
CMakeFiles/vector_sum21.dir/Vector.cpp.o: ../Vector.cpp
CMakeFiles/vector_sum21.dir/Vector.cpp.o: CMakeFiles/vector_sum21.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/vector_sum21.dir/Vector.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vector_sum21.dir/Vector.cpp.o -MF CMakeFiles/vector_sum21.dir/Vector.cpp.o.d -o CMakeFiles/vector_sum21.dir/Vector.cpp.o -c /Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21/Vector.cpp

CMakeFiles/vector_sum21.dir/Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vector_sum21.dir/Vector.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21/Vector.cpp > CMakeFiles/vector_sum21.dir/Vector.cpp.i

CMakeFiles/vector_sum21.dir/Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vector_sum21.dir/Vector.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21/Vector.cpp -o CMakeFiles/vector_sum21.dir/Vector.cpp.s

# Object files for target vector_sum21
vector_sum21_OBJECTS = \
"CMakeFiles/vector_sum21.dir/main.cpp.o" \
"CMakeFiles/vector_sum21.dir/Vector.cpp.o"

# External object files for target vector_sum21
vector_sum21_EXTERNAL_OBJECTS =

vector_sum21: CMakeFiles/vector_sum21.dir/main.cpp.o
vector_sum21: CMakeFiles/vector_sum21.dir/Vector.cpp.o
vector_sum21: CMakeFiles/vector_sum21.dir/build.make
vector_sum21: CMakeFiles/vector_sum21.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable vector_sum21"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vector_sum21.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vector_sum21.dir/build: vector_sum21
.PHONY : CMakeFiles/vector_sum21.dir/build

CMakeFiles/vector_sum21.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vector_sum21.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vector_sum21.dir/clean

CMakeFiles/vector_sum21.dir/depend:
	cd /Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21 /Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21 /Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21/cmake-build-debug /Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21/cmake-build-debug /Users/vn2783/github_repos/EE312_Sum_22_lectures/day17_vector/vector_sum21/cmake-build-debug/CMakeFiles/vector_sum21.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vector_sum21.dir/depend
