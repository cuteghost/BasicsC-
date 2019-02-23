#include<iostream>
#include<iomanip>
#include <cstdlib>
using namespace std;

bool uplati(int&);
bool isplati(int &);
//Korisnik takoðer ne smije dodati novi pin u kojem su 2 nove
//cifre na istim mjestima iste kao i u prethodnom pinu.
bool ispravanPin(int stariPin, int noviPin);
void menu();
int promijeniPin(int);
bool prijava(int);

int main()
{
	int pin = 1111, stanje = 0, izbor, noviPin;
	bool prijavljen = false;
	do
	{
		if (prijavljen)
		{
			menu();
			cout << "Unos: ";
			cin >> izbor;
			switch (izbor)
			{
			case 1:
				system("cls");
				if (uplati(stanje) == true)
					cout << "Uspjesno ste uplatili novac\n";
				else
					cout << "Neispravan unos.\n";
				break;
			case 2:
				system("cls");
				if (isplati(stanje) == true)
					cout << "Uspjesno ste isplatili novac\n";
				else
					cout << "Neispravan unos.\n";
				break;
			case 3:
				system("cls");
				noviPin = promijeniPin(pin);
				if (noviPin == pin)
					cout << "Neuspjesna izmjena pina.\n";
				else
				{
					cout << "Uspjesno ste izmijenili stari pin.\n";
					pin = noviPin;
				}
				break;
			case 4:
				system("cls");
				cout << "=======================================\n"
					<< "Stanje: " << stanje << endl
					<< "=======================================\n";
				break;
			case 5:
				prijavljen = false;
				break;
			case 556655:
				system("cls");
				cout << "Shuting down...." << endl;
				break;
			default:
				cout << "Niste izabrali opciju.\n";
				break;
			}
		}
		else
		{
			system("cls");
			cout << "===================AMELA VOLIIIM TEEEE====================\n";
			prijavljen = prijava(pin);
		}
	} while (izbor != 556655);
}

void menu()
{
	cout << "+=============MENU=============+\n"
		<< "|      " << "1. Uplata"<<setw(17)<<"|\n"
		<< "|      " << "2. Isplata" << setw(16) << "|\n"
		<< "|      " << "3. Promijeni pin" << setw(10) << "|\n"
		<< "|      " << "4. Stanje na racunu" << setw(7) << "|\n"
		<< "|      " << "5. Odjava" << setw(17) << "|\n"
		<< "+==============================+\n";
}
bool isplati(int & stanje)
{
	int isplata;
	cout << "Unesite novac za isplatu: ";
	cin >> isplata;
	if (isplata > 0 && isplata <= stanje && isplata % 10 == 0)
	{
		stanje -= isplata;
		return true;
	}
	else
		return false;
}
bool uplati(int & stanje)
{
	int uplata;
	cout << "Unesite novac za uplatu: ";
	cin >> uplata;
	if (uplata > 0 && uplata <= 1000 && uplata % 10 == 0)
	{
		stanje += uplata;
		return true;
	}
	else
		return false;
}
bool ispravanPin(int stariPin, int noviPin)
{
	int brojac = 0;
	while (stariPin!=0)
	{
		if (stariPin % 10 == noviPin % 10)
			brojac++;
		stariPin /= 10;
		noviPin /= 10;
	}
	if (brojac < 2)
		return true;
	else
		return false;
}
int promijeniPin(int stariPin)
{
	int ponoviStariPin, noviPin;
	cout << "Uensite stari pin: ";
	cin >> ponoviStariPin;
	if (stariPin == ponoviStariPin)
	{
		cout << "Unesite novi pin: ";
		cin >> noviPin;
		bool ispravno = ispravanPin(stariPin, noviPin);
		if (noviPin >= 1000 && noviPin < 10000 && ispravno==true)
			return noviPin;
	}
	return stariPin;
}
bool prijava(int stariPin)
{
	int brojacPogreski = 0, noviPin;
	do
	{
		cout << "Unesite pin: ";
		cin >> noviPin;
		if (noviPin != stariPin)
			brojacPogreski++;
		else
			break;
	} while (brojacPogreski<3);

	if (brojacPogreski < 3)
		return true;
	return false;
}
