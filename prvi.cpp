#include "pch.h"
#include <iostream>
#include <algorithm>

int main() {
	int broj_komada;
	double potrebna_sirina, zeljena_duzina;
	double traka = 0.0;
	int koristeni_komadi = 0; 

	std::cout << "Unesite broj komada platna: ";
	std::cin >> broj_komada;

	std::cout << "Unesite potrebnu širinu trake (u cm): ";
	std::cin >> potrebna_sirina;

	std::cout << "Unesite željenu dužinu trake (u cm): ";
	std::cin >> zeljena_duzina;

	for (int i = 1; i <= broj_komada; ++i) {
		double duzina, sirina;
		std::cout << "Unesite dimenzije platna " << i << " (dužina i širina, u cm): ";
		std::cin >> duzina >> sirina;

		if (traka >= zeljena_duzina) {
			break; 
		}

		if (sirina >= potrebna_sirina) {
			double preostala_duzina = zeljena_duzina - traka;
			double iskoristiva_duzina = (duzina < preostala_duzina) ? duzina : preostala_duzina;
			traka += iskoristiva_duzina;
			koristeni_komadi++;
		}
	}

	std::cout << "Dužina napravljene trake je: " << std::fixed << traka << " cm" << std::endl;

	return 0;
}
