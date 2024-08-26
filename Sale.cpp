#include "Sale.h"
#include <iostream>

Sale::Sale() {

}
Sale::Sale(std::string idCostumer, std::string cardNumber) {
	this->idCustomer = idCostumer;
	this->cardNumber = cardNumber;
}
Sale::~Sale() {

}
std::string Sale::getIdCustomer() {
	return idCustomer;
}
std::string Sale::getCardNumber() {
	return cardNumber;
}
void Sale::setIdCustomer(std::string) {
	this->idCustomer = idCustomer;
}
void Sale::setCardNumber(std::string) {
	this->cardNumber = cardNumber;
}
