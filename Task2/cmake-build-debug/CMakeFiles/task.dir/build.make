# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /Users/sprh.t/Documents/HSEPI/ACS/Task2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sprh.t/Documents/HSEPI/ACS/Task2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/task.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/task.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task.dir/flags.make

CMakeFiles/task.dir/container/container.cpp.o: CMakeFiles/task.dir/flags.make
CMakeFiles/task.dir/container/container.cpp.o: ../container/container.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sprh.t/Documents/HSEPI/ACS/Task2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task.dir/container/container.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task.dir/container/container.cpp.o -c /Users/sprh.t/Documents/HSEPI/ACS/Task2/container/container.cpp

CMakeFiles/task.dir/container/container.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task.dir/container/container.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sprh.t/Documents/HSEPI/ACS/Task2/container/container.cpp > CMakeFiles/task.dir/container/container.cpp.i

CMakeFiles/task.dir/container/container.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task.dir/container/container.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sprh.t/Documents/HSEPI/ACS/Task2/container/container.cpp -o CMakeFiles/task.dir/container/container.cpp.s

CMakeFiles/task.dir/shape/shape.cpp.o: CMakeFiles/task.dir/flags.make
CMakeFiles/task.dir/shape/shape.cpp.o: ../shape/shape.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sprh.t/Documents/HSEPI/ACS/Task2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/task.dir/shape/shape.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task.dir/shape/shape.cpp.o -c /Users/sprh.t/Documents/HSEPI/ACS/Task2/shape/shape.cpp

CMakeFiles/task.dir/shape/shape.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task.dir/shape/shape.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sprh.t/Documents/HSEPI/ACS/Task2/shape/shape.cpp > CMakeFiles/task.dir/shape/shape.cpp.i

CMakeFiles/task.dir/shape/shape.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task.dir/shape/shape.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sprh.t/Documents/HSEPI/ACS/Task2/shape/shape.cpp -o CMakeFiles/task.dir/shape/shape.cpp.s

CMakeFiles/task.dir/shape/point/point.cpp.o: CMakeFiles/task.dir/flags.make
CMakeFiles/task.dir/shape/point/point.cpp.o: ../shape/point/point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sprh.t/Documents/HSEPI/ACS/Task2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/task.dir/shape/point/point.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task.dir/shape/point/point.cpp.o -c /Users/sprh.t/Documents/HSEPI/ACS/Task2/shape/point/point.cpp

CMakeFiles/task.dir/shape/point/point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task.dir/shape/point/point.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sprh.t/Documents/HSEPI/ACS/Task2/shape/point/point.cpp > CMakeFiles/task.dir/shape/point/point.cpp.i

CMakeFiles/task.dir/shape/point/point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task.dir/shape/point/point.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sprh.t/Documents/HSEPI/ACS/Task2/shape/point/point.cpp -o CMakeFiles/task.dir/shape/point/point.cpp.s

CMakeFiles/task.dir/shape/rectangle/rectangle.cpp.o: CMakeFiles/task.dir/flags.make
CMakeFiles/task.dir/shape/rectangle/rectangle.cpp.o: ../shape/rectangle/rectangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sprh.t/Documents/HSEPI/ACS/Task2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/task.dir/shape/rectangle/rectangle.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task.dir/shape/rectangle/rectangle.cpp.o -c /Users/sprh.t/Documents/HSEPI/ACS/Task2/shape/rectangle/rectangle.cpp

CMakeFiles/task.dir/shape/rectangle/rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task.dir/shape/rectangle/rectangle.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sprh.t/Documents/HSEPI/ACS/Task2/shape/rectangle/rectangle.cpp > CMakeFiles/task.dir/shape/rectangle/rectangle.cpp.i

CMakeFiles/task.dir/shape/rectangle/rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task.dir/shape/rectangle/rectangle.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sprh.t/Documents/HSEPI/ACS/Task2/shape/rectangle/rectangle.cpp -o CMakeFiles/task.dir/shape/rectangle/rectangle.cpp.s

CMakeFiles/task.dir/shape/color/color.cpp.o: CMakeFiles/task.dir/flags.make
CMakeFiles/task.dir/shape/color/color.cpp.o: ../shape/color/color.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sprh.t/Documents/HSEPI/ACS/Task2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/task.dir/shape/color/color.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task.dir/shape/color/color.cpp.o -c /Users/sprh.t/Documents/HSEPI/ACS/Task2/shape/color/color.cpp

