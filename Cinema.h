#pragma once
#ifndef CINEMA_H
#define CINEMA_H
#define TOTALMOVIES 5
#define TOTALROOMS 3
#include <iostream>
#include "movie.h"
#include "room.h"
#include "schedule.h"
#include "booking.h"
#include "sale.h"

class Cinema {
private:
	Movie cinemaMovies[TOTALMOVIES];
	Room cinemaRooms[TOTALROOMS];
	Schedule cinemaSchedule[3];
	Booking cinemaBooking[20];
	Sale sales[50];

public:
	Cinema();
	~Cinema();

	void saveMovieInformation();
	void showInformationMovie();
	void saveInformationRoom();
	void addMovie();
	void displayRooms();

};
#endif

