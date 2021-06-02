#pragma once
#include <iostream>
#include <numeric>
#include <vector>
#include "Seat.hpp"

class CinemaHall {

public:
    CinemaHall();

    void addReservation();
    void deleteReservation();
    int selectSeat();
    void checkSeat();
    void displayAllSeats();
    void displayAvailableSeats();
    void displayReservedSeats();
    void displayAmountOfFreeAndReservedSeats();

private:
    const size_t numberOfSeats_ = 10;
    std::vector<Seat> places_;
    size_t numberOfReservedSeats_ = 0;
};