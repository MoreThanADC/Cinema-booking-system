#pragma once
#include <iostream>
#include <vector>
#include "Seat.hpp"
#include <numeric>

class Cinema {

public:
    Cinema();
    void addReservation();
    void selectSeat();
    void displayAllSeats();
    void displayAvailableSeats();
    void displayReservedSeats();

private:
    const size_t numberOfSeats_ = 7;
    std::vector<Seat> places;
};