#pragma once
#include <iostream>
#include "movie.h"
#include "room.h"
#ifndef SCHEDULE_H
#define SCHEDULE_H

class Schedule {
private:
	int date;
	int startHour;
	int endHour;
	Movie movie;
	Room room;
public:
	Schedule();
	Schedule(int, int, int);
	~Schedule();

	void setDate(int);
	void setStartHour(int);
	void setEndHour(int);

	int getDate();
	int getStartHour();
	int getEndHour();
};
#endif