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





