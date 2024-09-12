#include <iostream>
#include "cinema.h"
#include "Room.h"
#include <string>

Cinema::Cinema() {

}
Cinema::~Cinema(){

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
		int year, time, reviews,ticketPrice, roomId;
		std::string opcion;

		std::cout << "Ingrese el nombre de la pelicula que desea a" << char(164) << "adir." << std::endl;
		std::cin.ignore();
		std::getline(std::cin, name);
		
		cinemaMovies[i].setName(name);
		
		std::cout << "Ingrese el pais de origen de la pelicula." << std::endl;
		std::getline(std::cin, country);

		cinemaMovies[i].setCountry(country);

		std::cout << "Ingrese el a" << char(164) << "o de estreno de la pelicula." << std::endl;
		//1888 fue el año en que se estreno la primera pelicula
		while (true) {
			std::cin >> year;
			if (year >= 1888) {
				cinemaMovies[i].setYear(year);
				break;
			}
			else {
				std::cout << "Error, el a"<<char(164)<<"o debe ser mayor o igual a " << 1888 << ".Intente nuevamente." << std::endl;
			}
		}

		cinemaMovies[i].setYear(year);

		std::cout << "Ingrese el tiempo de duracion en minutos de la pelicula." << std::endl;
		//siendo 1 minuto el tiempo minimo de duracion de una pelicula y 500 minutos el tiempo maximo 
		while (true) {
			std::cin >> time;
			if (time >= 1 && time <= 500) {
				cinemaMovies[i].setTime(time);
				break;
			}
			else {
				std::cout << "Error, la duración debe ser entre " << 1 << " y " << 500 << " minutos. Intente nuevamente." << std::endl;
			}
		}

		cinemaMovies[i].setTime(time);

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
		

		std::cout << "Ingrese el del ticket en colones" << std::endl;
		std::cin >> ticketPrice;

		cinemaMovies[i].setTicketPrice(ticketPrice);

		std::cout << "Ingrese la sala en la que va a asignar la pelicula" << std::endl;
		while (true) {
			std::cin >> roomId;
			if (roomId >= 1 && roomId < 4) { 
				cinemaMovies[i].setRoomId(roomId);
				break;
			}
			else {
				std::cout << "Error, la sala debe ser un número positivo entre 1 y 3. Intente nuevamente." << std::endl;
			}
		}


		cinemaMovies[i].setRoomId(roomId);
		std::cout << "La pelicula fue guardada con exito!!" << std::endl;
	}
}
void Cinema::createdSchedule() {
	std::string movieDates[TOTALMOVIES] = { "20/11/2024", "20/11/2024", "20/11/2024", "20/11/2024" };
	std::string startMovieHour[TOTALMOVIES] = { "1:00 pm", "1:00 pm", "1:00 pm", "1:00 pm" };
	std::string endMovieHour[TOTALMOVIES] = { "4:10 pm", "2:10 pm", "3:00 pm", "3:40 pm" };

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
		std::cout << "| " << cinemaMovies[i].getRoomId() << " |    " << cinemaMovies[i].getName() << "\t\t\t|\t" << cinemaSchedule[i].getDate() << " \t| " << cinemaSchedule[i].getStartHour() << "    | " << cinemaSchedule[i].getEndHour() << std::endl;
		
	}
	std::cout << "----------------------------------------------------------------------------------" << std::endl;
	std::cout << std::endl;



}

