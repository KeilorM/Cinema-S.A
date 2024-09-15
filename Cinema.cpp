#include <iostream>
#include "cinema.h"
#include "Room.h"
#include <string>
#include <random>

Cinema::Cinema() {

}
Cinema::~Cinema(){

}
void Cinema::initializeSeats() {


	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0, 1);

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			int random = dis(gen);
			roomSeats[i][j] = (random == 0) ? 'F' : 'R';
		}
	}
}

void Cinema::printRoom(int room) {
	int seatId = 1;
	std::cout << "Sala: " << room + 1 << std::endl;
	std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			std::cout << "\t|\t" << roomSeats[i][j] << seatId;
			seatId++;
		}
		std::cout << "\n" << std::endl;
	}

	std::cout << "------------------------------------------------------------------------------------------------" << std::endl;
}
void Cinema::createRoom() {

	std::cout << "-------------------------------------------------------------------------------------------------------------------" << std::endl;

	for (int room = 0; room < TOTALROOMS; room++) {
		std::cout << "Los asientos poseen una letra y un numero, la letra puede ser R o F, la R hace referencia a reservado (reserved) y la F hace referencia a libre (free)" << std::endl;
		std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

		initializeSeats();
		printRoom(room);
	}
}

void Room::showRooms(char state, int seatId) {

	std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

	for (int room = 0; room < TOTALROOMS; room++) {
		std::cout << "Sala " << room + 1 << std::endl;
		std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

		seatId = 1;

		for (int i = 0; i < ROWS; i++) {

			for (int j = 0; j < COLUMNS; j++) {
				roomSeats[i][j] = state;
				std::cout << "\t|\t" << roomSeats[i][j] << seatId;
				seatId++;
			}
			std::cout << "\n" << std::endl;
		}


		std::cout << "------------------------------------------------------------------------------------------------" << std::endl;
	}
}

void Cinema::saveMovieInformation() {
	std::string moviesName[TOTALMOVIES] = { "Run", "Cars", "Hulk 2", "It"};
	int yearMovies[TOTALMOVIES] = { 2013, 2020, 2003,1990 };
	int timeMovies[TOTALMOVIES] = { 190, 80, 120, 160};
	std::string countryMovies[TOTALMOVIES] = { "Canada", "USA", "Brazil", "Irlanda"};
	int reviewsMovies[TOTALMOVIES] = { 7, 9, 5, 10};
	int movieTicketPrice[TOTALMOVIES] = { 4000, 3800, 3500, 5000 };
	int movieRoomId[TOTALMOVIES] = { 1, 2, 3, 1 };

	for (int i = 0; i < TOTALMOVIES; i++) {
		
			cinemaMovies[i].setName(moviesName[i]);
			cinemaMovies[i].setYear(yearMovies[i]);
			cinemaMovies[i].setTime(timeMovies[i]);
			cinemaMovies[i].setCountry(countryMovies[i]);
			cinemaMovies[i].setReview(reviewsMovies[i]);
			cinemaMovies[i].setTicketPrice(movieTicketPrice[i]);
			cinemaMovies[i].setRoomId(movieRoomId[i]);
		
	}
}
void Cinema::showAvaliableMovie() {
	std::cout << "\nEstas son las peliculas que tenemos disponibles:\n" << endl;
	
	for (int i = 0; i < TOTALMOVIES; i++) {
		
		if (cinemaMovies[i].getName() != "") {
			std::cout << (i + 1) << "- " << cinemaMovies[i].getName() << endl;
		}
	}
}


