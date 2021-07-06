cmake_minimum_required (VERSION 3.10)
project(Reservation)

set(CMAKE_CXX_COMPILER g++)
set(SOURCES Menu.cpp Seat.cpp Cinema.cpp CinemaHall.cpp)
set(FLAGS -Wall -Wextra -Wconversion -pedantic)

add_library(${PROJECT_NAME}-lib STATIC ${SOURCES})
target_compile_options(${PROJECT_NAME}-lib PRIVATE ${FLAGS})
target_compile_features(${PROJECT_NAME}-lib PRIVATE cxx_std_20)

add_executable(${PROJECT_NAME} main.cpp)
target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)

#add_executable(${PROJECT_NAME}-ut tests/Reservation.ut.cpp)
#target_compile_options(${PROJECT_NAME}-ut PRIVATE ${FLAGS})
#target_compile_features(${PROJECT_NAME}-ut PRIVATE cxx_std_20)
#target_link_libraries(${PROJECT_NAME}-ut ${PROJECT_NAME}-lib)

enable_testing()
add_test(NAME ReservationTests COMMAND ${PROJECT_NAME}-ut)


