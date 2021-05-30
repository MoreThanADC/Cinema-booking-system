#pragma once
#include <iostream>
#include <string>

class Seat {
public: 
    // c-tors
    Seat();
    Seat(std::string, std::string, size_t, bool);

    // getters 
    std::string getName() const { return name_; };
    std::string getSurname() const { return surname_; };
    size_t getId() const { return seatId_; };
    bool isReserved() const { return isReserved_; };

    // member functions
    void reserve();
    void cancelReservation();

private:
    std::string name_;
    std::string surname_;
    size_t seatId_;
    bool isReserved_ = false;
};