CMakeFiles/task.dir/shape/color/color.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task.dir/shape/color/color.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sprh.t/Documents/HSEPI/ACS/Task2/shape/color/color.cpp > CMakeFiles/task.dir/shape/color/color.cpp.i

CMakeFiles/task.dir/shape/color/color.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task.dir/shape/color/color.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sprh.t/Documents/HSEPI/ACS/Task2/shape/color/color.cpp -o CMakeFiles/task.dir/shape/color/color.cpp.s

CMakeFiles/task.dir/main.cpp.o: CMakeFiles/task.dir/flags.make
CMakeFiles/task.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sprh.t/Documents/HSEPI/ACS/Task2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/task.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task.dir/main.cpp.o -c /Users/sprh.t/Documents/HSEPI/ACS/Task2/main.cpp

CMakeFiles/task.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sprh.t/Documents/HSEPI/ACS/Task2/main.cpp > CMakeFiles/task.dir/main.cpp.i

CMakeFiles/task.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sprh.t/Documents/HSEPI/ACS/Task2/main.cpp -o CMakeFiles/task.dir/main.cpp.s

CMakeFiles/task.dir/shape/circle/circle.cpp.o: CMakeFiles/task.dir/flags.make
CMakeFiles/task.dir/shape/circle/circle.cpp.o: ../shape/circle/circle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sprh.t/Documents/HSEPI/ACS/Task2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/task.dir/shape/circle/circle.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task.dir/shape/circle/circle.cpp.o -c /Users/sprh.t/Documents/HSEPI/ACS/Task2/shape/circle/circle.cpp

CMakeFiles/task.dir/shape/circle/circle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task.dir/shape/circle/circle.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sprh.t/Documents/HSEPI/ACS/Task2/shape/circle/circle.cpp > CMakeFiles/task.dir/shape/circle/circle.cpp.i

CMakeFiles/task.dir/shape/circle/circle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task.dir/shape/circle/circle.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sprh.t/Documents/HSEPI/ACS/Task2/shape/circle/circle.cpp -o CMakeFiles/task.dir/shape/circle/circle.cpp.s

# Object files for target task
task_OBJECTS = \
"CMakeFiles/task.dir/container/container.cpp.o" \
"CMakeFiles/task.dir/shape/shape.cpp.o" \
"CMakeFiles/task.dir/shape/point/point.cpp.o" \
"CMakeFiles/task.dir/shape/rectangle/rectangle.cpp.o" \
"CMakeFiles/task.dir/shape/color/color.cpp.o" \
"CMakeFiles/task.dir/main.cpp.o" \
"CMakeFiles/task.dir/shape/circle/circle.cpp.o"

# External object files for target task
task_EXTERNAL_OBJECTS =

../bin/task: CMakeFiles/task.dir/container/container.cpp.o
../bin/task: CMakeFiles/task.dir/shape/shape.cpp.o
../bin/task: CMakeFiles/task.dir/shape/point/point.cpp.o
../bin/task: CMakeFiles/task.dir/shape/rectangle/rectangle.cpp.o
../bin/task: CMakeFiles/task.dir/shape/color/color.cpp.o
../bin/task: CMakeFiles/task.dir/main.cpp.o
../bin/task: CMakeFiles/task.dir/shape/circle/circle.cpp.o
../bin/task: CMakeFiles/task.dir/build.make
../bin/task: CMakeFiles/task.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sprh.t/Documents/HSEPI/ACS/Task2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable ../bin/task"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task.dir/build: ../bin/task
.PHONY : CMakeFiles/task.dir/build

CMakeFiles/task.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task.dir/clean

CMakeFiles/task.dir/depend:
	cd /Users/sprh.t/Documents/HSEPI/ACS/Task2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sprh.t/Documents/HSEPI/ACS/Task2 /Users/sprh.t/Documents/HSEPI/ACS/Task2 /Users/sprh.t/Documents/HSEPI/ACS/Task2/cmake-build-debug /Users/sprh.t/Documents/HSEPI/ACS/Task2/cmake-build-debug /Users/sprh.t/Documents/HSEPI/ACS/Task2/cmake-build-debug/CMakeFiles/task.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task.dir/depend

