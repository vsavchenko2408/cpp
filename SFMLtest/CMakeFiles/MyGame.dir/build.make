# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/master/Repositories/cpp/SFMLtest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/master/Repositories/cpp/SFMLtest

# Include any dependencies generated for this target.
include CMakeFiles/MyGame.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyGame.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyGame.dir/flags.make

CMakeFiles/MyGame.dir/main.cpp.o: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/main.cpp.o: main.cpp
CMakeFiles/MyGame.dir/main.cpp.o: CMakeFiles/MyGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/master/Repositories/cpp/SFMLtest/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyGame.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyGame.dir/main.cpp.o -MF CMakeFiles/MyGame.dir/main.cpp.o.d -o CMakeFiles/MyGame.dir/main.cpp.o -c /home/master/Repositories/cpp/SFMLtest/main.cpp

CMakeFiles/MyGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyGame.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/master/Repositories/cpp/SFMLtest/main.cpp > CMakeFiles/MyGame.dir/main.cpp.i

CMakeFiles/MyGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyGame.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/master/Repositories/cpp/SFMLtest/main.cpp -o CMakeFiles/MyGame.dir/main.cpp.s

# Object files for target MyGame
MyGame_OBJECTS = \
"CMakeFiles/MyGame.dir/main.cpp.o"

# External object files for target MyGame
MyGame_EXTERNAL_OBJECTS =

MyGame: CMakeFiles/MyGame.dir/main.cpp.o
MyGame: CMakeFiles/MyGame.dir/build.make
MyGame: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so.2.5.1
MyGame: /usr/lib/x86_64-linux-gnu/libsfml-window.so.2.5.1
MyGame: /usr/lib/x86_64-linux-gnu/libsfml-system.so.2.5.1
MyGame: CMakeFiles/MyGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/master/Repositories/cpp/SFMLtest/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MyGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyGame.dir/build: MyGame
.PHONY : CMakeFiles/MyGame.dir/build

CMakeFiles/MyGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyGame.dir/clean

CMakeFiles/MyGame.dir/depend:
	cd /home/master/Repositories/cpp/SFMLtest && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/master/Repositories/cpp/SFMLtest /home/master/Repositories/cpp/SFMLtest /home/master/Repositories/cpp/SFMLtest /home/master/Repositories/cpp/SFMLtest /home/master/Repositories/cpp/SFMLtest/CMakeFiles/MyGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyGame.dir/depend

