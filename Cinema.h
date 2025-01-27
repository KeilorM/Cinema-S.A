#pragma once
#ifndef CINEMA_H
#define CINEMA_H
int const TOTALMOVIES = 5;
int const TOTALROOMS = 3;
#include <iostream>
#include "movie.h"
#include "room.h"
#include "schedule.h"
#include "booking.h"
#include "sale.h"
#include <random>

class Cinema {
private:
	Movie cinemaMovies[TOTALMOVIES];
	Room cinemaRooms[TOTALROOMS];
	Schedule cinemaSchedule[5];
	Booking cinemaBooking[20];
	Sale sales[50];
	char roomSeats[ROWS][COLUMNS];
public:
	Cinema();
	~Cinema();

	void saveMovieInformation();
	void showMovieInformation(int movieNumber);
	void showAvaliableMovie();
	void addMovie();
	void initializeSeats();
	void printRoom(int room);
	void createRoom();
	void showMovieWithRoom(int);
	void displaySchedules();
	void createdSchedule();
	void reserveSeats(int);
	int getMovieRoomId(int);
	void processPayment(std::string* cedula, int* seatId);
};
#endif

