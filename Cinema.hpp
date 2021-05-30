#pragma once
#include <iostream>
#include <vector>
#include "Seat.hpp"
#include <numeric>

class Cinema {

public:
    Cinema();
    void displayAllPlaces();
private:
    const size_t numberOfSeats_ = 30;
    std::vector<Seat> places;
};