# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /opt/clion/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/priver/Studies/Rule based Chatbot in Cpp"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/priver/Studies/Rule based Chatbot in Cpp/build"

# Include any dependencies generated for this target.
include CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/flags.make

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/main.cpp.o: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/flags.make
CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/main.cpp.o: /home/priver/Studies/Rule\ based\ Chatbot\ in\ Cpp/src/main.cpp
CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/main.cpp.o: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/priver/Studies/Rule based Chatbot in Cpp/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/main.cpp.o -MF CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/main.cpp.o.d -o CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/main.cpp.o -c "/home/priver/Studies/Rule based Chatbot in Cpp/src/main.cpp"

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/priver/Studies/Rule based Chatbot in Cpp/src/main.cpp" > CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/main.cpp.i

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/priver/Studies/Rule based Chatbot in Cpp/src/main.cpp" -o CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/main.cpp.s

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/chatbot.cpp.o: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/flags.make
CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/chatbot.cpp.o: /home/priver/Studies/Rule\ based\ Chatbot\ in\ Cpp/src/chatbot.cpp
CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/chatbot.cpp.o: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/priver/Studies/Rule based Chatbot in Cpp/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/chatbot.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/chatbot.cpp.o -MF CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/chatbot.cpp.o.d -o CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/chatbot.cpp.o -c "/home/priver/Studies/Rule based Chatbot in Cpp/src/chatbot.cpp"

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/chatbot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/chatbot.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/priver/Studies/Rule based Chatbot in Cpp/src/chatbot.cpp" > CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/chatbot.cpp.i

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/chatbot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/chatbot.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/priver/Studies/Rule based Chatbot in Cpp/src/chatbot.cpp" -o CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/chatbot.cpp.s

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/utilities.cpp.o: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/flags.make
CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/utilities.cpp.o: /home/priver/Studies/Rule\ based\ Chatbot\ in\ Cpp/src/utilities.cpp
CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/utilities.cpp.o: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/priver/Studies/Rule based Chatbot in Cpp/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/utilities.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/utilities.cpp.o -MF CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/utilities.cpp.o.d -o CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/utilities.cpp.o -c "/home/priver/Studies/Rule based Chatbot in Cpp/src/utilities.cpp"

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/utilities.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/utilities.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/priver/Studies/Rule based Chatbot in Cpp/src/utilities.cpp" > CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/utilities.cpp.i

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/utilities.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/utilities.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/priver/Studies/Rule based Chatbot in Cpp/src/utilities.cpp" -o CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/utilities.cpp.s

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/system_controls.cpp.o: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/flags.make
CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/system_controls.cpp.o: /home/priver/Studies/Rule\ based\ Chatbot\ in\ Cpp/src/system_controls.cpp
CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/system_controls.cpp.o: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/priver/Studies/Rule based Chatbot in Cpp/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/system_controls.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/system_controls.cpp.o -MF CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/system_controls.cpp.o.d -o CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/system_controls.cpp.o -c "/home/priver/Studies/Rule based Chatbot in Cpp/src/system_controls.cpp"

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/system_controls.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/system_controls.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/priver/Studies/Rule based Chatbot in Cpp/src/system_controls.cpp" > CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/system_controls.cpp.i

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/system_controls.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/system_controls.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/priver/Studies/Rule based Chatbot in Cpp/src/system_controls.cpp" -o CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/system_controls.cpp.s

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/advanced_math.cpp.o: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/flags.make
CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/advanced_math.cpp.o: /home/priver/Studies/Rule\ based\ Chatbot\ in\ Cpp/src/advanced_math.cpp
CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/advanced_math.cpp.o: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/priver/Studies/Rule based Chatbot in Cpp/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/advanced_math.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/advanced_math.cpp.o -MF CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/advanced_math.cpp.o.d -o CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/advanced_math.cpp.o -c "/home/priver/Studies/Rule based Chatbot in Cpp/src/advanced_math.cpp"

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/advanced_math.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/advanced_math.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/priver/Studies/Rule based Chatbot in Cpp/src/advanced_math.cpp" > CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/advanced_math.cpp.i

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/advanced_math.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/advanced_math.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/priver/Studies/Rule based Chatbot in Cpp/src/advanced_math.cpp" -o CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/advanced_math.cpp.s

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/speech_recognition.cpp.o: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/flags.make
CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/speech_recognition.cpp.o: /home/priver/Studies/Rule\ based\ Chatbot\ in\ Cpp/src/speech_recognition.cpp
CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/speech_recognition.cpp.o: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/priver/Studies/Rule based Chatbot in Cpp/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/speech_recognition.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/speech_recognition.cpp.o -MF CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/speech_recognition.cpp.o.d -o CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/speech_recognition.cpp.o -c "/home/priver/Studies/Rule based Chatbot in Cpp/src/speech_recognition.cpp"

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/speech_recognition.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/speech_recognition.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/priver/Studies/Rule based Chatbot in Cpp/src/speech_recognition.cpp" > CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/speech_recognition.cpp.i

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/speech_recognition.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/speech_recognition.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/priver/Studies/Rule based Chatbot in Cpp/src/speech_recognition.cpp" -o CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/speech_recognition.cpp.s

# Object files for target Rule_based_Chatbot_in_Cpp
Rule_based_Chatbot_in_Cpp_OBJECTS = \
"CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/main.cpp.o" \
"CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/chatbot.cpp.o" \
"CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/utilities.cpp.o" \
"CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/system_controls.cpp.o" \
"CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/advanced_math.cpp.o" \
"CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/speech_recognition.cpp.o"

# External object files for target Rule_based_Chatbot_in_Cpp
Rule_based_Chatbot_in_Cpp_EXTERNAL_OBJECTS =

Rule_based_Chatbot_in_Cpp: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/main.cpp.o
Rule_based_Chatbot_in_Cpp: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/chatbot.cpp.o
Rule_based_Chatbot_in_Cpp: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/utilities.cpp.o
Rule_based_Chatbot_in_Cpp: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/system_controls.cpp.o
Rule_based_Chatbot_in_Cpp: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/advanced_math.cpp.o
Rule_based_Chatbot_in_Cpp: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/src/speech_recognition.cpp.o
Rule_based_Chatbot_in_Cpp: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/build.make
Rule_based_Chatbot_in_Cpp: /usr/lib/x86_64-linux-gnu/libportaudio.so
Rule_based_Chatbot_in_Cpp: CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/home/priver/Studies/Rule based Chatbot in Cpp/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable Rule_based_Chatbot_in_Cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/build: Rule_based_Chatbot_in_Cpp
.PHONY : CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/build

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/clean

CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/depend:
	cd "/home/priver/Studies/Rule based Chatbot in Cpp/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/priver/Studies/Rule based Chatbot in Cpp" "/home/priver/Studies/Rule based Chatbot in Cpp" "/home/priver/Studies/Rule based Chatbot in Cpp/build" "/home/priver/Studies/Rule based Chatbot in Cpp/build" "/home/priver/Studies/Rule based Chatbot in Cpp/build/CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Rule_based_Chatbot_in_Cpp.dir/depend

