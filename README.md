#include <iostream>

int main() {
    int unesenbroj;

    do {
        std::cout << "Unesite jedan cetverocifreni broj: ";
        std::cin >> unesenbroj;

        if (unesenbroj < 1000 || unesenbroj > 9999) {
            std::cout << "[GRESKA] Broj nije cetverocifreni!" << std::endl;
        }
    } while (unesenbroj < 1000 || unesenbroj > 9999);

    int brojac = 0;

    for (int i = 100; i <= unesenbroj; ++i) {
        int suma = 0;
        int temp = i;
        int temp2 = i;

        while (temp > 0) {
            suma += (temp % 10);
            temp /= 10;
        }

        while (temp2 >= 10) {
            temp2 /= 10;
        }

        int prvaZnamenka = temp2;
        int poslednjaZnamenka = i % 10;

        if (suma % (prvaZnamenka + poslednjaZnamenka) == 0) {
            ++brojac;
        }
    }

    std::cout << "Takvih brojeva je: " << brojac;
}
