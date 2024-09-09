#include <iostream>
#include "Cinema.h"
#include "Movie.h"
#include "Room.h"
#include "Sale.h"
#include "Booking.h"
#include "Schedule.h"
#include "Seat.h"

int main(){
    Cinema MYCINEMA;
    MYCINEMA.saveMovieInformation();
    bool menu = true;
    std::string option;
    int optionTwo;
    
    std::string selectionTwo;
    int numOfMovies;
    while (menu) {
        system("cls");
        std::cout << "== menu ==" << std::endl;
        std::cout << "a) Archivo" << std::endl;
        std::cout << "b) Mantenimiento" << std::endl;
        std::cout << "c) Reserva" << std::endl;
        std::cout << "d) Venta" << std::endl;
        std::cin >> option;

        if (option == "a") {
            std::cout << "1) Acerca de" << std::endl;
            std::cout << "2) Salir" << std::endl;
            std::cin >> optionTwo;
       
            if (optionTwo == 1) {
                std::cout << "------------------------------------------------------------------------------------------------- " << std::endl;
                std::cout << "Este sistema de venta de tickets fue creado por Keilor Jafet Mu" << char(164) << "oz Chavarria." << std::endl;
                std::cout << "Universidad Nacional, sede Campus Coto" << std::endl;
                std::cout << "------------------------------------------------------------------------------------------------- " << std::endl;
                std::cout << "" << std::endl;
            }
            if (optionTwo == 2) {
                menu = false;
            }
        }
        if (option == "b") {
            int optionTree;

            if (optionTree == 1) {


            }
            std::string selection;
            std::cout << "¿Desea agregar una pelicula?" << std::endl;
            std::cout << "Y or N" << std::endl;
            std::cin >> selection;

            if (selection == "Y" || selection == "y") {
                MYCINEMA.addMovie();

            }
            else {
                continue;
            }
            
        }
        if (option == "c") {
            std::cout << "Desea ver la lista de peliculas disponibles" << std::endl;
            std::cout << "Y or N" << std::endl;
            std::cin >> selectionTwo;
            if (selectionTwo == "Y" || "y") {
                MYCINEMA.showMovieInformation();
            }
            if (selectionTwo == "N" || "n") {
                std::cout << "== menu ==" << std::endl;
                std::cout << "a) Archivo" << std::endl;
                std::cout << "b) Mantenimiento" << std::endl;
                std::cout << "c) Reserva" << std::endl;
                std::cout << "d) Venta" << std::endl;
                std::cin >> option;
            }
        }
        if (option == "") {
            menu = false;
        }
        system("Pause");
    }

    return 0;
}
