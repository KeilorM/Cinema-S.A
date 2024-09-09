#include "room.h"
#include <iostream>
#include "cinema.h"
#include <string>

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
void createRoom(Seat roomSeat[ROWS][COLUMNS]) {
   
        char rowLetter = 'A';
        int seatNumber = 1;

        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLUMNS; ++j) {
                Seat roomSeat[i][j] = std::to_string (seatNumber) + rowLetter;
                seatNumber ++; 
            }
            rowLetter = rowLetter + 1;
            seatNumber = 1;
        }
    
       
}

