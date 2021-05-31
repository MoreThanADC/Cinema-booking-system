#include "Cinema.hpp"

Cinema::Cinema() {
    places_.reserve(numberOfSeats_);
    for (auto i = 1; i <= numberOfSeats_; ++i) {
        places_.push_back(Seat("", "", i, false));
    }
};

void Cinema::addReservation() {
    std::cout << "Free seats: " << numberOfSeats_ - numberOfReservedSeats_ << '\n';
    std::cout << "Reserved seats: " << numberOfReservedSeats_ << "\n\n";
    std::cout << "Available seats: \n\n";
    Cinema::displayAvailableSeats();
    if (numberOfReservedSeats_ < numberOfSeats_) {
        int selectedSeat = Cinema::selectSeat();
        if (selectedSeat) {
            places_[selectedSeat - 1].reserve();
            numberOfReservedSeats_++; 
        }
    }
}

void Cinema::deleteReservation() {
    std::cout << "Free seats: " << numberOfSeats_ - numberOfReservedSeats_ << '\n';
    std::cout << "Reserved seats: " << numberOfReservedSeats_ << "\n\n";
    Cinema::displayReservedSeats();
    if (numberOfReservedSeats_ > 0) {
        int selectedSeat = Cinema::selectSeat();
        if (selectedSeat) {
            places_[selectedSeat - 1].cancelReservation();
            numberOfReservedSeats_--;
        }
    }
    
}

int Cinema::selectSeat() {
    size_t selected;
    std::cout << "\nSelect number of seat: ";
    std::cin >> selected;
    if (selected < 1 || selected > numberOfSeats_) {
        std::cout << "there is no such place\n";
        return 0;
    } 
    return selected;
}

void Cinema::checkSeat() {
    std::cout << "Check the reservation: \n";
    int selectedSeat = Cinema::selectSeat();
    if (selectedSeat) {
        places_[selectedSeat - 1].display();
    }
}

void Cinema::displayAllSeats() {
    std::cout << "Free seats: " << numberOfSeats_ - numberOfReservedSeats_ << '\n';
    std::cout << "Reserved seats: " << numberOfReservedSeats_ << "\n\n";
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
    if ((numberOfSeats_ - numberOfReservedSeats_) == 0) {
        std::cout << "All seats are reserved\n";
    }
}

void Cinema::displayReservedSeats() {
    for (auto& el : places_) {
        if (el.isReserved()) {
            el.display();
        }
    }
    if (numberOfReservedSeats_ == 0) {
        std::cout << "All seats are free\n";
    }
}