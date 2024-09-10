#pragma once
#ifndef ROOM_H
#define ROOM_H
#include "seat.h"
int const ROWS = 5;
int const COLUMNS = 5;

class Room {
private:
	int id;
	int seatsNumber;
	double price;
	std::string roomSeats[ROWS][COLUMNS];

public:
	Room();
	Room(int, int, double);
	~Room();

	void createRoom(std::string roomSeats[ROWS][COLUMNS], char state, int seatId);

	void setId(int);
	void setSeatsNumber(int);
	void setPrice(double);

	int getId();
	int getSeatsNumber();
	double getPrice();
};
#endif;