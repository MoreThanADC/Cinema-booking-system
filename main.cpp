#include "Cinema.hpp"
#include "Menu.hpp"
#include "Seat.hpp"

int main() {

    Cinema kino;
    char choice;

    do {
        system("clear");
        printMenu();
        std::cout << "Select an option: ";
        choice = getchar();
        switch (choice) {
        case '1' : {
            system("clear");
            kino.addReservation();
            pressAButton();
            break;
        }
        case '2' : {
            system("clear");
            kino.deleteReservation();
            pressAButton();
            break;
        }
        case '3' : {
            system("clear");
            kino.checkSeat();
            pressAButton();
            break;
        }
        case '4' : {
            system("clear");
            kino.displayAllSeats();
            pressAButton();
            break;
        }
        case '5' : {
            system("clear");
            kino.displayAvailableSeats();
            pressAButton();
            break;
        }
        case '6' : {
            system("clear");
            kino.displayReservedSeats();
            pressAButton();
            break;
        }
        case '7' : {
            system("clear");
            std::cout << "Good Bye!\n";
            break;
        }
        default : {
            system("clear");
            std::cout << "There is no such option \n"; 
            break;
        }
        } 
    } while (choice != '7');



    return 0;
}