#pragma once
#include <iostream>
#include <vector>
#include "Seat.hpp"
#include <numeric>

class Cinema {

public:
    // c-tor
    Cinema();

    // getter
    const size_t getNumberOfSeats() const { return numberOfSeats_; };

    // member functions
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
};