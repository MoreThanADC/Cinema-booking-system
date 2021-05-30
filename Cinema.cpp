#include "Cinema.hpp"

Cinema::Cinema() {
    places.reserve(numberOfSeats_);
    for (auto i = 1; i <= numberOfSeats_; ++i) {
        places.push_back(Seat("", "", i, false));
    }
};

void Cinema::addReservation() {
    std::cout << "Available seats: \n";
    Cinema::displayAvailableSeats();
    Cinema::selectSeat();
    if (Cinema::selectSeat()) {
        places[Cinema::selectSeat() - 1].reserve();
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
        places[selectSeat()].display();
    }
}

void Cinema::displayAllSeats() {
    for (auto& el : places) {
        el.display();
    }
}

void Cinema::displayAvailableSeats() {
    for (auto& el : places) {
        if (!el.isReserved()) {
            el.display();
        }
    }
}

void Cinema::displayReservedSeats() {
    for (auto& el : places) {
        if (el.isReserved()) {
            el.display();
        }
    }
}