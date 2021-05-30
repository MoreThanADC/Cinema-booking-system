#include "Menu.hpp"

void printMenu() {
    std::cout << "Reservation of places: \n\n";
    std::cout << "1. Add reservation. \n";
    std::cout << "2. Delete reservation. \n";
    std::cout << "3. Check the place. \n";
    std::cout << "4. Display all seats. \n";
    std::cout << "5. Display all available seats. \n";
    std::cout << "6. Display all reserved seats. \n";
    std::cout << "7. Close the system. \n\n";
}

int selectAction() {
    std::cout << "Select an option: ";
    char choice = getchar();

    while (choice != '7') {
        switch (choice) {
        case '1' : {
            std::cout << "Add reservation \n";
            return 1;
        }
        case '2' : {
            std::cout << "Delete reservation \n";
            return 2;
        }
        case '3' : {
            std::cout << "Check the place \n";
            return 3;
        }
        case '4' : {
            std::cout << "Display all seats \n";
            return 4;
        }
        case '5' : {
            std::cout << "Display all available seats \n";
            return 5;
        }
        case '6' : {
            std::cout << "Display all reserved seats \n";
            return 6;
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