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
CMAKE_SOURCE_DIR = /home/leyalutik/Desktop/git/mind_sharp/Qt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/leyalutik/Desktop/git/mind_sharp/Qt/build

# Include any dependencies generated for this target.
include CMakeFiles/MindSharpFinal.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MindSharpFinal.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MindSharpFinal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MindSharpFinal.dir/flags.make

MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp: ../resourses.qrc
MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp: CMakeFiles/MindSharpFinal_autogen.dir/AutoRcc_resourses_EWIEGA46WW_Info.json
MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp: ../rectangle.png
MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp: ../title.png
MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp: ../button.png
MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp: /usr/lib/qt5/bin/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/leyalutik/Desktop/git/mind_sharp/Qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic RCC for resourses.qrc"
	/usr/bin/cmake -E cmake_autorcc /home/leyalutik/Desktop/git/mind_sharp/Qt/build/CMakeFiles/MindSharpFinal_autogen.dir/AutoRcc_resourses_EWIEGA46WW_Info.json Debug

CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/mocs_compilation.cpp.o: CMakeFiles/MindSharpFinal.dir/flags.make
CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/mocs_compilation.cpp.o: MindSharpFinal_autogen/mocs_compilation.cpp
CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/mocs_compilation.cpp.o: CMakeFiles/MindSharpFinal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leyalutik/Desktop/git/mind_sharp/Qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/mocs_compilation.cpp.o -MF CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/mocs_compilation.cpp.o -c /home/leyalutik/Desktop/git/mind_sharp/Qt/build/MindSharpFinal_autogen/mocs_compilation.cpp

CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leyalutik/Desktop/git/mind_sharp/Qt/build/MindSharpFinal_autogen/mocs_compilation.cpp > CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/mocs_compilation.cpp.i

CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leyalutik/Desktop/git/mind_sharp/Qt/build/MindSharpFinal_autogen/mocs_compilation.cpp -o CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/mocs_compilation.cpp.s

CMakeFiles/MindSharpFinal.dir/main.cpp.o: CMakeFiles/MindSharpFinal.dir/flags.make
CMakeFiles/MindSharpFinal.dir/main.cpp.o: ../main.cpp
CMakeFiles/MindSharpFinal.dir/main.cpp.o: CMakeFiles/MindSharpFinal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leyalutik/Desktop/git/mind_sharp/Qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MindSharpFinal.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MindSharpFinal.dir/main.cpp.o -MF CMakeFiles/MindSharpFinal.dir/main.cpp.o.d -o CMakeFiles/MindSharpFinal.dir/main.cpp.o -c /home/leyalutik/Desktop/git/mind_sharp/Qt/main.cpp

CMakeFiles/MindSharpFinal.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MindSharpFinal.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leyalutik/Desktop/git/mind_sharp/Qt/main.cpp > CMakeFiles/MindSharpFinal.dir/main.cpp.i

CMakeFiles/MindSharpFinal.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MindSharpFinal.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leyalutik/Desktop/git/mind_sharp/Qt/main.cpp -o CMakeFiles/MindSharpFinal.dir/main.cpp.s

CMakeFiles/MindSharpFinal.dir/mainmenu.cpp.o: CMakeFiles/MindSharpFinal.dir/flags.make
CMakeFiles/MindSharpFinal.dir/mainmenu.cpp.o: ../mainmenu.cpp
CMakeFiles/MindSharpFinal.dir/mainmenu.cpp.o: CMakeFiles/MindSharpFinal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leyalutik/Desktop/git/mind_sharp/Qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/MindSharpFinal.dir/mainmenu.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MindSharpFinal.dir/mainmenu.cpp.o -MF CMakeFiles/MindSharpFinal.dir/mainmenu.cpp.o.d -o CMakeFiles/MindSharpFinal.dir/mainmenu.cpp.o -c /home/leyalutik/Desktop/git/mind_sharp/Qt/mainmenu.cpp

CMakeFiles/MindSharpFinal.dir/mainmenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MindSharpFinal.dir/mainmenu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leyalutik/Desktop/git/mind_sharp/Qt/mainmenu.cpp > CMakeFiles/MindSharpFinal.dir/mainmenu.cpp.i

