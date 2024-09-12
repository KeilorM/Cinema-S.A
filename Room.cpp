#include "room.h"
#include <iostream>
#include "cinema.h"
#include <string>
#include "Seat.h"
#include <random>

Room::Room() {
}
Room::Room(int id, int seatsNumber) {
	this->id = id;
	this->seatsNumber = seatsNumber;
	
}
Room::~Room() {
}

int Room::getId() {
	return id;
}
int Room::getSeatsNumber() {
	return seatsNumber;
}

void Room::setId(int) {
	this->id = id;
}
void Room::setSeatsNumber(int) {
	this->seatsNumber = seatsNumber;
}

void Room::initializeSeats() {

    
    std::random_device rd;  
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 1); 

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            int random = dis(gen); 
            roomSeats[i][j] = (random == 0) ? 'F' : 'R';
        }
    }
}

    // Método para imprimir una sala específica
void Room::printRoom(int room) {
    int seatId = 1;
    std::cout << "Sala: " << room + 1 << std::endl;
    std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            std::cout << "\t|\t" << roomSeats[i][j] << seatId;
            seatId++;
        }
        std::cout << "\n" << std::endl;
    }

    std::cout << "------------------------------------------------------------------------------------------------" << std::endl;
}
void Room::createRoom() {
    
    std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

    for (int room = 0; room < TOTALROOMS; room++) {
        initializeSeats(); 
        printRoom(room);  
    }
}

void Room::showRooms(char state, int seatId) {
    
    std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

    for (int room = 0; room < TOTALROOMS; room++) {
        std::cout << "Sala " << room + 1 <<std::endl;
        std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

        seatId = 1; 

        for (int i = 0; i < ROWS; i++) {
            
            for (int j = 0; j < COLUMNS; j++) {
                roomSeats[i][j] = state; 
                std::cout << "\t|\t" << roomSeats[i][j]<< seatId; 
                seatId++;  
            }
            std::cout << "\n" << std::endl;
        }

        
        std::cout << "------------------------------------------------------------------------------------------------" << std::endl;
    }
}




