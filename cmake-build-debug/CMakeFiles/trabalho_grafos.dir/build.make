# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\MAXWELL\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.4445.84\bin\cmake\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\MAXWELL\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.4445.84\bin\cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\MAXWELL\Documents\PROJETOS\C-C++\trabalho-grafos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\MAXWELL\Documents\PROJETOS\C-C++\trabalho-grafos\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/trabalho_grafos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/trabalho_grafos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/trabalho_grafos.dir/flags.make

CMakeFiles/trabalho_grafos.dir/main.cpp.obj: CMakeFiles/trabalho_grafos.dir/flags.make
CMakeFiles/trabalho_grafos.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\MAXWELL\Documents\PROJETOS\C-C++\trabalho-grafos\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/trabalho_grafos.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\trabalho_grafos.dir\main.cpp.obj -c C:\Users\MAXWELL\Documents\PROJETOS\C-C++\trabalho-grafos\main.cpp

CMakeFiles/trabalho_grafos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trabalho_grafos.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\MAXWELL\Documents\PROJETOS\C-C++\trabalho-grafos\main.cpp > CMakeFiles\trabalho_grafos.dir\main.cpp.i

CMakeFiles/trabalho_grafos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trabalho_grafos.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\MAXWELL\Documents\PROJETOS\C-C++\trabalho-grafos\main.cpp -o CMakeFiles\trabalho_grafos.dir\main.cpp.s

CMakeFiles/trabalho_grafos.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/trabalho_grafos.dir/main.cpp.obj.requires

CMakeFiles/trabalho_grafos.dir/main.cpp.obj.provides: CMakeFiles/trabalho_grafos.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\trabalho_grafos.dir\build.make CMakeFiles/trabalho_grafos.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/trabalho_grafos.dir/main.cpp.obj.provides

CMakeFiles/trabalho_grafos.dir/main.cpp.obj.provides.build: CMakeFiles/trabalho_grafos.dir/main.cpp.obj


# Object files for target trabalho_grafos
trabalho_grafos_OBJECTS = \
"CMakeFiles/trabalho_grafos.dir/main.cpp.obj"

# External object files for target trabalho_grafos
trabalho_grafos_EXTERNAL_OBJECTS =

trabalho_grafos.exe: CMakeFiles/trabalho_grafos.dir/main.cpp.obj
trabalho_grafos.exe: CMakeFiles/trabalho_grafos.dir/build.make
trabalho_grafos.exe: CMakeFiles/trabalho_grafos.dir/linklibs.rsp
trabalho_grafos.exe: CMakeFiles/trabalho_grafos.dir/objects1.rsp
trabalho_grafos.exe: CMakeFiles/trabalho_grafos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\MAXWELL\Documents\PROJETOS\C-C++\trabalho-grafos\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable trabalho_grafos.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\trabalho_grafos.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/trabalho_grafos.dir/build: trabalho_grafos.exe

.PHONY : CMakeFiles/trabalho_grafos.dir/build

CMakeFiles/trabalho_grafos.dir/requires: CMakeFiles/trabalho_grafos.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/trabalho_grafos.dir/requires

CMakeFiles/trabalho_grafos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\trabalho_grafos.dir\cmake_clean.cmake
.PHONY : CMakeFiles/trabalho_grafos.dir/clean

CMakeFiles/trabalho_grafos.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\MAXWELL\Documents\PROJETOS\C-C++\trabalho-grafos C:\Users\MAXWELL\Documents\PROJETOS\C-C++\trabalho-grafos C:\Users\MAXWELL\Documents\PROJETOS\C-C++\trabalho-grafos\cmake-build-debug C:\Users\MAXWELL\Documents\PROJETOS\C-C++\trabalho-grafos\cmake-build-debug C:\Users\MAXWELL\Documents\PROJETOS\C-C++\trabalho-grafos\cmake-build-debug\CMakeFiles\trabalho_grafos.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/trabalho_grafos.dir/depend