CMakeFiles/MindSharpFinal.dir/mainmenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MindSharpFinal.dir/mainmenu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leyalutik/Desktop/git/mind_sharp/Qt/mainmenu.cpp -o CMakeFiles/MindSharpFinal.dir/mainmenu.cpp.s

CMakeFiles/MindSharpFinal.dir/menu_start_play.cpp.o: CMakeFiles/MindSharpFinal.dir/flags.make
CMakeFiles/MindSharpFinal.dir/menu_start_play.cpp.o: ../menu_start_play.cpp
CMakeFiles/MindSharpFinal.dir/menu_start_play.cpp.o: CMakeFiles/MindSharpFinal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leyalutik/Desktop/git/mind_sharp/Qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/MindSharpFinal.dir/menu_start_play.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MindSharpFinal.dir/menu_start_play.cpp.o -MF CMakeFiles/MindSharpFinal.dir/menu_start_play.cpp.o.d -o CMakeFiles/MindSharpFinal.dir/menu_start_play.cpp.o -c /home/leyalutik/Desktop/git/mind_sharp/Qt/menu_start_play.cpp

CMakeFiles/MindSharpFinal.dir/menu_start_play.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MindSharpFinal.dir/menu_start_play.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leyalutik/Desktop/git/mind_sharp/Qt/menu_start_play.cpp > CMakeFiles/MindSharpFinal.dir/menu_start_play.cpp.i

CMakeFiles/MindSharpFinal.dir/menu_start_play.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MindSharpFinal.dir/menu_start_play.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leyalutik/Desktop/git/mind_sharp/Qt/menu_start_play.cpp -o CMakeFiles/MindSharpFinal.dir/menu_start_play.cpp.s

CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp.o: CMakeFiles/MindSharpFinal.dir/flags.make
CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp.o: MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp
CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp.o: CMakeFiles/MindSharpFinal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leyalutik/Desktop/git/mind_sharp/Qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp.o -MF CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp.o.d -o CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp.o -c /home/leyalutik/Desktop/git/mind_sharp/Qt/build/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp

CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leyalutik/Desktop/git/mind_sharp/Qt/build/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp > CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp.i

CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leyalutik/Desktop/git/mind_sharp/Qt/build/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp -o CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp.s

# Object files for target MindSharpFinal
MindSharpFinal_OBJECTS = \
"CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/MindSharpFinal.dir/main.cpp.o" \
"CMakeFiles/MindSharpFinal.dir/mainmenu.cpp.o" \
"CMakeFiles/MindSharpFinal.dir/menu_start_play.cpp.o" \
"CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp.o"

# External object files for target MindSharpFinal
MindSharpFinal_EXTERNAL_OBJECTS =

MindSharpFinal: CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/mocs_compilation.cpp.o
MindSharpFinal: CMakeFiles/MindSharpFinal.dir/main.cpp.o
MindSharpFinal: CMakeFiles/MindSharpFinal.dir/mainmenu.cpp.o
MindSharpFinal: CMakeFiles/MindSharpFinal.dir/menu_start_play.cpp.o
MindSharpFinal: CMakeFiles/MindSharpFinal.dir/MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp.o
MindSharpFinal: CMakeFiles/MindSharpFinal.dir/build.make
MindSharpFinal: SOURCE/Game/libGame_Library.a
MindSharpFinal: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
MindSharpFinal: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
MindSharpFinal: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
MindSharpFinal: CMakeFiles/MindSharpFinal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/leyalutik/Desktop/git/mind_sharp/Qt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable MindSharpFinal"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MindSharpFinal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MindSharpFinal.dir/build: MindSharpFinal
.PHONY : CMakeFiles/MindSharpFinal.dir/build

CMakeFiles/MindSharpFinal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MindSharpFinal.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MindSharpFinal.dir/clean

CMakeFiles/MindSharpFinal.dir/depend: MindSharpFinal_autogen/EWIEGA46WW/qrc_resourses.cpp
	cd /home/leyalutik/Desktop/git/mind_sharp/Qt/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/leyalutik/Desktop/git/mind_sharp/Qt /home/leyalutik/Desktop/git/mind_sharp/Qt /home/leyalutik/Desktop/git/mind_sharp/Qt/build /home/leyalutik/Desktop/git/mind_sharp/Qt/build /home/leyalutik/Desktop/git/mind_sharp/Qt/build/CMakeFiles/MindSharpFinal.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MindSharpFinal.dir/depend