void Cinema::showMovieInformation(int movieNumber) {
	std::cout << "--------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "Esta es la informacion de la pelicula" << std::endl;
	std::cout << "--------------------------------------------------------------------------------------------------------------------" << std::endl;
	for (int i = movieNumber; i < movieNumber +1; i++) {

		if (cinemaMovies[i].getName() != "") {
			if (i >= 0 && movieNumber < TOTALMOVIES) {
				std::cout << "Nombre de la pelicula: " << cinemaMovies[i].getName() << std::endl;
				std::cout << "A" << char(164) << "o:" << cinemaMovies[i].getYear() << std::endl;
				std::cout << "Duracion: " << cinemaMovies[i].getTime() << " minutos" << std::endl;
				std::cout << "Pais: " << cinemaMovies[i].getCountry() << std::endl;
				std::cout << "Reviews: " << cinemaMovies[i].getReview() << "/10" << std::endl;
				std::cout << "Precio del ticket: " << char(189) << cinemaMovies[i].getTicketPrice() << std::endl;
				std::cout << "La sala asignada para esta pelicula es la numero: " << cinemaMovies[i].getRoomId() << std::endl;
				std::cout << "--------------------------------------------------------------------------------------------------------------------" << std::endl;

			}
			else {
				cout << " Opcion invalida." << endl;
			}
			system("pause");
			system("cls");

		}
	}
}
void Cinema::addMovie() {
	for (int i = 4; i < TOTALMOVIES; i++) {
		std::string name, country;
		int year, time, reviews, ticketPrice, roomId;
		std::string endHour;

		std::cout << "Ingrese el nombre de la pelicula que desea a" << char(164) << "adir." << std::endl;
		std::cin.ignore();
		std::getline(std::cin, name);
		cinemaMovies[i].setName(name);

		std::cout << "Ingrese el pais de origen de la pelicula." << std::endl;
		std::getline(std::cin, country);
		cinemaMovies[i].setCountry(country);

		std::cout << "Ingrese el a" << char(164) << "o de estreno de la pelicula." << std::endl;
		while (true) {
			std::cin >> year;
			if (year >= 1888) {
				cinemaMovies[i].setYear(year);
				break;
			}
			else {
				std::cout << "Error, el a" << char(164) << "o debe ser mayor o igual a 1888. Intente nuevamente." << std::endl;
			}
		}

		std::cout << "Ingrese el tiempo de duracion en minutos de la pelicula." << std::endl;
		while (true) {
			std::cin >> time;
			if (time >= 1 && time <= 500) {
				cinemaMovies[i].setTime(time);
				break;
			}
			else {
				std::cout << "Error, la duracion debe ser entre 1 y 500 minutos. Intente nuevamente." << std::endl;
			}
		}

		std::cout << "Ingrese las reviews que recibio la pelicula en un rango de 1 a 10." << std::endl;
		while (true) {
			std::cin >> reviews;
			if (reviews >= 1 && reviews <= 10) {
				cinemaMovies[i].setReview(reviews);
				break;
			}
			else {
				std::cout << "Error, la rese" << char(164) << "a debe ser de entre 1 y 10. Intente nuevamente." << std::endl;
			}
		}

		std::cout << "Ingrese el precio del ticket en colones." << std::endl;
		std::cin >> ticketPrice;
		cinemaMovies[i].setTicketPrice(ticketPrice);

		std::cout << "Para esta pelicula, ingrese la sala en que se proyectara" << std::endl;
		while (true) {
			std::cin >> roomId;
			if (roomId == 1 || roomId == 2) {
				cinemaMovies[i].setRoomId(roomId);
				break;
			}
			else {
				std::cout << "Error, la sala debe ser 1 o 2. Intente nuevamente." << std::endl;
			}
		}

		std::cout << "La pelicula inicia a las 2:20 pm, de acuerdo a eso ingrese solo la hora aproximada en la que termina la pelicula (ej. 4:20 pm)." << std::endl;
		std::cin.ignore();
		std::getline(std::cin, endHour);
		cinemaSchedule[i].setEndHour(endHour);
		std::cout << "Hora final guardada en cinemaSchedule[" << i << "]: " << cinemaSchedule[i].getEndHour() << std::endl;

		std::cout << "La pelicula fue guardada con exito!!" << std::endl;
	}
}



