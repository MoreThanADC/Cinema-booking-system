#include "Cinema.hpp"

Cinema::Cinema() {
    places.reserve(numberOfSeats_);
    std::iota(places.begin(), places.end(), 1);
};