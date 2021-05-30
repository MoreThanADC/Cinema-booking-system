#include "seat.hpp"

    Seat::Seat() {
        name_ = "";
        surname_ = "";
        seatId_ = 0;
        isReserved_ = false;
    }
    
    Seat::Seat(std::string name, std::string surname, size_t seatId, bool isReserved) 
    : name_(name), surname_(surname), seatId_(seatId), isReserved_(isReserved)
    {}

    void reserve() {
        if (isReserved) {
            std::cout << "the place is already booked\n";
        } else {
            std::cout << "Name: ";
            std::getline(std::cin, name);
            std::cout << "Surname: ";
            std::getline(std::cin, surname);
            isReserved = true;
            std::cout << "seat number " << seatId << " has been reserved by " << name << " " << surname; 
        }
    }

