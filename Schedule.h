#pragma once
#include <iostream>
#include "movie.h"
#include "room.h"
#ifndef SCHEDULE_H
#define SCHEDULE_H

class Schedule {
private:
	std::string date;
	int startHour;
	int endHour;
	Movie movie;
	Room room;
public:
	Schedule();
	Schedule(std::string, int, int);
	~Schedule();

	void setDate(std::string);
	void setStartHour(int);
	void setEndHour(int);

	std::string getDate();
	int getStartHour();
	int getEndHour();
};
#endif