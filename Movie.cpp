#include "movie.h"
#include <iostream>
#define TOTALMOVIES 5

Movie cinemaMovies[TOTALMOVIES];

Movie::Movie() {
}

Movie::Movie(std::string name, int year, int time, std::string country, int review) {
    this->name = name;
    this->year = year;
    this->time = time;
    this->country = country;
    this->review = review;
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