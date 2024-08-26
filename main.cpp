#include <iostream>
#include "Cinema.h"
#include "Movie.h"
#include "Room.h"
#include "Sale.h"
#include "Booking.h"
#include "Schedule.h"
#include "Seat.h"

int main(){

    bool menu = true;
    std::string option;
    int optionTwo;
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
                std::cout << "Este sistema de venta de tickets fue creado por Keilor Jafet Mu" << char(164) << "oz Chavarria  ";
            }
            if (optionTwo == 2) {
                menu = false;
            }
        }
        if (option == "b") {
            
        }
        if (option == "") {
            menu = false;
        }
        system("Pause");
    }

    return 0;
}
