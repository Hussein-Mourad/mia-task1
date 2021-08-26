cmake_minimum_required(VERSION 3.0)
project(HusseinMourad_HotelReservationSystem)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HusseinMourad_HotelReservationSystem
        headers/stdafx.h
        sources/RoomService.cpp headers/RoomService.h
        sources/Guest.cpp headers/Guest.h
        sources/Monster.cpp headers/Monster.h
        headers/Room.h sources/Room.cpp
        sources/Human.cpp headers/Human.h
        main.cpp sources/MonsterRoom.cpp headers/MonsterRoom.h headers/HumanRoom.cpp headers/HumanRoom.h)