void Cinema::createdSchedule() {
	std::string movieDates[TOTALMOVIES] = { "20/11/2024", "20/11/2024", "20/11/2024", "20/11/2024", "20/11/2024"};
	std::string startMovieHour[TOTALMOVIES] = { "1:00 pm", "1:00 pm", "1:00 pm", "4:10 pm", "2:20 pm"};
	std::string endMovieHour[TOTALMOVIES] = { "4:10 pm", "2:10 pm", "3:00 pm", "7:20 pm" };

	for (int i = 0; i < TOTALMOVIES; i++) {
		cinemaSchedule[i].setDate(movieDates[i]);
		cinemaSchedule[i].setStartHour(startMovieHour[i]);
		cinemaSchedule[i].setEndHour(endMovieHour[i]);
	}
}
void Cinema::displaySchedules() {
	std::cout << "----------------------------------------------------------------------------------" << std::endl;
	std::cout << "| Sala |           Pelicula     |    Fecha de estreno   |   Inicio   |  Fin  |" << std::endl;
	std::cout << "----------------------------------------------------------------------------------" << std::endl;
	for (int i = 0; i < TOTALMOVIES; i++) {
		if (cinemaSchedule[i].getEndHour() != "") {
			std::cout << "| " << cinemaMovies[i].getRoomId() << " |    " << cinemaMovies[i].getName()
				<< "\t\t\t|\t" << cinemaSchedule[i].getDate()
				<< " \t| " << cinemaSchedule[i].getStartHour()
				<< "    | " << cinemaSchedule[i].getEndHour() << std::endl;
		}
	}
	std::cout << "----------------------------------------------------------------------------------" << std::endl;
	std::cout << std::endl;
}
void Cinema::showMovieWithRoom(int movieNumber) {
	if (movieNumber < 0 || movieNumber >= TOTALMOVIES) {
		std::cout << "Numero de pelicula invalido." << std::endl;
		return;
	}

	std::cout << "Nombre de la pelicula: " << cinemaMovies[movieNumber].getName() << std::endl;
	std::cout << "A"<<char(164)<<"o: " << cinemaMovies[movieNumber].getYear() << std::endl;
	std::cout << "Duracion: " << cinemaMovies[movieNumber].getTime() << " minutos" << std::endl;				
	std::cout << "Pais: " << cinemaMovies[movieNumber].getCountry() << std::endl;
	std::cout << "Rese"<<char(164)<<"as: " << cinemaMovies[movieNumber].getReview() << " / 10" << std::endl;
	std::cout << "Precio del ticket: " << cinemaMovies[movieNumber].getTicketPrice() << std::endl;
	std::cout << "Sala asignada: " << cinemaMovies[movieNumber].getRoomId() << std::endl;
	std::cout << "--------------------------------------------------------------------------------------------------------------------" << std::endl;

	int roomId = cinemaMovies[movieNumber].getRoomId();
	std::cout << "R = reserved" << std::endl;
	std::cout << "F = free" << std::endl;
	printRoom(roomId - 1);
}
int Cinema::getMovieRoomId(int movieNumber) {
	if (movieNumber < 0 || movieNumber >= TOTALMOVIES) {
		std::cout << "Error: Numero de pelicula invalido." << std::endl;
		return -1;
	}
	return cinemaMovies[movieNumber].getRoomId();
}

void Cinema::reserveSeats(int roomId) {
	if (roomId < 1 || roomId > TOTALROOMS) {
		std::cout << "Error: Numero de sala invalido. No se puede proceder con la reserva." << std::endl;
		return;
	}

	int seatId;
	std::cout << "Ingrese el numero del asiento que desea reservar: " << std::endl;
	std::cin >> seatId;

	if (seatId < 1 || seatId > ROWS * COLUMNS) {
		std::cout << "Error: Numero de asiento invalido. Debe ser entre 1 y " << ROWS * COLUMNS << "." << std::endl;
		return;
	}


	int row = (seatId - 1) / COLUMNS;
	int col = (seatId - 1) % COLUMNS;

	if (roomSeats[row][col] == 'F') {
		roomSeats[row][col] = 'R';
		std::cout << "Asiento " << seatId << " reservado con exito en la sala " << roomId << "." << std::endl;
	}
	else if (roomSeats[row][col] == 'R') {
		std::cout << "Error: El asiento " << seatId << " ya esta reservado o no esta disponible." << std::endl;
	}
	else {
		std::cout << "Error: Estado del asiento no reconocido." << std::endl;
	}
}
void Cinema::processPayment(std::string* cedula, int* seatId) {
	std::cout << "Por favor, elija un metodo de pago:" << std::endl;
	std::cout << "1. Tarjeta de credito" << std::endl;
	std::cout << "2. Efectivo" << std::endl;
	std::cout << "3. Transferencia bancaria" << std::endl;

	int paymentMethod;
	std::cin >> paymentMethod;

	if (paymentMethod == 1) {
		std::cout << "Pago con tarjeta de credito." << std::endl;
	}
	if (paymentMethod == 2) {
		std::cout << "Pago en efectivo. Pague en la taquilla." << std::endl;
	}
	if (paymentMethod == 3) {
		std::cout << "Pago por transferencia bancaria. Realice la transferencia." << std::endl;
	}
	if(paymentMethod != 1 && paymentMethod != 2 && paymentMethod != 3){
		std::cout << "Metodo de pago invalido." << std::endl;
		return;
	}
	int seatNumber = *seatId;

	int row = (*seatId - 1) / COLUMNS;
	int col = (*seatId - 1) % COLUMNS;

	roomSeats[row][col] = 'S';

	
}




