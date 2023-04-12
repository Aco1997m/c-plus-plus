#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	const int mjeseci = 6;
	const int trgovine = 5;
	double promet[mjeseci][trgovine] = {
		{70000, 65000, 90000, 67000, 72000},
		{63000, 69000, 84000, 73000, 88000},
		{96000, 86000, 91000, 95000, 80000},
		{105000, 77000, 102000, 94000, 108000},
		{91000, 95000, 81000, 86000, 98000},
		{84000, 68000, 78000, 69000, 76000}
	};

	double mjesecni_promet[trgovine] = {};
	for (int i = 0; i < trgovine; i++) {
		double ukupno = 0;
		for (int j = 0; j < mjeseci; j++) {
			ukupno += promet[j][i];
		}
		mjesecni_promet[i] = ukupno / mjeseci;
	}

	for (int i = 0; i < mjeseci; i++) {
		cout << "Trgovine s prometom vecim od prosjecnog mjesecnog prometa u mjesecu " << i + 1 << ": ";
		for (int j = 0; j < trgovine; j++) {
			if (promet[i][j] > mjesecni_promet[j]) {
				cout << j + 1 << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
