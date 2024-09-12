#include "movie.h"
#include <iostream>
#define TOTALMOVIES 5

Movie cinemaMovies[TOTALMOVIES];

Movie::Movie() {
}

Movie::Movie(std::string name, int year, int time, std::string country, int review, int ticketPrice, int roomId) {
    this->name = name;
    this->year = year;
    this->time = time;
    this->country = country;
    this->review = review;
    this->ticketPrice = ticketPrice;
    this->roomId = roomId;
}
Movie::~Movie() {
}

std::string Movie::getName() {
    return name;
}

int Movie::getYear() {
    return year;
}

int Movie::getTime() {
    return time;
}

std::string Movie::getCountry() {
    return country;
}

int Movie::getReview() {
    return review;
}
int Movie::getTicketPrice() {
    return ticketPrice;
}
int Movie::getRoomId() {
    return roomId;
}

void Movie::setName(std::string name) {
    this->name = name;
}
void Movie::setYear(int year) {
    this->year = year;
}
void Movie::setTime(int time) {
    this->time = time;
}
void Movie::setCountry(std::string country) {
    this->country = country;
}
void Movie::setReview(int review) {
    this->review = review;
}
void Movie::setTicketPrice(int ticketPrice) {
    this->ticketPrice = ticketPrice;
}
void Movie::setRoomId(int roomId) {
    this->roomId = roomId;
}