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
CMAKE_SOURCE_DIR = /home/leyalutik/qt/hello

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/leyalutik/qt/hello/build

# Include any dependencies generated for this target.
include CMakeFiles/hello.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hello.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hello.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello.dir/flags.make

CMakeFiles/hello.dir/hello_autogen/mocs_compilation.cpp.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/hello_autogen/mocs_compilation.cpp.o: hello_autogen/mocs_compilation.cpp
CMakeFiles/hello.dir/hello_autogen/mocs_compilation.cpp.o: CMakeFiles/hello.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leyalutik/qt/hello/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hello.dir/hello_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hello.dir/hello_autogen/mocs_compilation.cpp.o -MF CMakeFiles/hello.dir/hello_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/hello.dir/hello_autogen/mocs_compilation.cpp.o -c /home/leyalutik/qt/hello/build/hello_autogen/mocs_compilation.cpp

CMakeFiles/hello.dir/hello_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.dir/hello_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leyalutik/qt/hello/build/hello_autogen/mocs_compilation.cpp > CMakeFiles/hello.dir/hello_autogen/mocs_compilation.cpp.i

CMakeFiles/hello.dir/hello_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.dir/hello_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leyalutik/qt/hello/build/hello_autogen/mocs_compilation.cpp -o CMakeFiles/hello.dir/hello_autogen/mocs_compilation.cpp.s

CMakeFiles/hello.dir/main.cpp.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/main.cpp.o: ../main.cpp
CMakeFiles/hello.dir/main.cpp.o: CMakeFiles/hello.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leyalutik/qt/hello/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hello.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hello.dir/main.cpp.o -MF CMakeFiles/hello.dir/main.cpp.o.d -o CMakeFiles/hello.dir/main.cpp.o -c /home/leyalutik/qt/hello/main.cpp

CMakeFiles/hello.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leyalutik/qt/hello/main.cpp > CMakeFiles/hello.dir/main.cpp.i

CMakeFiles/hello.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leyalutik/qt/hello/main.cpp -o CMakeFiles/hello.dir/main.cpp.s

CMakeFiles/hello.dir/mainwindow.cpp.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/mainwindow.cpp.o: ../mainwindow.cpp
CMakeFiles/hello.dir/mainwindow.cpp.o: CMakeFiles/hello.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leyalutik/qt/hello/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/hello.dir/mainwindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hello.dir/mainwindow.cpp.o -MF CMakeFiles/hello.dir/mainwindow.cpp.o.d -o CMakeFiles/hello.dir/mainwindow.cpp.o -c /home/leyalutik/qt/hello/mainwindow.cpp

CMakeFiles/hello.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.dir/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leyalutik/qt/hello/mainwindow.cpp > CMakeFiles/hello.dir/mainwindow.cpp.i

CMakeFiles/hello.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.dir/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leyalutik/qt/hello/mainwindow.cpp -o CMakeFiles/hello.dir/mainwindow.cpp.s

# Object files for target hello
hello_OBJECTS = \
"CMakeFiles/hello.dir/hello_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/hello.dir/main.cpp.o" \
"CMakeFiles/hello.dir/mainwindow.cpp.o"

# External object files for target hello
hello_EXTERNAL_OBJECTS =

hello: CMakeFiles/hello.dir/hello_autogen/mocs_compilation.cpp.o
hello: CMakeFiles/hello.dir/main.cpp.o
hello: CMakeFiles/hello.dir/mainwindow.cpp.o
hello: CMakeFiles/hello.dir/build.make
hello: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
hello: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
hello: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
hello: CMakeFiles/hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/leyalutik/qt/hello/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable hello"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello.dir/build: hello
.PHONY : CMakeFiles/hello.dir/build

CMakeFiles/hello.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hello.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hello.dir/clean

CMakeFiles/hello.dir/depend:
	cd /home/leyalutik/qt/hello/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/leyalutik/qt/hello /home/leyalutik/qt/hello /home/leyalutik/qt/hello/build /home/leyalutik/qt/hello/build /home/leyalutik/qt/hello/build/CMakeFiles/hello.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hello.dir/depend
