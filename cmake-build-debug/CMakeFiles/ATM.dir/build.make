# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /home/tibor/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/tibor/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tibor/Desktop/projects

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tibor/Desktop/projects/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ATM.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ATM.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ATM.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ATM.dir/flags.make

CMakeFiles/ATM.dir/Basic/ATM/main.cpp.o: CMakeFiles/ATM.dir/flags.make
CMakeFiles/ATM.dir/Basic/ATM/main.cpp.o: /home/tibor/Desktop/projects/Basic/ATM/main.cpp
CMakeFiles/ATM.dir/Basic/ATM/main.cpp.o: CMakeFiles/ATM.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tibor/Desktop/projects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ATM.dir/Basic/ATM/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ATM.dir/Basic/ATM/main.cpp.o -MF CMakeFiles/ATM.dir/Basic/ATM/main.cpp.o.d -o CMakeFiles/ATM.dir/Basic/ATM/main.cpp.o -c /home/tibor/Desktop/projects/Basic/ATM/main.cpp

CMakeFiles/ATM.dir/Basic/ATM/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ATM.dir/Basic/ATM/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tibor/Desktop/projects/Basic/ATM/main.cpp > CMakeFiles/ATM.dir/Basic/ATM/main.cpp.i

CMakeFiles/ATM.dir/Basic/ATM/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ATM.dir/Basic/ATM/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tibor/Desktop/projects/Basic/ATM/main.cpp -o CMakeFiles/ATM.dir/Basic/ATM/main.cpp.s

CMakeFiles/ATM.dir/Basic/ATM/ATM.cpp.o: CMakeFiles/ATM.dir/flags.make
CMakeFiles/ATM.dir/Basic/ATM/ATM.cpp.o: /home/tibor/Desktop/projects/Basic/ATM/ATM.cpp
CMakeFiles/ATM.dir/Basic/ATM/ATM.cpp.o: CMakeFiles/ATM.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tibor/Desktop/projects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ATM.dir/Basic/ATM/ATM.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ATM.dir/Basic/ATM/ATM.cpp.o -MF CMakeFiles/ATM.dir/Basic/ATM/ATM.cpp.o.d -o CMakeFiles/ATM.dir/Basic/ATM/ATM.cpp.o -c /home/tibor/Desktop/projects/Basic/ATM/ATM.cpp

CMakeFiles/ATM.dir/Basic/ATM/ATM.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ATM.dir/Basic/ATM/ATM.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tibor/Desktop/projects/Basic/ATM/ATM.cpp > CMakeFiles/ATM.dir/Basic/ATM/ATM.cpp.i

CMakeFiles/ATM.dir/Basic/ATM/ATM.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ATM.dir/Basic/ATM/ATM.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tibor/Desktop/projects/Basic/ATM/ATM.cpp -o CMakeFiles/ATM.dir/Basic/ATM/ATM.cpp.s

# Object files for target ATM
ATM_OBJECTS = \
"CMakeFiles/ATM.dir/Basic/ATM/main.cpp.o" \
"CMakeFiles/ATM.dir/Basic/ATM/ATM.cpp.o"

# External object files for target ATM
ATM_EXTERNAL_OBJECTS =

ATM: CMakeFiles/ATM.dir/Basic/ATM/main.cpp.o
ATM: CMakeFiles/ATM.dir/Basic/ATM/ATM.cpp.o
ATM: CMakeFiles/ATM.dir/build.make
ATM: CMakeFiles/ATM.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tibor/Desktop/projects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ATM"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ATM.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ATM.dir/build: ATM
.PHONY : CMakeFiles/ATM.dir/build

CMakeFiles/ATM.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ATM.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ATM.dir/clean

CMakeFiles/ATM.dir/depend:
	cd /home/tibor/Desktop/projects/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tibor/Desktop/projects /home/tibor/Desktop/projects /home/tibor/Desktop/projects/cmake-build-debug /home/tibor/Desktop/projects/cmake-build-debug /home/tibor/Desktop/projects/cmake-build-debug/CMakeFiles/ATM.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ATM.dir/depend
