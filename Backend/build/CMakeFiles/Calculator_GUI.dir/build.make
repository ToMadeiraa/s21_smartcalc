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
CMAKE_SOURCE_DIR = /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/Backend/build

# Include any dependencies generated for this target.
include CMakeFiles/Calculator_GUI.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Calculator_GUI.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Calculator_GUI.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Calculator_GUI.dir/flags.make

CMakeFiles/Calculator_GUI.dir/Calculator_GUI_autogen/mocs_compilation.cpp.o: CMakeFiles/Calculator_GUI.dir/flags.make
CMakeFiles/Calculator_GUI.dir/Calculator_GUI_autogen/mocs_compilation.cpp.o: Calculator_GUI_autogen/mocs_compilation.cpp
CMakeFiles/Calculator_GUI.dir/Calculator_GUI_autogen/mocs_compilation.cpp.o: CMakeFiles/Calculator_GUI.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vyacheslave/Desktop/SmartCalculator_v1.0-main/Backend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Calculator_GUI.dir/Calculator_GUI_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calculator_GUI.dir/Calculator_GUI_autogen/mocs_compilation.cpp.o -MF CMakeFiles/Calculator_GUI.dir/Calculator_GUI_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/Calculator_GUI.dir/Calculator_GUI_autogen/mocs_compilation.cpp.o -c /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/Backend/build/Calculator_GUI_autogen/mocs_compilation.cpp

CMakeFiles/Calculator_GUI.dir/Calculator_GUI_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Calculator_GUI.dir/Calculator_GUI_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/Backend/build/Calculator_GUI_autogen/mocs_compilation.cpp > CMakeFiles/Calculator_GUI.dir/Calculator_GUI_autogen/mocs_compilation.cpp.i

CMakeFiles/Calculator_GUI.dir/Calculator_GUI_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Calculator_GUI.dir/Calculator_GUI_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/Backend/build/Calculator_GUI_autogen/mocs_compilation.cpp -o CMakeFiles/Calculator_GUI.dir/Calculator_GUI_autogen/mocs_compilation.cpp.s

CMakeFiles/Calculator_GUI.dir/main.cpp.o: CMakeFiles/Calculator_GUI.dir/flags.make
CMakeFiles/Calculator_GUI.dir/main.cpp.o: /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/main.cpp
CMakeFiles/Calculator_GUI.dir/main.cpp.o: CMakeFiles/Calculator_GUI.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vyacheslave/Desktop/SmartCalculator_v1.0-main/Backend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Calculator_GUI.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calculator_GUI.dir/main.cpp.o -MF CMakeFiles/Calculator_GUI.dir/main.cpp.o.d -o CMakeFiles/Calculator_GUI.dir/main.cpp.o -c /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/main.cpp

CMakeFiles/Calculator_GUI.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Calculator_GUI.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/main.cpp > CMakeFiles/Calculator_GUI.dir/main.cpp.i

CMakeFiles/Calculator_GUI.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Calculator_GUI.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/main.cpp -o CMakeFiles/Calculator_GUI.dir/main.cpp.s

CMakeFiles/Calculator_GUI.dir/calculator.cpp.o: CMakeFiles/Calculator_GUI.dir/flags.make
CMakeFiles/Calculator_GUI.dir/calculator.cpp.o: /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/calculator.cpp
CMakeFiles/Calculator_GUI.dir/calculator.cpp.o: CMakeFiles/Calculator_GUI.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vyacheslave/Desktop/SmartCalculator_v1.0-main/Backend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Calculator_GUI.dir/calculator.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calculator_GUI.dir/calculator.cpp.o -MF CMakeFiles/Calculator_GUI.dir/calculator.cpp.o.d -o CMakeFiles/Calculator_GUI.dir/calculator.cpp.o -c /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/calculator.cpp

CMakeFiles/Calculator_GUI.dir/calculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Calculator_GUI.dir/calculator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/calculator.cpp > CMakeFiles/Calculator_GUI.dir/calculator.cpp.i

CMakeFiles/Calculator_GUI.dir/calculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Calculator_GUI.dir/calculator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/calculator.cpp -o CMakeFiles/Calculator_GUI.dir/calculator.cpp.s

