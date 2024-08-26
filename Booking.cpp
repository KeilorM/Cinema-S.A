#include "booking.h"
#include <iostream>


Booking::Booking() {
}
Booking::Booking(double totalPrice, int bookingNumber) {
	this->totalPrice = totalPrice;
	this->bookingNumber = bookingNumber;
}
Booking::~Booking() {
}

double Booking::getTotalPrice() {
	return totalPrice;
}
int Booking::getBookingNumber() {
	return bookingNumber;
}
void Booking::setTotalPrice(double) {
	this->totalPrice = totalPrice;
}
void Booking::setBookingNumber(int) {
	this->bookingNumber = bookingNumber;
}