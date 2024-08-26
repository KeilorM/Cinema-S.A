#pragma once
#ifndef ROOM_H
#define ROOM_H
#include "seat.h"

class Room {
private:
	int id;
	int seatsNumber;
	double price;
	Seat roomSeats[10][10];
public:
	Room();
	Room(int, int, double);
	~Room();

	void setId(int);
	void setSeatsNumber(int);
	void setPrice(double);

	int getId();
	int getSeatsNumber();
	double getPrice();
};
#endif;