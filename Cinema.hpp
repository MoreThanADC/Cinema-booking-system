#pragma once
#include <string>
#include <vector>
#include "CinemaHall.hpp"

class Cinema {
public:
    Cinema();
private:
    std::vector<CinemaHall> halls_;
    size_t amountOfHalls_ = 5;
};