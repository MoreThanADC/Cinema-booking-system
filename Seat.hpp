#pragma once
#include <iostream>
#include <string>

class Seat {
public: 
    // c-tors
    Seat();
    Seat(const std::string&, const std::string&, const size_t, const bool);

    // getters 
    std::string getName() const { return name_; };
    std::string getSurname() const { return surname_; };
    size_t getId() const { return seatId_; };
    bool isReserved() const { return isReserved_; };

    // operators
   

    // member functions
    void reserve();
    void cancelReservation();
    void display();

private:
    std::string name_;
    std::string surname_;
    size_t seatId_;
    bool isReserved_ = false;
};