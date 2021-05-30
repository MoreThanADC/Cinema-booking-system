#pragma once
#include <iostream>
#include <string>

class Seat {
public: 
    Seat();
    Seat(std::string, std::string, size_t, bool);

    void reserve();

public:
    std::string name_;
    std::string surname_;
    size_t seatId_;
    bool isReserved_;
};