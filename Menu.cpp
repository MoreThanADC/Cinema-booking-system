#include "Menu.hpp"

void printMenu() {
    std::cout << "1. Add reservation. \n";
    std::cout << "2. Delete reservation. \n";
    std::cout << "3. Check the place. \n";
    std::cout << "4. Display all seats. \n";
    std::cout << "5. Display available seats. \n";
    std::cout << "6. Display reserved seats. \n";
    std::cout << "7. Back to film select menu. \n\n";
}

void selectFilm(Cinema& films) {
    char choice; 

    do {
        system("clear");
        films.displayAllFilms();
        std::cout << "\nSelect film (0 quit): ";
        choice = getchar();

        switch (choice) {
        case '1' : selectSeat(films.getFilm(1));
        case '2' : selectSeat(films.getFilm(2));
        case '3' : selectSeat(films.getFilm(3));
        case '4' : selectSeat(films.getFilm(4));
        case '5' : selectSeat(films.getFilm(5));
        default:
            system("clear");
            std::cout << "There is no such option \n\n"; 
            std::cout << "Press a button to continue: ";
            std::getchar();
            std::cin.ignore();
            std::cin.sync();
            break;
        }
    } while ( choice != 0);
}

void selectSeat(CinemaHall hall) {
    char choice;
    do {
        system("clear");
        printMenu();
        std::cout << "Select an option: ";
        choice = getchar();
        
        switch (choice) {
        case '1' : {
            system("clear");
            hall.addReservation();
            pressAButton();
            break;
        }
        case '2' : {
            system("clear");
            hall.deleteReservation();
            pressAButton();
            break;
        }
        case '3' : {
            system("clear");
            hall.checkSeat();
            pressAButton();
            break;
        }
        case '4' : {
            system("clear");
            hall.displayAllSeats();
            pressAButton();
            break;
        }
        case '5' : {
            system("clear");
            hall.displayAvailableSeats();
            pressAButton();
            break;
        }
        case '6' : {
            system("clear");
            hall.displayReservedSeats();
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
}

void pressAButton() {
    system("clear");
    std::cout << "\nPress a button to continue: ";
    std::getchar();
    std::cin.ignore();
    std::cin.sync();
}
