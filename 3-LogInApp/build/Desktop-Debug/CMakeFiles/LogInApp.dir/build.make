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
CMAKE_SOURCE_DIR = /home/alien/Desktop/QtCreator/LogInApp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/LogInApp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LogInApp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LogInApp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LogInApp.dir/flags.make

LogInApp_autogen/timestamp: /usr/bin/moc
LogInApp_autogen/timestamp: /usr/bin/uic
LogInApp_autogen/timestamp: CMakeFiles/LogInApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target LogInApp"
	/usr/bin/cmake -E cmake_autogen /home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/CMakeFiles/LogInApp_autogen.dir/AutogenInfo.json Debug
	/usr/bin/cmake -E touch /home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/LogInApp_autogen/timestamp

LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp: /home/alien/Desktop/QtCreator/LogInApp/resource.qrc
LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp: CMakeFiles/LogInApp_autogen.dir/AutoRcc_resource_EWIEGA46WW_Info.json
LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp: /home/alien/Desktop/QtCreator/LogInApp/img/Background_Natural\ background.jpeg
LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp: /home/alien/Desktop/QtCreator/LogInApp/img/download.jpeg
LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp: /home/alien/Desktop/QtCreator/LogInApp/img/background.webp
LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp: /usr/bin/rcc
LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp: /usr/bin/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Automatic RCC for resource.qrc"
	/usr/bin/cmake -E cmake_autorcc /home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/CMakeFiles/LogInApp_autogen.dir/AutoRcc_resource_EWIEGA46WW_Info.json Debug

CMakeFiles/LogInApp.dir/codegen:
.PHONY : CMakeFiles/LogInApp.dir/codegen

CMakeFiles/LogInApp.dir/LogInApp_autogen/mocs_compilation.cpp.o: CMakeFiles/LogInApp.dir/flags.make
CMakeFiles/LogInApp.dir/LogInApp_autogen/mocs_compilation.cpp.o: LogInApp_autogen/mocs_compilation.cpp
CMakeFiles/LogInApp.dir/LogInApp_autogen/mocs_compilation.cpp.o: CMakeFiles/LogInApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/LogInApp.dir/LogInApp_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LogInApp.dir/LogInApp_autogen/mocs_compilation.cpp.o -MF CMakeFiles/LogInApp.dir/LogInApp_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/LogInApp.dir/LogInApp_autogen/mocs_compilation.cpp.o -c /home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/LogInApp_autogen/mocs_compilation.cpp

CMakeFiles/LogInApp.dir/LogInApp_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LogInApp.dir/LogInApp_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/LogInApp_autogen/mocs_compilation.cpp > CMakeFiles/LogInApp.dir/LogInApp_autogen/mocs_compilation.cpp.i

CMakeFiles/LogInApp.dir/LogInApp_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LogInApp.dir/LogInApp_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/LogInApp_autogen/mocs_compilation.cpp -o CMakeFiles/LogInApp.dir/LogInApp_autogen/mocs_compilation.cpp.s

CMakeFiles/LogInApp.dir/main.cpp.o: CMakeFiles/LogInApp.dir/flags.make
CMakeFiles/LogInApp.dir/main.cpp.o: /home/alien/Desktop/QtCreator/LogInApp/main.cpp
CMakeFiles/LogInApp.dir/main.cpp.o: CMakeFiles/LogInApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/LogInApp.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LogInApp.dir/main.cpp.o -MF CMakeFiles/LogInApp.dir/main.cpp.o.d -o CMakeFiles/LogInApp.dir/main.cpp.o -c /home/alien/Desktop/QtCreator/LogInApp/main.cpp

CMakeFiles/LogInApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LogInApp.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alien/Desktop/QtCreator/LogInApp/main.cpp > CMakeFiles/LogInApp.dir/main.cpp.i

CMakeFiles/LogInApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LogInApp.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alien/Desktop/QtCreator/LogInApp/main.cpp -o CMakeFiles/LogInApp.dir/main.cpp.s

CMakeFiles/LogInApp.dir/loginpage.cpp.o: CMakeFiles/LogInApp.dir/flags.make
CMakeFiles/LogInApp.dir/loginpage.cpp.o: /home/alien/Desktop/QtCreator/LogInApp/loginpage.cpp
CMakeFiles/LogInApp.dir/loginpage.cpp.o: CMakeFiles/LogInApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/LogInApp.dir/loginpage.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LogInApp.dir/loginpage.cpp.o -MF CMakeFiles/LogInApp.dir/loginpage.cpp.o.d -o CMakeFiles/LogInApp.dir/loginpage.cpp.o -c /home/alien/Desktop/QtCreator/LogInApp/loginpage.cpp

