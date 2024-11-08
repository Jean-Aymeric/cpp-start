cmake_minimum_required(VERSION 3.29)
project(jad_s_show)

set(CMAKE_CXX_STANDARD 20)

add_executable(jad_s_show main.cpp
        show/Show.cpp
        show/Show.h
        customer/Spectator.cpp
        customer/Spectator.h
        show/ShowType.cpp
        show/ShowType.h
        show/IShow.h
        show/ConcertShow.cpp
        show/ConcertShow.h
        show/StreetShow.cpp
        show/StreetShow.h
        show/TheaterShow.cpp
        show/TheaterShow.h
        show/MovieShow.cpp
        show/MovieShow.h
        show/MovieType.cpp
        show/MovieType.h
        customer/ISpectator.h)
