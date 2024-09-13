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
	std::string roomSeats[ROWS][COLUMNS];

public:
	Room();
	Room(int, int);
	~Room();
	
	void showRooms(char state, int seatId);
	void setId(int);
	void setSeatsNumber(int);

	int getId();
	int getSeatsNumber();
};
#endif;