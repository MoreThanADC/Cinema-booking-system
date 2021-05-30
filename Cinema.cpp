#include "Cinema.hpp"

Cinema::Cinema() {
    places.reserve(numberOfSeats_);
    for (auto i = 1; i <= numberOfSeats_; ++i) {
        places.push_back(Seat("", "", i, false));
    }
};

void Cinema::displayAllPlaces() {
    for (auto& el : places) {
        el.display();
    }
}