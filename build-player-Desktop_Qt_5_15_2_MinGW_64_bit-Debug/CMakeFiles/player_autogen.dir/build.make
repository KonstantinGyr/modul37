# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Kot\CLionProjects\hw37\player

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Kot\CLionProjects\hw37\build-player-Desktop_Qt_5_15_2_MinGW_64_bit-Debug

# Utility rule file for player_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/player_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/player_autogen.dir/progress.make

CMakeFiles/player_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\Kot\CLionProjects\hw37\build-player-Desktop_Qt_5_15_2_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target player"
	"C:\Program Files (x86)\CMake\bin\cmake.exe" -E cmake_autogen C:/Users/Kot/CLionProjects/hw37/build-player-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/CMakeFiles/player_autogen.dir/AutogenInfo.json Debug

player_autogen: CMakeFiles/player_autogen
player_autogen: CMakeFiles/player_autogen.dir/build.make
.PHONY : player_autogen

# Rule to build all files generated by this target.
CMakeFiles/player_autogen.dir/build: player_autogen
.PHONY : CMakeFiles/player_autogen.dir/build

CMakeFiles/player_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\player_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/player_autogen.dir/clean

CMakeFiles/player_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Kot\CLionProjects\hw37\player C:\Users\Kot\CLionProjects\hw37\player C:\Users\Kot\CLionProjects\hw37\build-player-Desktop_Qt_5_15_2_MinGW_64_bit-Debug C:\Users\Kot\CLionProjects\hw37\build-player-Desktop_Qt_5_15_2_MinGW_64_bit-Debug C:\Users\Kot\CLionProjects\hw37\build-player-Desktop_Qt_5_15_2_MinGW_64_bit-Debug\CMakeFiles\player_autogen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/player_autogen.dir/depend

