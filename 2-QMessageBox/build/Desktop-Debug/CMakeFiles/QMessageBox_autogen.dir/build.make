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

# Utility rule file for QMessageBox_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/QMessageBox_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/QMessageBox_autogen.dir/progress.make

CMakeFiles/QMessageBox_autogen: QMessageBox_autogen/timestamp

QMessageBox_autogen/timestamp: /usr/bin/moc
QMessageBox_autogen/timestamp: /usr/bin/uic
QMessageBox_autogen/timestamp: CMakeFiles/QMessageBox_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target QMessageBox"
	/usr/bin/cmake -E cmake_autogen /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug/CMakeFiles/QMessageBox_autogen.dir/AutogenInfo.json Debug
	/usr/bin/cmake -E touch /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug/QMessageBox_autogen/timestamp

CMakeFiles/QMessageBox_autogen.dir/codegen:
.PHONY : CMakeFiles/QMessageBox_autogen.dir/codegen

QMessageBox_autogen: CMakeFiles/QMessageBox_autogen
QMessageBox_autogen: QMessageBox_autogen/timestamp
QMessageBox_autogen: CMakeFiles/QMessageBox_autogen.dir/build.make
.PHONY : QMessageBox_autogen

# Rule to build all files generated by this target.
CMakeFiles/QMessageBox_autogen.dir/build: QMessageBox_autogen
.PHONY : CMakeFiles/QMessageBox_autogen.dir/build

CMakeFiles/QMessageBox_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QMessageBox_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QMessageBox_autogen.dir/clean

CMakeFiles/QMessageBox_autogen.dir/depend:
	cd /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alien/Desktop/QtCreator/QMessageBox /home/alien/Desktop/QtCreator/QMessageBox /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug /home/alien/Desktop/QtCreator/QMessageBox/build/Desktop-Debug/CMakeFiles/QMessageBox_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/QMessageBox_autogen.dir/depend
