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