CMakeFiles/LogInApp.dir/loginpage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LogInApp.dir/loginpage.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alien/Desktop/QtCreator/LogInApp/loginpage.cpp > CMakeFiles/LogInApp.dir/loginpage.cpp.i

CMakeFiles/LogInApp.dir/loginpage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LogInApp.dir/loginpage.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alien/Desktop/QtCreator/LogInApp/loginpage.cpp -o CMakeFiles/LogInApp.dir/loginpage.cpp.s

CMakeFiles/LogInApp.dir/application.cpp.o: CMakeFiles/LogInApp.dir/flags.make
CMakeFiles/LogInApp.dir/application.cpp.o: /home/alien/Desktop/QtCreator/LogInApp/application.cpp
CMakeFiles/LogInApp.dir/application.cpp.o: CMakeFiles/LogInApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/LogInApp.dir/application.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LogInApp.dir/application.cpp.o -MF CMakeFiles/LogInApp.dir/application.cpp.o.d -o CMakeFiles/LogInApp.dir/application.cpp.o -c /home/alien/Desktop/QtCreator/LogInApp/application.cpp

CMakeFiles/LogInApp.dir/application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LogInApp.dir/application.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alien/Desktop/QtCreator/LogInApp/application.cpp > CMakeFiles/LogInApp.dir/application.cpp.i

CMakeFiles/LogInApp.dir/application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LogInApp.dir/application.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alien/Desktop/QtCreator/LogInApp/application.cpp -o CMakeFiles/LogInApp.dir/application.cpp.s

CMakeFiles/LogInApp.dir/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp.o: CMakeFiles/LogInApp.dir/flags.make
CMakeFiles/LogInApp.dir/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp.o: LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp
CMakeFiles/LogInApp.dir/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp.o: CMakeFiles/LogInApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/LogInApp.dir/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LogInApp.dir/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp.o -MF CMakeFiles/LogInApp.dir/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp.o.d -o CMakeFiles/LogInApp.dir/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp.o -c /home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp

CMakeFiles/LogInApp.dir/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LogInApp.dir/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp > CMakeFiles/LogInApp.dir/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp.i

CMakeFiles/LogInApp.dir/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LogInApp.dir/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp -o CMakeFiles/LogInApp.dir/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp.s

# Object files for target LogInApp
LogInApp_OBJECTS = \
"CMakeFiles/LogInApp.dir/LogInApp_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/LogInApp.dir/main.cpp.o" \
"CMakeFiles/LogInApp.dir/loginpage.cpp.o" \
"CMakeFiles/LogInApp.dir/application.cpp.o" \
"CMakeFiles/LogInApp.dir/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp.o"

# External object files for target LogInApp
LogInApp_EXTERNAL_OBJECTS =

LogInApp: CMakeFiles/LogInApp.dir/LogInApp_autogen/mocs_compilation.cpp.o
LogInApp: CMakeFiles/LogInApp.dir/main.cpp.o
LogInApp: CMakeFiles/LogInApp.dir/loginpage.cpp.o
LogInApp: CMakeFiles/LogInApp.dir/application.cpp.o
LogInApp: CMakeFiles/LogInApp.dir/LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp.o
LogInApp: CMakeFiles/LogInApp.dir/build.make
LogInApp: CMakeFiles/LogInApp.dir/compiler_depend.ts
LogInApp: /usr/lib/libQt5Widgets.so.5.15.16
LogInApp: /usr/lib/libQt5Gui.so.5.15.16
LogInApp: /usr/lib/libQt5Core.so.5.15.16
LogInApp: CMakeFiles/LogInApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable LogInApp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LogInApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LogInApp.dir/build: LogInApp
.PHONY : CMakeFiles/LogInApp.dir/build

CMakeFiles/LogInApp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LogInApp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LogInApp.dir/clean

CMakeFiles/LogInApp.dir/depend: LogInApp_autogen/EWIEGA46WW/qrc_resource.cpp
CMakeFiles/LogInApp.dir/depend: LogInApp_autogen/timestamp
	cd /home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alien/Desktop/QtCreator/LogInApp /home/alien/Desktop/QtCreator/LogInApp /home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug /home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug /home/alien/Desktop/QtCreator/LogInApp/build/Desktop-Debug/CMakeFiles/LogInApp.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/LogInApp.dir/depend

