# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Baxi\Documents\C Proyects\Lab_1_C"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Baxi\Documents\C Proyects\Lab_1_C\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Lab_1_C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab_1_C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab_1_C.dir/flags.make

CMakeFiles/Lab_1_C.dir/main.c.obj: CMakeFiles/Lab_1_C.dir/flags.make
CMakeFiles/Lab_1_C.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Baxi\Documents\C Proyects\Lab_1_C\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Lab_1_C.dir/main.c.obj"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Lab_1_C.dir\main.c.obj   -c "C:\Users\Baxi\Documents\C Proyects\Lab_1_C\main.c"

CMakeFiles/Lab_1_C.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab_1_C.dir/main.c.i"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Baxi\Documents\C Proyects\Lab_1_C\main.c" > CMakeFiles\Lab_1_C.dir\main.c.i

CMakeFiles/Lab_1_C.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab_1_C.dir/main.c.s"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Baxi\Documents\C Proyects\Lab_1_C\main.c" -o CMakeFiles\Lab_1_C.dir\main.c.s

# Object files for target Lab_1_C
Lab_1_C_OBJECTS = \
"CMakeFiles/Lab_1_C.dir/main.c.obj"

# External object files for target Lab_1_C
Lab_1_C_EXTERNAL_OBJECTS =

Lab_1_C.exe: CMakeFiles/Lab_1_C.dir/main.c.obj
Lab_1_C.exe: CMakeFiles/Lab_1_C.dir/build.make
Lab_1_C.exe: C:/msys64/mingw64/lib/libsystre.dll.a
Lab_1_C.exe: CMakeFiles/Lab_1_C.dir/linklibs.rsp
Lab_1_C.exe: CMakeFiles/Lab_1_C.dir/objects1.rsp
Lab_1_C.exe: CMakeFiles/Lab_1_C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Baxi\Documents\C Proyects\Lab_1_C\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Lab_1_C.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Lab_1_C.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab_1_C.dir/build: Lab_1_C.exe

.PHONY : CMakeFiles/Lab_1_C.dir/build

CMakeFiles/Lab_1_C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lab_1_C.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Lab_1_C.dir/clean

CMakeFiles/Lab_1_C.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Baxi\Documents\C Proyects\Lab_1_C" "C:\Users\Baxi\Documents\C Proyects\Lab_1_C" "C:\Users\Baxi\Documents\C Proyects\Lab_1_C\cmake-build-debug" "C:\Users\Baxi\Documents\C Proyects\Lab_1_C\cmake-build-debug" "C:\Users\Baxi\Documents\C Proyects\Lab_1_C\cmake-build-debug\CMakeFiles\Lab_1_C.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Lab_1_C.dir/depend
