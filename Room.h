#pragma once
#ifndef ROOM_H
#define ROOM_H
#include "seat.h"
int const ROWS = 10;
int const COLUMNS = 10;

class Room {
private:
	int id;
	int seatsNumber;
	double price;
	Seat roomSeats[ROWS][COLUMNS];
public:
	Room();
	Room(int, int, double);
	~Room();

	void createRoom(Seat roomSeats[ROWS][COLUMNS]);

	void setId(int);
	void setSeatsNumber(int);
	void setPrice(double);

	int getId();
	int getSeatsNumber();
	double getPrice();
};
#endif;