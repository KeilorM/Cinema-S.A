#include "room.h"
#include <iostream>
#include "cinema.h"
#include <string>
#include "Seat.h"

Room::Room() {
}
Room::Room(int id, int seatsNumber, double price) {
	this->id = id;
	this->seatsNumber = seatsNumber;
	this->price = price;
}
Room::~Room() {
}

int Room::getId() {
	return id;
}
int Room::getSeatsNumber() {
	return seatsNumber;
}
double Room::getPrice() {
	return price;
}
void Room::setId(int) {
	this->id = id;
}
void Room::setSeatsNumber(int) {
	this->seatsNumber = seatsNumber;
}
void Room::setPrice(double) {
	this->price = price;
}
void Room::createRoom(std::string roomSeats[ROWS][COLUMNS], char state, int seatId) {
   
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
			roomSeats[i][j] = state;
			std::cout << "\t|\t" << roomSeats[i][j] << seatId;
			
			seatId++;

        }
		std::cout << "\n" << std::endl;
		std::cout << "--------------------------------------------------------------------------------------------------------------------" << std::endl;
    }
}



