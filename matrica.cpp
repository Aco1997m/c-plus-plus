#include "pch.h"
#include <iostream>
#include <fstream>
#include <vector>

std::vector<std::vector<double>> unosMatr(const std::string& imeDatoteke) {
	std::ifstream datoteka(imeDatoteke); 

	if (!datoteka) {
		std::cout << "Neuspjelo otvaranje datoteke." << std::endl;
		return {};  
	}

	int dimenzija;
	datoteka >> dimenzija; 

	std::cout << dimenzija;
	std::vector<std::vector<double>> matrica(dimenzija, std::vector<double>(dimenzija));

	for (int i = 0; i < dimenzija; i++) {
		for (int j = 0; j < dimenzija; j++) {
			char znak;
			datoteka >> znak;  
			std::cout << znak;

			if (znak != '{') {
				std::cout << "Neispravan format matrice." << std::endl;
				return {};  
			}

			datoteka >> matrica[i][j];  

			datoteka >> znak;  

			if (znak == '}') {
				break;  
			}
			else if (znak != ',') {
				std::cout << "Neispravan format matrice." << std::endl;
				return {};  
			}
		}
	}

	return matrica;  
}

int main() {
	std::vector<std::vector<double>> matrica = unosMatr("matrica.txt");


	for (const auto& red : matrica) {
		for (const auto& element : red) {
			std::cout << element << " ";
		}
		std::cout << std::endl;
	}

	return 0;
