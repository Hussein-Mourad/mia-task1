# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/hussein/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5080.54/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/hussein/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5080.54/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HusseinMourad_HotelReservationSystem.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/HusseinMourad_HotelReservationSystem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HusseinMourad_HotelReservationSystem.dir/flags.make

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomService.cpp.o: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/flags.make
CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomService.cpp.o: ../sources/RoomService.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomService.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomService.cpp.o -c /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/RoomService.cpp

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomService.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/RoomService.cpp > CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomService.cpp.i

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomService.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/RoomService.cpp -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomService.cpp.s

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Guest.cpp.o: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/flags.make
CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Guest.cpp.o: ../sources/Guest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Guest.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Guest.cpp.o -c /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/Guest.cpp

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Guest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Guest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/Guest.cpp > CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Guest.cpp.i

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Guest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Guest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/Guest.cpp -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Guest.cpp.s

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Monster.cpp.o: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/flags.make
CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Monster.cpp.o: ../sources/Monster.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Monster.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Monster.cpp.o -c /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/Monster.cpp

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Monster.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Monster.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/Monster.cpp > CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Monster.cpp.i

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Monster.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Monster.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/Monster.cpp -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Monster.cpp.s

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Room.cpp.o: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/flags.make
CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Room.cpp.o: ../sources/Room.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Room.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Room.cpp.o -c /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/Room.cpp

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Room.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Room.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/Room.cpp > CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Room.cpp.i

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Room.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Room.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/Room.cpp -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Room.cpp.s

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Human.cpp.o: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/flags.make
CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Human.cpp.o: ../sources/Human.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Human.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Human.cpp.o -c /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/Human.cpp

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Human.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Human.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/Human.cpp > CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Human.cpp.i

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Human.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Human.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/Human.cpp -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Human.cpp.s

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/main.cpp.o: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/flags.make
CMakeFiles/HusseinMourad_HotelReservationSystem.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/HusseinMourad_HotelReservationSystem.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/main.cpp.o -c /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/main.cpp

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HusseinMourad_HotelReservationSystem.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/main.cpp > CMakeFiles/HusseinMourad_HotelReservationSystem.dir/main.cpp.i

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HusseinMourad_HotelReservationSystem.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/main.cpp -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/main.cpp.s

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/MonsterRoom.cpp.o: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/flags.make
CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/MonsterRoom.cpp.o: ../sources/MonsterRoom.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/MonsterRoom.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/MonsterRoom.cpp.o -c /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/MonsterRoom.cpp

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/MonsterRoom.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/MonsterRoom.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/MonsterRoom.cpp > CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/MonsterRoom.cpp.i

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/MonsterRoom.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/MonsterRoom.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/MonsterRoom.cpp -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/MonsterRoom.cpp.s

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/HumanRoom.cpp.o: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/flags.make
CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/HumanRoom.cpp.o: ../sources/HumanRoom.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/HumanRoom.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/HumanRoom.cpp.o -c /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/HumanRoom.cpp

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/HumanRoom.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/HumanRoom.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/HumanRoom.cpp > CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/HumanRoom.cpp.i

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/HumanRoom.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/HumanRoom.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/HumanRoom.cpp -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/HumanRoom.cpp.s

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomsManager.cpp.o: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/flags.make
CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomsManager.cpp.o: ../sources/RoomsManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomsManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomsManager.cpp.o -c /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/RoomsManager.cpp

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomsManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomsManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/RoomsManager.cpp > CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomsManager.cpp.i

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomsManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomsManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/RoomsManager.cpp -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomsManager.cpp.s

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Receptionist.cpp.o: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/flags.make
CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Receptionist.cpp.o: ../sources/Receptionist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Receptionist.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Receptionist.cpp.o -c /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/Receptionist.cpp

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Receptionist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Receptionist.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/Receptionist.cpp > CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Receptionist.cpp.i

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Receptionist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Receptionist.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/Receptionist.cpp -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Receptionist.cpp.s

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/GuestMenu.cpp.o: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/flags.make
CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/GuestMenu.cpp.o: ../sources/GuestMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/GuestMenu.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/GuestMenu.cpp.o -c /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/GuestMenu.cpp

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/GuestMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/GuestMenu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/GuestMenu.cpp > CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/GuestMenu.cpp.i

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/GuestMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/GuestMenu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/sources/GuestMenu.cpp -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/GuestMenu.cpp.s

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/headers/ReceptionistMenu.cpp.o: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/flags.make
CMakeFiles/HusseinMourad_HotelReservationSystem.dir/headers/ReceptionistMenu.cpp.o: ../headers/ReceptionistMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/HusseinMourad_HotelReservationSystem.dir/headers/ReceptionistMenu.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/headers/ReceptionistMenu.cpp.o -c /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/headers/ReceptionistMenu.cpp

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/headers/ReceptionistMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HusseinMourad_HotelReservationSystem.dir/headers/ReceptionistMenu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/headers/ReceptionistMenu.cpp > CMakeFiles/HusseinMourad_HotelReservationSystem.dir/headers/ReceptionistMenu.cpp.i

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/headers/ReceptionistMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HusseinMourad_HotelReservationSystem.dir/headers/ReceptionistMenu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/headers/ReceptionistMenu.cpp -o CMakeFiles/HusseinMourad_HotelReservationSystem.dir/headers/ReceptionistMenu.cpp.s

