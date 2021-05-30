#include "Menu.hpp"
#include "Seat.hpp"
#include "Cinema.hpp"

int main() {
    Cinema kino;
    printMenu();

    std::cout << "Select an option: ";
    char choice = getchar();

    while (choice != '7') {
        pressAButton();
        switch (choice) {
        case '1' : {
            kino.addReservation();
            break;
        }
        case '2' : {
            kino.deleteReservation();
            break;
        }
        case '3' : {
            kino.checkSeat();
            break;
        }
        case '4' : {
            kino.displayAllSeats();
            break;
        }
        case '5' : {
            kino.displayAvailableSeats();
            break;
        }
        case '6' : {
            kino.displayReservedSeats();
            break;
        }
        default : {
            std::cout << "There is no such option \n"; 
            std::cin.ignore();
            std::cout << "Select an option: ";
            choice = getchar();
        }
        }
    }



    return 0;
}