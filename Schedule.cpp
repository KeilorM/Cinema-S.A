#include "schedule.h"
#include <iostream>

Schedule::Schedule() {
}
Schedule::Schedule(std::string date, std::string startHour, std::string endHour) {
	this->date = date;
	this->startHour = startHour;
	this->endHour = endHour;
}
Schedule::~Schedule() {
}
std::string Schedule::getDate() {
	return date;
}
std::string Schedule::getStartHour() {
	return startHour;
}
std::string Schedule::getEndHour() {
	return endHour;
}
void Schedule::setDate(std::string date) {
	this->date = date;
}
void Schedule::setStartHour(std::string startHour) {
	this->startHour = startHour;
}
void Schedule::setEndHour(std::string endHour) {
	this->endHour = endHour;
}
