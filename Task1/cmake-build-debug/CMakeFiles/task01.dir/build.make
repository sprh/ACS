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
CMAKE_SOURCE_DIR = /Users/sprh.t/Downloads/01-proc-c++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sprh.t/Downloads/01-proc-c++/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/task01.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/task01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task01.dir/flags.make

CMakeFiles/task01.dir/triangle.cpp.o: CMakeFiles/task01.dir/flags.make
CMakeFiles/task01.dir/triangle.cpp.o: ../triangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sprh.t/Downloads/01-proc-c++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task01.dir/triangle.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task01.dir/triangle.cpp.o -c /Users/sprh.t/Downloads/01-proc-c++/triangle.cpp

CMakeFiles/task01.dir/triangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task01.dir/triangle.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sprh.t/Downloads/01-proc-c++/triangle.cpp > CMakeFiles/task01.dir/triangle.cpp.i

CMakeFiles/task01.dir/triangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task01.dir/triangle.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sprh.t/Downloads/01-proc-c++/triangle.cpp -o CMakeFiles/task01.dir/triangle.cpp.s

CMakeFiles/task01.dir/rectangle.cpp.o: CMakeFiles/task01.dir/flags.make
CMakeFiles/task01.dir/rectangle.cpp.o: ../rectangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sprh.t/Downloads/01-proc-c++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/task01.dir/rectangle.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task01.dir/rectangle.cpp.o -c /Users/sprh.t/Downloads/01-proc-c++/rectangle.cpp

CMakeFiles/task01.dir/rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task01.dir/rectangle.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sprh.t/Downloads/01-proc-c++/rectangle.cpp > CMakeFiles/task01.dir/rectangle.cpp.i

CMakeFiles/task01.dir/rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task01.dir/rectangle.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sprh.t/Downloads/01-proc-c++/rectangle.cpp -o CMakeFiles/task01.dir/rectangle.cpp.s

CMakeFiles/task01.dir/shape.cpp.o: CMakeFiles/task01.dir/flags.make
CMakeFiles/task01.dir/shape.cpp.o: ../shape.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sprh.t/Downloads/01-proc-c++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/task01.dir/shape.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task01.dir/shape.cpp.o -c /Users/sprh.t/Downloads/01-proc-c++/shape.cpp

CMakeFiles/task01.dir/shape.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task01.dir/shape.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sprh.t/Downloads/01-proc-c++/shape.cpp > CMakeFiles/task01.dir/shape.cpp.i

CMakeFiles/task01.dir/shape.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task01.dir/shape.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sprh.t/Downloads/01-proc-c++/shape.cpp -o CMakeFiles/task01.dir/shape.cpp.s

CMakeFiles/task01.dir/container.cpp.o: CMakeFiles/task01.dir/flags.make
CMakeFiles/task01.dir/container.cpp.o: ../container.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sprh.t/Downloads/01-proc-c++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/task01.dir/container.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task01.dir/container.cpp.o -c /Users/sprh.t/Downloads/01-proc-c++/container.cpp

CMakeFiles/task01.dir/container.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task01.dir/container.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sprh.t/Downloads/01-proc-c++/container.cpp > CMakeFiles/task01.dir/container.cpp.i

CMakeFiles/task01.dir/container.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task01.dir/container.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sprh.t/Downloads/01-proc-c++/container.cpp -o CMakeFiles/task01.dir/container.cpp.s

CMakeFiles/task01.dir/main.cpp.o: CMakeFiles/task01.dir/flags.make
CMakeFiles/task01.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sprh.t/Downloads/01-proc-c++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/task01.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task01.dir/main.cpp.o -c /Users/sprh.t/Downloads/01-proc-c++/main.cpp

CMakeFiles/task01.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task01.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sprh.t/Downloads/01-proc-c++/main.cpp > CMakeFiles/task01.dir/main.cpp.i

CMakeFiles/task01.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task01.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sprh.t/Downloads/01-proc-c++/main.cpp -o CMakeFiles/task01.dir/main.cpp.s

# Object files for target task01
task01_OBJECTS = \
"CMakeFiles/task01.dir/triangle.cpp.o" \
"CMakeFiles/task01.dir/rectangle.cpp.o" \
"CMakeFiles/task01.dir/shape.cpp.o" \
"CMakeFiles/task01.dir/container.cpp.o" \
"CMakeFiles/task01.dir/main.cpp.o"

# External object files for target task01
task01_EXTERNAL_OBJECTS =

../bin/task01: CMakeFiles/task01.dir/triangle.cpp.o
../bin/task01: CMakeFiles/task01.dir/rectangle.cpp.o
../bin/task01: CMakeFiles/task01.dir/shape.cpp.o
../bin/task01: CMakeFiles/task01.dir/container.cpp.o
../bin/task01: CMakeFiles/task01.dir/main.cpp.o
../bin/task01: CMakeFiles/task01.dir/build.make
../bin/task01: CMakeFiles/task01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sprh.t/Downloads/01-proc-c++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ../bin/task01"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task01.dir/build: ../bin/task01
.PHONY : CMakeFiles/task01.dir/build

CMakeFiles/task01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task01.dir/clean

CMakeFiles/task01.dir/depend:
	cd /Users/sprh.t/Downloads/01-proc-c++/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sprh.t/Downloads/01-proc-c++ /Users/sprh.t/Downloads/01-proc-c++ /Users/sprh.t/Downloads/01-proc-c++/cmake-build-debug /Users/sprh.t/Downloads/01-proc-c++/cmake-build-debug /Users/sprh.t/Downloads/01-proc-c++/cmake-build-debug/CMakeFiles/task01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task01.dir/depend
