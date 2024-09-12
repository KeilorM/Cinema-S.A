#include "schedule.h"
#include <iostream>

Schedule::Schedule() {
}
Schedule::Schedule(int date, int startHour, int endHour) {
	this->date = date;
	this->startHour = startHour;
	this->endHour = endHour;
}
Schedule::~Schedule() {
}
int Schedule::getDate() {
	return date;
}
int Schedule::getStartHour() {
	return startHour;
}
int Schedule::getEndHour() {
	return endHour;
}
void Schedule::setDate(int date) {
	this->date = date;
}
int Schedule::setStartHour(int startHour) {
	this->startHour = startHour;
}
void Schedule::setEndHour(int endHour) {
	this->endHour = endHour;
}
