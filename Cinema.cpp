#include <iostream>
#include "cinema.h"
#include "Room.h"

Cinema::Cinema() {

}
Cinema::~Cinema(){

}
void Cinema::saveMovieInformation() {
	std::string moviesName[TOTALMOVIES] = { "Spiderman", "Dr. Strange", "Hulk 2", "It"};
	int yearMovies[TOTALMOVIES] = { 2013, 2020, 2003,1990 };
	int timeMovies[TOTALMOVIES] = { 190, 80, 120, 160};
	std::string countryMovies[TOTALMOVIES] = { "Canada", "USA", "Brazil", "Irlanda"};
	int reviewsMovies[TOTALMOVIES] = { 7, 9, 5, 10};

	for (int i = 0; i < TOTALMOVIES; i++) {
		
			cinemaMovies[i].setName(moviesName[i]);
			cinemaMovies[i].setYear(yearMovies[i]);
			cinemaMovies[i].setTime(timeMovies[i]);
			cinemaMovies[i].setCountry(countryMovies[i]);
			cinemaMovies[i].setReview(reviewsMovies[i]);
		
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
		int year, time, reviews;
		std::string opcion;

		std::cout << "Ingrese el nombre de la pelicula que desea a" << char(164) << "adir." << std::endl;
		std::cin >> name;
		
		cinemaMovies[i].setName(name);
		
		std::cout << "Ingrese el pais de origen de la pelicula." << std::endl;
		std::cin >> country;

		cinemaMovies[i].setCountry(country);

		std::cout << "Ingrese el año de estreno de la pelicula." << std::endl;
		std::cin >> year;

		cinemaMovies[i].setYear(year);

		std::cout << "Ingrese el tiempo de duracion en minutos de la pelicula." << std::endl;
		std::cin >> time;

		cinemaMovies[i].setTime(time);

		std::cout << "Ingrese las reviews que recibio la pelicula en un rango de 1 a 10." << std::endl;
		std::cin >> reviews;

		cinemaMovies[i].setReview(reviews);
	}
}


