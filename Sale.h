#pragma once
#ifndef SALE_H
#define SALE_H
#include <iostream>
#include "booking.h"

class Sale {
private:
	Booking booking;
	std::string idCustomer;
	std::string cardNumber;
public:
	Sale();
	Sale(std::string, std::string);
	~Sale();
  
	void setIdCustomer(std::string);
	void setCardNumber(std::string);

	std::string getIdCustomer();
	std::string getCardNumber();
};
#endif
