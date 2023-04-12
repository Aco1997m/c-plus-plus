// Zadatak 3: Plata 50%
// Program izracunava ukupnu platu za svakog zaposlenog
// ukljucujuci i prekovremeni rad koji se placa 1.5 puta vise.
// Program takodje izracunava ukupne plate za sve obradjne zaposlene.
// Program ilustruje upotrebu if naredbe.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// Deklarisanje promenljivih
	const double FAKTOR_PREKOVREMENOG_RADA = 1.5;
	const double REGULARAN_BROJ_SATI = 40.0;
	int brojac_zaposlenih,
		sledeci_zaposleni; // 1 ako postoji sledeci;
	// 0 ako ne postoji
	double radni_sati,
		satnica,
		regularna_plata,
		prekovremena_plata,
		ukupna_plata,
		sve_plate;
	// Inicijalizacija promenljivih
	sve_plate = 0.00;
	brojac_zaposlenih = 0;
	//Podesavanje izlaznog formata za ispisivanja iznosa
	cout << setprecision(2)
		<< setiosflags(ios::fixed)
		<< setiosflags(ios::showpoint);
	do // Pocetak while petlje
	{
		// Unos podataka27
		cout << endl;
		cout << "Unesite broj ostvarenih radnih sati : ";
		cin >> radni_sati;
		cout << "\nUnesite satnicu : ";
		cin >> satnica;
		// Izracunavanje plate
		if (radni_sati > REGULARAN_BROJ_SATI)
		{
			regularna_plata = REGULARAN_BROJ_SATI * satnica;
			prekovremena_plata = (radni_sati - REGULARAN_BROJ_SATI) *
				FAKTOR_PREKOVREMENOG_RADA * satnica;
		}
		else
		{
			regularna_plata = radni_sati * satnica;
			prekovremena_plata = 0.00;
		}
		ukupna_plata = regularna_plata + prekovremena_plata;
		sve_plate += ukupna_plata;
		++brojac_zaposlenih;
		// Ispisivanje plate
		cout << endl << endl;
		cout << "REGULARNO PREKOVREMENO UKUPNO";
		cout << endl << setw(9) << regularna_plata
			<< setw(16) << prekovremena_plata
			<< setw(11) << ukupna_plata << endl;
		cout << "------------------------------------" << endl;
		// Pitanje korisniku da li zeli da nastavi sa sledecim
		// zaposlenim
		cout << endl << endl;
		cout << "Da li zelita da nastavite sa sledecim zaposlenim ?"
			<< endl;
		cout << "Unesite 1 za Da ili 0 za Ne : ";
		cin >> sledeci_zaposleni;
	} while (sledeci_zaposleni); // Uslov while petlje - na kraju
	// bloka naredbi
	// Ispisivanje zbira svih plata
	cout << endl << endl;
	cout << "Ukupna plata za " << brojac_zaposlenih
		<< " zaposlenih je " << sve_plate << endl << endl;
	return 0;
}
