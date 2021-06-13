#pragma once
#include <iostream>
#include <numeric>
#include <vector>
#include "Seat.hpp"

class CinemaHall {

public:
    CinemaHall();

    void setHallNumber(size_t number) { hallNumber_ = number; };
    void setFilmName(std::string movie) { filmName_ = movie; };
    std::string getFilmName() const { return filmName_; };
    size_t getNumberOfReservedSeats() const { return numberOfReservedSeats_; };

    void addReservation();
    void deleteReservation();
    size_t selectSeat();
    void checkSeat();
    void displayAllSeats();
    void displayAvailableSeats();
    void displayReservedSeats();
    void displayAmountOfFreeAndReservedSeats();
private:
    const size_t numberOfSeats_ = 10;
    std::vector<Seat> places_;
    size_t numberOfReservedSeats_ = 0;
    size_t hallNumber_ = 0;
    std::string filmName_ = "";
};