# Object files for target HusseinMourad_HotelReservationSystem
HusseinMourad_HotelReservationSystem_OBJECTS = \
"CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomService.cpp.o" \
"CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Guest.cpp.o" \
"CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Monster.cpp.o" \
"CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Room.cpp.o" \
"CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Human.cpp.o" \
"CMakeFiles/HusseinMourad_HotelReservationSystem.dir/main.cpp.o" \
"CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/MonsterRoom.cpp.o" \
"CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/HumanRoom.cpp.o" \
"CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomsManager.cpp.o" \
"CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Receptionist.cpp.o" \
"CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/GuestMenu.cpp.o" \
"CMakeFiles/HusseinMourad_HotelReservationSystem.dir/headers/ReceptionistMenu.cpp.o"

# External object files for target HusseinMourad_HotelReservationSystem
HusseinMourad_HotelReservationSystem_EXTERNAL_OBJECTS =

HusseinMourad_HotelReservationSystem: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomService.cpp.o
HusseinMourad_HotelReservationSystem: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Guest.cpp.o
HusseinMourad_HotelReservationSystem: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Monster.cpp.o
HusseinMourad_HotelReservationSystem: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Room.cpp.o
HusseinMourad_HotelReservationSystem: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Human.cpp.o
HusseinMourad_HotelReservationSystem: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/main.cpp.o
HusseinMourad_HotelReservationSystem: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/MonsterRoom.cpp.o
HusseinMourad_HotelReservationSystem: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/HumanRoom.cpp.o
HusseinMourad_HotelReservationSystem: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/RoomsManager.cpp.o
HusseinMourad_HotelReservationSystem: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/Receptionist.cpp.o
HusseinMourad_HotelReservationSystem: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/sources/GuestMenu.cpp.o
HusseinMourad_HotelReservationSystem: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/headers/ReceptionistMenu.cpp.o
HusseinMourad_HotelReservationSystem: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/build.make
HusseinMourad_HotelReservationSystem: CMakeFiles/HusseinMourad_HotelReservationSystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable HusseinMourad_HotelReservationSystem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HusseinMourad_HotelReservationSystem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HusseinMourad_HotelReservationSystem.dir/build: HusseinMourad_HotelReservationSystem
.PHONY : CMakeFiles/HusseinMourad_HotelReservationSystem.dir/build

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HusseinMourad_HotelReservationSystem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HusseinMourad_HotelReservationSystem.dir/clean

CMakeFiles/HusseinMourad_HotelReservationSystem.dir/depend:
	cd /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug /mnt/d/CLionProjects/mia-task1/HusseinMourad_HotelReservationSystem/cmake-build-debug/CMakeFiles/HusseinMourad_HotelReservationSystem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HusseinMourad_HotelReservationSystem.dir/depend

