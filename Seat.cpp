#include "Seat.hpp"

Seat::Seat() {
    name_ = "";
    surname_ = "";
    seatId_ = 0;
    isReserved_ = false;
}
    
Seat::Seat(const std::string& name, const std::string& surname, const size_t seatId, const bool isReserved) 
: name_(name), surname_(surname), seatId_(seatId), isReserved_(isReserved)
{}

void Seat::reserve() {
    if (Seat::isReserved()) {
        std::cout << "The place is already booked\n";
    } else {
        std::string temporaryString;

        std::cout << "Name: ";
        std::getline(std::cin, temporaryString);
        Seat::setName(temporaryString);

        std::cout << "Surname: ";
        std::getline(std::cin, temporaryString);
        Seat::setSurname(temporaryString);

        Seat::setReservedFlag(true);
        std::cout << "Seat number " << Seat::getId() << " has been reserved by " << Seat::getName() << " " << Seat::getSurname() << "\n"; 
    }
}

void Seat::cancelReservation() {
    if (!Seat::isReserved()) {
        std::cout << "This seat is free\n";
    } else {
        Seat::setName("");
        Seat::setSurname("");
        Seat::setReservedFlag(false);
        std::cout << "Seat number " << Seat::getId() << " has become vacant\n";
    }
}

void Seat::display() {
    if (Seat::isReserved()) {
        std::cout << "Seat number " << Seat::getId() << " is reserved by " << Seat::getName() << " " << Seat::getSurname() << "\n"; 
    } else {
        std::cout << "Seat number " << Seat::getId() << " is free\n";
    }
}