CMakeFiles/Calculator_GUI.dir/credit.cpp.o: CMakeFiles/Calculator_GUI.dir/flags.make
CMakeFiles/Calculator_GUI.dir/credit.cpp.o: /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/credit.cpp
CMakeFiles/Calculator_GUI.dir/credit.cpp.o: CMakeFiles/Calculator_GUI.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vyacheslave/Desktop/SmartCalculator_v1.0-main/Backend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Calculator_GUI.dir/credit.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calculator_GUI.dir/credit.cpp.o -MF CMakeFiles/Calculator_GUI.dir/credit.cpp.o.d -o CMakeFiles/Calculator_GUI.dir/credit.cpp.o -c /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/credit.cpp

CMakeFiles/Calculator_GUI.dir/credit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Calculator_GUI.dir/credit.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/credit.cpp > CMakeFiles/Calculator_GUI.dir/credit.cpp.i

CMakeFiles/Calculator_GUI.dir/credit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Calculator_GUI.dir/credit.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/credit.cpp -o CMakeFiles/Calculator_GUI.dir/credit.cpp.s

CMakeFiles/Calculator_GUI.dir/deposit.cpp.o: CMakeFiles/Calculator_GUI.dir/flags.make
CMakeFiles/Calculator_GUI.dir/deposit.cpp.o: /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/deposit.cpp
CMakeFiles/Calculator_GUI.dir/deposit.cpp.o: CMakeFiles/Calculator_GUI.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vyacheslave/Desktop/SmartCalculator_v1.0-main/Backend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Calculator_GUI.dir/deposit.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calculator_GUI.dir/deposit.cpp.o -MF CMakeFiles/Calculator_GUI.dir/deposit.cpp.o.d -o CMakeFiles/Calculator_GUI.dir/deposit.cpp.o -c /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/deposit.cpp

CMakeFiles/Calculator_GUI.dir/deposit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Calculator_GUI.dir/deposit.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/deposit.cpp > CMakeFiles/Calculator_GUI.dir/deposit.cpp.i

CMakeFiles/Calculator_GUI.dir/deposit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Calculator_GUI.dir/deposit.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/deposit.cpp -o CMakeFiles/Calculator_GUI.dir/deposit.cpp.s

# Object files for target Calculator_GUI
Calculator_GUI_OBJECTS = \
"CMakeFiles/Calculator_GUI.dir/Calculator_GUI_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Calculator_GUI.dir/main.cpp.o" \
"CMakeFiles/Calculator_GUI.dir/calculator.cpp.o" \
"CMakeFiles/Calculator_GUI.dir/credit.cpp.o" \
"CMakeFiles/Calculator_GUI.dir/deposit.cpp.o"

# External object files for target Calculator_GUI
Calculator_GUI_EXTERNAL_OBJECTS =

Calculator_GUI: CMakeFiles/Calculator_GUI.dir/Calculator_GUI_autogen/mocs_compilation.cpp.o
Calculator_GUI: CMakeFiles/Calculator_GUI.dir/main.cpp.o
Calculator_GUI: CMakeFiles/Calculator_GUI.dir/calculator.cpp.o
Calculator_GUI: CMakeFiles/Calculator_GUI.dir/credit.cpp.o
Calculator_GUI: CMakeFiles/Calculator_GUI.dir/deposit.cpp.o
Calculator_GUI: CMakeFiles/Calculator_GUI.dir/build.make
Calculator_GUI: /usr/lib/x86_64-linux-gnu/libQt5PrintSupport.so.5.15.3
Calculator_GUI: /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI/libcalculator.a
Calculator_GUI: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
Calculator_GUI: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
Calculator_GUI: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
Calculator_GUI: CMakeFiles/Calculator_GUI.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vyacheslave/Desktop/SmartCalculator_v1.0-main/Backend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Calculator_GUI"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Calculator_GUI.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Calculator_GUI.dir/build: Calculator_GUI
.PHONY : CMakeFiles/Calculator_GUI.dir/build

CMakeFiles/Calculator_GUI.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Calculator_GUI.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Calculator_GUI.dir/clean

CMakeFiles/Calculator_GUI.dir/depend:
	cd /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/Backend/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/GUI/Calculator_GUI /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/Backend/build /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/Backend/build /home/vyacheslave/Desktop/SmartCalculator_v1.0-main/Backend/build/CMakeFiles/Calculator_GUI.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Calculator_GUI.dir/depend

