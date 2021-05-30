#include "Cinema.hpp"

Cinema::Cinema() {
    places.reserve(numberOfSeats_);
    for (auto i = 1; i <= numberOfSeats_; ++i) {
        places.push_back(Seat("", "", i, false));
    }
};

void Cinema::addReservation() {
    std::cout << "Wolne miejsca: \n";
    Cinema::displayAvailableSeats();
}

void Cinema::selectSeat() {
    

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