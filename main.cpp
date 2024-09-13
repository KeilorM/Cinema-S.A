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
    MYCINEMA.saveMovieInformation();
    int roomSeats[ROWS][COLUMNS];
    char state = 'F';
    int seatId = 1;
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
            std::cout << "2) Ver informacion de la sala" << std::endl;
            std::cout << "3) Ver informacion de los horarios" << std::endl;
            std::cout << "4) Salir al menu principal" << std::endl;
            std::cin >> selection;

            if (selection == 1) {
                MYCINEMA.addMovie();
            }
            if (selection == 2) { 
                MYCINEMA.createdSchedule();
                MYCINEMA.initializeSeats();
                MYCINEMA.displaySchedules();
                int movieNumber;

                std::cout << "Ingrese el numero de la pelicula para ver la sala correspondiente (0 a " << TOTALMOVIES - 1 << "): ";
                std::cin >> movieNumber;
                MYCINEMA.showMovieWithRoom(movieNumber);
             
            }
            if (selection == 3) {
                
            }
            if (selection == 4) {
                continue;
            }
        }
        if (option == "c") {
            std::cout << "1) Ver peliculas disponibles." << std::endl;
            std::cout << "2) Reservar asientos" << std::endl;
            std::cout << "3) Salir al menu principal." << std::endl;
            std::cin >> selectionTwo;
            if (selectionTwo == 1) {
                MYCINEMA.showAvaliableMovie();
                std::cout << "�Cual pelicula desea ver?" << std::endl;
                std::cin >> movieNumber;
                movieNumber = movieNumber - 1;
                MYCINEMA.showMovieInformation(movieNumber);
            }
            if (selectionTwo == 2) {
                MYCINEMA.createdSchedule();
                MYCINEMA.displaySchedules();
                
                MYCINEMA.initializeSeats();
                std::cout << "Ingrese el numero de la pelicula para ver la sala correspondiente (0 a " << TOTALMOVIES - 1 << "): ";
                std::cin >> movieNumber;
                MYCINEMA.showMovieWithRoom(movieNumber);
                int roomId;
                int seatId;
                std::cout << "Ingrese el numero de la sala para reservar un asiento (0 a " << TOTALROOMS - 1 << "): ";
                std::cin >> roomId;
                std::cout << "Ingrese el numero del asiento a reservar: ";
                std::cin >> seatId;
                MYCINEMA.reserveSeat(roomId, seatId);
            }
            if (selectionTwo == 3) {
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
