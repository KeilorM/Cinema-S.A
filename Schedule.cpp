#include "schedule.h"
#include <iostream>

Schedule::Schedule() {
}
Schedule::Schedule(std::string date, int startHour, int endHour) {
	this->date = date;
	this->startHour = startHour;
	this->endHour = endHour;
}
Schedule::~Schedule() {
}
std::string Schedule::getDate() {
	return date;
}
int Schedule::getStartHour() {
	return startHour;
}
int Schedule::getEndHour() {
	return endHour;
}
void Schedule::setDate(std::string) {
	this->date = date;
}
void Schedule::setStartHour(int) {
	this->startHour = startHour;
}
void Schedule::setEndHour(int) {
	this->endHour = endHour;
}