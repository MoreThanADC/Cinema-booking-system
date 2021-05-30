#include "Seat.hpp"

Seat::Seat() {
    name_ = "";
    surname_ = "";
    seatId_ = 0;
    isReserved_ = false;
}
    
Seat::Seat(std::string name, std::string surname, size_t seatId, bool isReserved) 
: name_(name), surname_(surname), seatId_(seatId), isReserved_(isReserved)
{}

void Seat::reserve() {
    if (isReserved_) {
        std::cout << "The place is already booked\n";
    } else {
        std::cout << "Name: ";
        std::getline(std::cin, name_);
        std::cout << "Surname: ";
        std::getline(std::cin, surname_);
        isReserved_ = true;
        std::cout << "Seat number " << seatId_ << " has been reserved by " << name_ << " " << surname_ << "\n"; 
    }
}

void Seat::cancelReservation() {
    if (isReserved_) {
        std::cout << "This seat is free\n";
    } else {
        name_ = "";
        surname_ = "";
        isReserved_ = false;
        std::cout << "Seat number " << seatId_ << " is free\n";
    }
}

