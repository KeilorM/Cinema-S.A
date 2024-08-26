#pragma once
#include <iostream>
#ifndef SEAT_H
#define SEAT_H

class Seat {
private:
	int id;
	std::string state;
public:
	Seat();
	Seat(int, std::string);
	~Seat();

	void setId(int);
	void setState(std::string);

	int getId();
	std::string getState();
};
#endif