#pragma once
#include <iostream>
#include "movie.h"
#include "room.h"
#ifndef SCHEDULE_H
#define SCHEDULE_H

class Schedule {
private:
	std::string date;
	std::string startHour;
	std::string endHour;
	Movie movie;
	Room room;
public:
	Schedule();
	Schedule(std::string, std::string, std::string);
	~Schedule();

	void setDate(std::string);
	void setStartHour(std::string);
	void setEndHour(std::string);

	std::string getDate();
	std::string getStartHour();
	std::string getEndHour();
};
#endif