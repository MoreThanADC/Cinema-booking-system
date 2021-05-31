#pragma once
#include <iostream>
#include <string>

class Seat {
public: 
    Seat();
    Seat(const std::string&, const std::string&, const size_t, const bool);

    bool isReserved() const { return isReserved_; };
    void reserve();
    void cancelReservation();
    void display();

private:
    std::string name_;
    std::string surname_;
    size_t seatId_;
    bool isReserved_ = false;
};