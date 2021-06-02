#include "Menu.hpp"

void printMenu() { 
    std::cout << "1. Add reservation. \n";
    std::cout << "2. Delete reservation. \n";
    std::cout << "3. Check the place. \n";
    std::cout << "4. Display all seats. \n";
    std::cout << "5. Display available seats. \n";
    std::cout << "6. Display reserved seats. \n";
    std::cout << "7. Back to film select menu. \n\n";
    std::cout << "Select an option:";
}

void selectFilm(Cinema& films) {

        
        films.displayAllFilms();
        char select;
        std::cin.sync();
        select = std::getchar();
    
        switch (select) {
        case '0' : std::exit(0);
        case '1' : { selectSeat(films.getFilm(0), films);  break; }
        case '2' : { selectSeat(films.getFilm(1), films);  break; }
        case '3' : { selectSeat(films.getFilm(2), films);  break; }
        case '4' : { selectSeat(films.getFilm(3), films);  break; }
        case '5' : { selectSeat(films.getFilm(4), films);  break; }
        default:
            selectFilm(films);
            break;
        }
}

void selectSeat(CinemaHall hall, Cinema& films) {
    
    std::cin.ignore();
    system("clear");
    printMenu();
    char choice = getchar();
    
    
    switch (choice) {
    case '1' : {
        hall.addReservation();
        selectFilm(films);
        
        break;
    }
    case '2' : {
        hall.deleteReservation();
        selectFilm(films);
        break;
    }
    case '3' : {
        hall.checkSeat();
        selectFilm(films);
        break;
    }
    case '4' : {
        hall.displayAllSeats();
        selectFilm(films);
        break;
    }
    case '5' : {
        hall.displayAvailableSeats();
        selectFilm(films);
        break;
    }
    case '6' : {
        hall.displayReservedSeats();
        selectFilm(films);
        break;
    }
    case '7' : { 
        selectFilm(films);  
        break; 
    }
    default : {
        selectSeat(hall, films);
        break;
    }
    } 
}