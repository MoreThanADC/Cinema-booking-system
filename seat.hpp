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

private:
    const std::string name_;
    const std::string surname_;
    const size_t seatId_;
    bool isReserved_;
};