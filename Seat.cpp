#include "seat.h"
#include <iostream>

Seat::Seat() {
}
Seat::Seat(int id, std::string state) {
	this->id = id;
	this->state = state;
}
Seat::~Seat() {
}

int Seat::getId() {
	return id;
}
std::string Seat::getState() {
	return state;
}
void Seat::setId(int) {
	this->id = id;
}
void Seat::setState(std::string) {
	this->state = state;
}