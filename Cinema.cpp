#include <iostream>
#include "cinema.h"
#include "Room.h"

Cinema::Cinema() {

}
Cinema::~Cinema(){

}
void Cinema::saveMovieInformation() {
	std::string moviesName[TOTALMOVIES] = { "Spiderman", "Dr. Strange", "Hulk 2" };
	int yearMovies[TOTALMOVIES] = { 2013, 2020, 2003 };
	int timeMovies[TOTALMOVIES] = { 190, 80, 120 };
	std::string countryMovies[TOTALMOVIES] = { "Canada", "USA", "Brazil" };
	int reviewsMovies[TOTALMOVIES] = { 7, 9, 5 };

	for (int i = 0; i < TOTALMOVIES - 2; i++) {
		cinemaMovies[i].setName(moviesName[i]);
		cinemaMovies[i].setYear(yearMovies[i]);
		cinemaMovies[i].setTime(timeMovies[i]);
		cinemaMovies[i].setCountry(countryMovies[i]);
		cinemaMovies[i].setReview(reviewsMovies[i]);
		
	}
}
void Cinema::showMovieInformation() {
	std::cout << "----------------------------------------------------- " << std::endl;
	std::cout << "Estas son las peliculas que tenemos disponibles" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;

	for (int i = 0; i < TOTALMOVIES; i++) {
		if (cinemaMovies[i].getName() != "") {

			std::cout << "Nombre de la pelicula: " << cinemaMovies[i].getName() << std::endl;
			std::cout << "A"<<char(164)<<"o:" << cinemaMovies[i].getYear() << std::endl;
			std::cout << "Duracion: " << cinemaMovies[i].getTime() << " minutos" << std::endl;
			std::cout << "Pais: " << cinemaMovies[i].getCountry() << std::endl;
			std::cout << "Reviews: " << cinemaMovies[i].getReview() << "/10" << std::endl;
			std::cout << "-----------------------------" << std::endl;

		}
		
	}

}
void Cinema::addMovie() {
	int numOfMovies;
	std::cout << "Desea agregar 1 o 2 peliculas?" << std::endl;
	std::cin >> numOfMovies;

	for (int i = TOTALMOVIES - numOfMovies; i < TOTALMOVIES; i++) {
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

