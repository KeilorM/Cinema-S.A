#include "room.h"
#include <iostream>

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
