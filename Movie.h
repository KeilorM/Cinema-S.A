#pragma once
#include <iostream>
#ifndef MOVIE_H
#define MOVIE_H

class Movie
{
private:
	std::string name;
	int year;
	int time;
	std::string country;
	int review;
	int ticketPrice;
	int roomId;

public:
	Movie();
	Movie(std::string, int, int, std::string, int, int, int);
	~Movie();

	void setName(std::string);
	void setYear(int);
	void setTime(int);
	void setCountry(std::string);
	void setReview(int);
	void setTicketPrice(int);
	void setRoomId(int);

	std::string getName();
	int getYear();
	int getTime();
	std::string getCountry();
	int getReview();
	int getTicketPrice();
	int getRoomId();
};
#endif