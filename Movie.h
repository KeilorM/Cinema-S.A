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

public:
	Movie();
	Movie(std::string, int, int, std::string, int);
	~Movie();

	void setName(std::string);
	void setYear(int);
	void setTime(int);
	void setCountry(std::string);
	void setReview(int);

	std::string getName();
	int getYear();
	int getTime();
	std::string getCountry();
	int getReview();
};
#endif