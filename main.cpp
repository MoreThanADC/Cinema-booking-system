#include "Menu.hpp"
#include "Seat.hpp"

int main() {
    // printMenu();
    // selectAction();

    Seat reservation;
    reservation.display();
    reservation.reserve();
    reservation.display();
    reservation.cancelReservation();
    reservation.display();
   
    return 0;
}