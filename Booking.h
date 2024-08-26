#pragma once
#include <iostream>
#include "schedule.h"
#include "seat.h"
#ifndef BOOKING_H
#define BOOKING_H
using namespace std;

class Booking {
private:
	Schedule schedule;
	Seat bookSeats[5];
	double totalPrice;
	int bookingNumber;
public:
	Booking();
	Booking(double, int);
	~Booking();

	void setTotalPrice(double);
	void setBookingNumber(int);

	double getTotalPrice();
	int getBookingNumber();

};
#endif