#pragma once
#include <iostream>
#include <numeric>
#include <vector>
#include "Seat.hpp"

class Cinema {

public:
    Cinema();

    void addReservation();
    void deleteReservation();
    int selectSeat();
    void checkSeat();
    void displayAllSeats();
    void displayAvailableSeats();
    void displayReservedSeats();

private:
    const size_t numberOfSeats_ = 7;
    std::vector<Seat> places_;
    size_t numberOfReservedSeats_ = 0;
};