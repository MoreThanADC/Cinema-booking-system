
#include "Cinema.hpp"

Cinema::Cinema(){
    halls_.reserve(amountOfHalls_);
    for (int i = 1; i <= amountOfHalls_; ++i) {
        halls_.push_back(CinemaHall());
    }
};
