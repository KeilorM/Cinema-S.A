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
    std::string cedula;
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
                std::cout << "¿Cual pelicula desea ver?" << std::endl;
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
                int roomId = MYCINEMA.getMovieRoomId(movieNumber);
                MYCINEMA.reserveSeats(roomId);
                std::cout << "Ingrese su numero de cedula (9 digitos): ";
                std::cin >> cedula; 
                std::cout << "Ingrese el numero del asiento reservado: ";
                std::cin >> seatId; 

                std::cout << "--------------------------------------------------------------------------------------------------------------------" << std::endl;
                MYCINEMA.showMovieWithRoom(movieNumber);
                std::cout << "El asiento fue reservado con exito!!!, puedes comprobarlo viendo el estado del asiento nuevamente" << std::endl;
            }
         
            if (selectionTwo == 3) {
                continue;
            }
        }
        if (option == "") {
            menu = false;
        }
        system("Pause");
    
        if (option == "d") {
            if (seatId == 0 || cedula.empty()) {
                std::cout << "Error: No hay asiento reservado o cedula no proporcionada.\n" << std::endl;
            }
            else {            
                std::cout << "Hay una reserva pendiente de pago\n" << std::endl; 
                std::cout << "Con la cedula: " << cedula << " y el asiento: " << seatId << "\n" << std::endl;

                MYCINEMA.processPayment(&cedula, &seatId); 

                std::cout << "\nAsiento " << seatId << " marcado como vendido con cedula " << cedula << "." << std::endl;
            }
        }

        if (option != "a" && option != "b" && option != "c" && option != "d") {
            std::cout << "Opcion no valida. Intentelo de nuevo." << std::endl;
        }

        std::cin.ignore();
        std::cout << "Presione Enter para continuar...";
        std::cin.get();
    }
    return 0;
}
