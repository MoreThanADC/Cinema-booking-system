#include "Cinema.hpp"

Cinema::Cinema() {
    places_.reserve(numberOfSeats_);
    for (auto i = 1; i <= numberOfSeats_; ++i) {
        places_.push_back(Seat("", "", i, false));
    }
};

void Cinema::addReservation() {
    std::cout << "Available seats: \n";
    Cinema::displayAvailableSeats();
    Cinema::selectSeat();
    if (Cinema::selectSeat()) {
        places_[Cinema::selectSeat() - 1].reserve();
    }
}

void Cinema::deleteReservation() {
    std::cout << "Cancel your reservation: \n";
    Cinema::displayReservedSeats();
    Cinema::selectSeat();
    if (Cinema::selectSeat()) {
        places_[Cinema::selectSeat() - 1].cancelReservation();
    }
}

int Cinema::selectSeat() {
    std::cout << "Select your seat: ";
    int selected;
    std::cin >> selected;

    if (selected < 1 || selected > numberOfSeats_) {
        std::cout << "there is no such place\n";
        return 0;
    } 
    return selected;
}
void Cinema::checkSeat() {
    std::cout << "Check the reservation: \n";
    Cinema::selectSeat();
    if (selectSeat()) {
        places_[selectSeat()].display();
    }
}

void Cinema::displayAllSeats() {
    for (auto& el : places_) {
        el.display();
    }
}

void Cinema::displayAvailableSeats() {
    for (auto& el : places_) {
        if (!el.isReserved()) {
            el.display();
        }
    }
}

void Cinema::displayReservedSeats() {
    for (auto& el : places_) {
        if (el.isReserved()) {
            el.display();
        }
    }
}