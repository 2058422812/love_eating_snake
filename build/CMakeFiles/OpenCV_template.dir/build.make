# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/a/snake/Love_eating_snake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/a/snake/Love_eating_snake/build

# Include any dependencies generated for this target.
include CMakeFiles/OpenCV_template.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OpenCV_template.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpenCV_template.dir/flags.make

CMakeFiles/OpenCV_template.dir/src/board.cpp.o: CMakeFiles/OpenCV_template.dir/flags.make
CMakeFiles/OpenCV_template.dir/src/board.cpp.o: ../src/board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/a/snake/Love_eating_snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OpenCV_template.dir/src/board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenCV_template.dir/src/board.cpp.o -c /home/a/snake/Love_eating_snake/src/board.cpp

CMakeFiles/OpenCV_template.dir/src/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenCV_template.dir/src/board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/a/snake/Love_eating_snake/src/board.cpp > CMakeFiles/OpenCV_template.dir/src/board.cpp.i

CMakeFiles/OpenCV_template.dir/src/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenCV_template.dir/src/board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/a/snake/Love_eating_snake/src/board.cpp -o CMakeFiles/OpenCV_template.dir/src/board.cpp.s

CMakeFiles/OpenCV_template.dir/src/board.cpp.o.requires:

.PHONY : CMakeFiles/OpenCV_template.dir/src/board.cpp.o.requires

CMakeFiles/OpenCV_template.dir/src/board.cpp.o.provides: CMakeFiles/OpenCV_template.dir/src/board.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenCV_template.dir/build.make CMakeFiles/OpenCV_template.dir/src/board.cpp.o.provides.build
.PHONY : CMakeFiles/OpenCV_template.dir/src/board.cpp.o.provides

CMakeFiles/OpenCV_template.dir/src/board.cpp.o.provides.build: CMakeFiles/OpenCV_template.dir/src/board.cpp.o


# Object files for target OpenCV_template
OpenCV_template_OBJECTS = \
"CMakeFiles/OpenCV_template.dir/src/board.cpp.o"

# External object files for target OpenCV_template
OpenCV_template_EXTERNAL_OBJECTS =

OpenCV_template: CMakeFiles/OpenCV_template.dir/src/board.cpp.o
OpenCV_template: CMakeFiles/OpenCV_template.dir/build.make
OpenCV_template: /usr/local/lib/libopencv_dnn.so.4.1.2
OpenCV_template: /usr/local/lib/libopencv_gapi.so.4.1.2
OpenCV_template: /usr/local/lib/libopencv_highgui.so.4.1.2
OpenCV_template: /usr/local/lib/libopencv_ml.so.4.1.2
OpenCV_template: /usr/local/lib/libopencv_objdetect.so.4.1.2
OpenCV_template: /usr/local/lib/libopencv_photo.so.4.1.2
OpenCV_template: /usr/local/lib/libopencv_stitching.so.4.1.2
OpenCV_template: /usr/local/lib/libopencv_video.so.4.1.2
OpenCV_template: /usr/local/lib/libopencv_videoio.so.4.1.2
OpenCV_template: /usr/local/lib/libopencv_imgcodecs.so.4.1.2
OpenCV_template: /usr/local/lib/libopencv_calib3d.so.4.1.2
OpenCV_template: /usr/local/lib/libopencv_features2d.so.4.1.2
OpenCV_template: /usr/local/lib/libopencv_flann.so.4.1.2
OpenCV_template: /usr/local/lib/libopencv_imgproc.so.4.1.2
OpenCV_template: /usr/local/lib/libopencv_core.so.4.1.2
OpenCV_template: CMakeFiles/OpenCV_template.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/a/snake/Love_eating_snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable OpenCV_template"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OpenCV_template.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OpenCV_template.dir/build: OpenCV_template

.PHONY : CMakeFiles/OpenCV_template.dir/build

CMakeFiles/OpenCV_template.dir/requires: CMakeFiles/OpenCV_template.dir/src/board.cpp.o.requires

.PHONY : CMakeFiles/OpenCV_template.dir/requires

CMakeFiles/OpenCV_template.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OpenCV_template.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OpenCV_template.dir/clean

CMakeFiles/OpenCV_template.dir/depend:
	cd /home/a/snake/Love_eating_snake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/a/snake/Love_eating_snake /home/a/snake/Love_eating_snake /home/a/snake/Love_eating_snake/build /home/a/snake/Love_eating_snake/build /home/a/snake/Love_eating_snake/build/CMakeFiles/OpenCV_template.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OpenCV_template.dir/depend

