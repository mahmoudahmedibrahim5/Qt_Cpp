# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_SOURCE_DIR = /home/alien/Desktop/QtCreator/QMessageBox

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/QMessageBox.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/QMessageBox.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/QMessageBox.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QMessageBox.dir/flags.make

QMessageBox_autogen/timestamp: /usr/bin/moc
QMessageBox_autogen/timestamp: /usr/bin/uic
QMessageBox_autogen/timestamp: CMakeFiles/QMessageBox.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target QMessageBox"
	/usr/bin/cmake -E cmake_autogen /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug/CMakeFiles/QMessageBox_autogen.dir/AutogenInfo.json Debug
	/usr/bin/cmake -E touch /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug/QMessageBox_autogen/timestamp

CMakeFiles/QMessageBox.dir/codegen:
.PHONY : CMakeFiles/QMessageBox.dir/codegen

CMakeFiles/QMessageBox.dir/QMessageBox_autogen/mocs_compilation.cpp.o: CMakeFiles/QMessageBox.dir/flags.make
CMakeFiles/QMessageBox.dir/QMessageBox_autogen/mocs_compilation.cpp.o: QMessageBox_autogen/mocs_compilation.cpp
CMakeFiles/QMessageBox.dir/QMessageBox_autogen/mocs_compilation.cpp.o: CMakeFiles/QMessageBox.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/QMessageBox.dir/QMessageBox_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QMessageBox.dir/QMessageBox_autogen/mocs_compilation.cpp.o -MF CMakeFiles/QMessageBox.dir/QMessageBox_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/QMessageBox.dir/QMessageBox_autogen/mocs_compilation.cpp.o -c /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug/QMessageBox_autogen/mocs_compilation.cpp

CMakeFiles/QMessageBox.dir/QMessageBox_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QMessageBox.dir/QMessageBox_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug/QMessageBox_autogen/mocs_compilation.cpp > CMakeFiles/QMessageBox.dir/QMessageBox_autogen/mocs_compilation.cpp.i

CMakeFiles/QMessageBox.dir/QMessageBox_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QMessageBox.dir/QMessageBox_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug/QMessageBox_autogen/mocs_compilation.cpp -o CMakeFiles/QMessageBox.dir/QMessageBox_autogen/mocs_compilation.cpp.s

CMakeFiles/QMessageBox.dir/main.cpp.o: CMakeFiles/QMessageBox.dir/flags.make
CMakeFiles/QMessageBox.dir/main.cpp.o: /home/alien/Desktop/QtCreator/QMessageBox/main.cpp
CMakeFiles/QMessageBox.dir/main.cpp.o: CMakeFiles/QMessageBox.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/QMessageBox.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QMessageBox.dir/main.cpp.o -MF CMakeFiles/QMessageBox.dir/main.cpp.o.d -o CMakeFiles/QMessageBox.dir/main.cpp.o -c /home/alien/Desktop/QtCreator/QMessageBox/main.cpp

CMakeFiles/QMessageBox.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QMessageBox.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alien/Desktop/QtCreator/QMessageBox/main.cpp > CMakeFiles/QMessageBox.dir/main.cpp.i

CMakeFiles/QMessageBox.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QMessageBox.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alien/Desktop/QtCreator/QMessageBox/main.cpp -o CMakeFiles/QMessageBox.dir/main.cpp.s

CMakeFiles/QMessageBox.dir/mainwindow.cpp.o: CMakeFiles/QMessageBox.dir/flags.make
CMakeFiles/QMessageBox.dir/mainwindow.cpp.o: /home/alien/Desktop/QtCreator/QMessageBox/mainwindow.cpp
CMakeFiles/QMessageBox.dir/mainwindow.cpp.o: CMakeFiles/QMessageBox.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/QMessageBox.dir/mainwindow.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QMessageBox.dir/mainwindow.cpp.o -MF CMakeFiles/QMessageBox.dir/mainwindow.cpp.o.d -o CMakeFiles/QMessageBox.dir/mainwindow.cpp.o -c /home/alien/Desktop/QtCreator/QMessageBox/mainwindow.cpp

CMakeFiles/QMessageBox.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QMessageBox.dir/mainwindow.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alien/Desktop/QtCreator/QMessageBox/mainwindow.cpp > CMakeFiles/QMessageBox.dir/mainwindow.cpp.i

CMakeFiles/QMessageBox.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QMessageBox.dir/mainwindow.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alien/Desktop/QtCreator/QMessageBox/mainwindow.cpp -o CMakeFiles/QMessageBox.dir/mainwindow.cpp.s

# Object files for target QMessageBox
QMessageBox_OBJECTS = \
"CMakeFiles/QMessageBox.dir/QMessageBox_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/QMessageBox.dir/main.cpp.o" \
"CMakeFiles/QMessageBox.dir/mainwindow.cpp.o"

# External object files for target QMessageBox
QMessageBox_EXTERNAL_OBJECTS =

QMessageBox: CMakeFiles/QMessageBox.dir/QMessageBox_autogen/mocs_compilation.cpp.o
QMessageBox: CMakeFiles/QMessageBox.dir/main.cpp.o
QMessageBox: CMakeFiles/QMessageBox.dir/mainwindow.cpp.o
QMessageBox: CMakeFiles/QMessageBox.dir/build.make
QMessageBox: CMakeFiles/QMessageBox.dir/compiler_depend.ts
QMessageBox: /usr/lib/libQt5Widgets.so.5.15.16
QMessageBox: /usr/lib/libQt5Gui.so.5.15.16
QMessageBox: /usr/lib/libQt5Core.so.5.15.16
QMessageBox: CMakeFiles/QMessageBox.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable QMessageBox"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QMessageBox.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QMessageBox.dir/build: QMessageBox
.PHONY : CMakeFiles/QMessageBox.dir/build

CMakeFiles/QMessageBox.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QMessageBox.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QMessageBox.dir/clean

CMakeFiles/QMessageBox.dir/depend: QMessageBox_autogen/timestamp
	cd /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alien/Desktop/QtCreator/QMessageBox /home/alien/Desktop/QtCreator/QMessageBox /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug/CMakeFiles/QMessageBox.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/QMessageBox.dir/depend

