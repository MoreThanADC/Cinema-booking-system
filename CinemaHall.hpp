#pragma once
#include <iostream>
#include <numeric>
#include <vector>
#include "Seat.hpp"


class CinemaHall {

public:
    CinemaHall();

    void setHallNumber(int number) { hallNumber_ = number; };
    void setFilmName(std::string movie) { filmName_ = movie; };
    std::string getFilmName() const { return filmName_; };
    int getNumberOfReservedSeats() { return numberOfReservedSeats_; };

    void addReservation();
    void deleteReservation();
    int selectSeat();
    void checkSeat();
    void displayAllSeats();
    void displayAvailableSeats();
    void displayReservedSeats();
    void displayAmountOfFreeAndReservedSeats();

private:
    const size_t numberOfSeats_ = 10;
    std::vector<Seat> places_;
    size_t numberOfReservedSeats_ = 0;
    int hallNumber_ = 0;
    std::string filmName_ = "";
  
};