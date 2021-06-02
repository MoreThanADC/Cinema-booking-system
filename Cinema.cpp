#include "Cinema.hpp"

Cinema::Cinema() {
    halls_.reserve(amountOfHalls_);
    for (auto i = 0; i < amountOfHalls_; ++i) {
        halls_.push_back(CinemaHall());
        halls_[i].setHallNumber(i+1);
        halls_[i].setFilmName(films_[i]);
    }
}

void Cinema::displayAllFilms() {
    size_t counter = 0;
    for(auto& el : halls_) {
        std::cout << ++counter << ". " << el.getFilmName() << '\n';
    }
}




    




