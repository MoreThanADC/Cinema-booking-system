#pragma once
#include <iostream>
#include <vector>
#include "Seat.hpp"
#include <numeric>

class Cinema {

public:
    Cinema();
private:
    const size_t numberOfSeats_ = 90;
    std::vector<Seat> places;
};