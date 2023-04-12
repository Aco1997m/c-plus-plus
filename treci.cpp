#include "pch.h"
#include <iostream>


using namespace std;

double maksElement(double niz[], int velNiz) {
	double max = niz[0];

	for (int i = 1; i < velNiz; i++) {
		if (niz[i] > max) {
			max = niz[i];
		}
	}

	return max;
}

bool veciNiz(double niz1[], double niz2[], int velNiz1, int velNiz2) {
	double max1 = niz1[0];
	double max2 = niz2[0];

	for (int i = 1; i < velNiz1; i++) {
		if (niz1[i] > max1) {
			max1 = niz1[i];
		}
	}

	for (int i = 1; i < velNiz2; i++) {
		if (niz2[i] > max2) {
			max2 = niz2[i];
		}
	}

	return max1 > max2;
}

void printaj(double niz[], int velNiz) {
	for (int i = 0; i < velNiz; i++) {
		cout << niz[i];
		if (i < velNiz - 1) {
			cout << ", ";
		}
	}
	cout << endl;
}

void mijenjaj(double niz[], int clan, double broj) {
	niz[clan] = broj;
}

int main() {
	int a, b, i;
	double niz1[100], niz2[100], max1, max2;
	bool veciEl;

	cout << "Unesite broj elemenata prvog niza: ";
	cin >> a;
	cout << "Unesite elemente prvog niza:  \n";

	// unos elemenata prvog niza
	for (i = 0; i < a; i++) {
		cout << i + 1 << ". element:";
		cin >> niz1[i];
	}

	cout << "Unesite broj elemenata drugog niza: ";
	cin >> b;
	cout << "Unesite elemente drugog niza:  \n";

	// unos elemenata drugog niza
	for (i = 0; i < b; i++) {
		cout << i + 1 << ". element:";
		cin >> niz2[i];
	}

	max1 = maksElement(niz1, a);
	max2 = maksElement(niz2, b);
	cout << "Maksimalan element 1. niza: " << max1 << endl;
	cout << "Maksimalan element 2. niza: " << max2 << endl;

	veciEl = veciNiz(niz1, niz2, a, b);
	cout << "Prvi element ima veci najveci element? ";
	if (veciEl) {
		cout << "Tacno" << endl;
	}
	else {
		cout << "Netacno" << endl;
	}

	printaj(niz1, a);
	printaj(niz2, b);

	mijenjaj(niz1, 0, 3.5);

	cout << "Nakon zamjene: " << endl;
	printaj(niz1, a);

	return 0;
}

