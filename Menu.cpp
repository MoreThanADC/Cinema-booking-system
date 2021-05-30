#include "Menu.hpp"

void printMenu() {
    std::cout << "Reservation of places: \n\n";
    std::cout << "1. Add reservation. \n";
    std::cout << "2. Delete reservation. \n";
    std::cout << "3. Check the place. \n";
    std::cout << "4. Display all seats. \n";
    std::cout << "5. Display available seats. \n";
    std::cout << "6. Display reserved seats. \n";
    std::cout << "7. Close the system. \n\n";
}

void pressAButton() {
    std::cout << "Press a button to continue: ";
    std::getchar();
}
