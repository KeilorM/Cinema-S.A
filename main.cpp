#include <iostream>
#include "Cinema.h"
#include "Movie.h"
#include "Room.h"
#include "Sale.h"
#include "Booking.h"
#include "Schedule.h"
#include "Seat.h"

int main() {
    Cinema MYCINEMA;
    Room MYROOM;
    int roomSeats[ROWS][COLUMNS];
    char state = 'F';
    int seatId = 1;
    MYCINEMA.saveMovieInformation();
    bool menu = true;
    double price = 3000;
    std::string option;
    int optionTwo;
    int movieNumber;
    int selectionTwo;
    int numOfMovies;
    while (menu) {
        system("cls");
        std::cout << "------------------------------------------------------------------------------------------------- " << std::endl;
        std::cout << "Bienvenido al sistema de compra de tickets de Cinema S.A" << std::endl;
        std::cout << "Ingrese la opcion que desear para proseguir" << std::endl;
        std::cout << "------------------------------------------------------------------------------------------------- " << std::endl;
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
                optionTwo = 0;
                menu = false;
            }
        }
        if (option == "b") {
            

            int selection;
            std::cout << "1) Agregar pelicula" << std::endl;
            std::cout << "2) Cambiar la configuracion de la sala" << std::endl;
            std::cout << "3) Salir al menu principal" << std::endl;
            std::cin >> selection;

            if (selection == 1) {
                MYCINEMA.addMovie();
            }
            if (selection == 2) { 
                MYROOM.createRoom();
            }
        }
        if (option == "c") {
            std::cout << "1) Ver peliculas disponibles." << std::endl;
            std::cout << "2) Salir al menu principal." << std::endl;
            std::cin >> selectionTwo;
            if (selectionTwo == 1) {
                MYCINEMA.showAvaliableMovie();
                std::cout << "�Cual pelicula desea ver?" << std::endl;
                std::cin >> movieNumber;
                movieNumber = movieNumber - 1;
                MYCINEMA.showMovieInformation(movieNumber);
            }
            if (selectionTwo == 2) {
                continue;
            }
        }
        if (option == "") {
            menu = false;
        }
        system("Pause");
    }

    return 0;
}
