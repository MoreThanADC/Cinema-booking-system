#pragma once
#include <string>
#include <vector>
#include "CinemaHall.hpp"


class Cinema {
public:
    Cinema();
    void displayAllFilms();
    CinemaHall& getFilm(int number){ return halls_[number] ;};

private:
    std::vector<CinemaHall> halls_;
    size_t amountOfHalls_ = 5;
    std::vector<std::string> films_ {
        "Blade Runner, 1982",
        "2001: A Space Odyssey, 1968",
        "One Flew Over the Cuckoo's Nest, 1975",
        "The Godfather, 1972",
        "The Good, the Bad and the Ugly, 1966"
    };
};