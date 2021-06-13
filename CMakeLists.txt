cmake_minimum_required(VERSION 3.10)
project(reservation)
set (SRC
    main.cpp
    Menu.cpp
    Seat.cpp
    CinemaHall.cpp
    Cinema.cpp
)
set (CMAKE_CXX_STANDARD 20)
add_executable(${PROJECT_NAME} ${SRC})
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Werror -pedantic -Wconversion)