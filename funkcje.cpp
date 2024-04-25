// funkcje.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//using namespace std;

//void Funkcja1(string imie, string nazwisko);


//int main()
//{
//	string imie, nazwisko;



//	cout << " podaj swoje imie ";
	//cin >> imie;
	//cout << " podaj nazwisko ";
	//cin >> nazwisko;

	//Funkcja1(imie, nazwisko);

//}


//void Funkcja1(string imie, string nazwisko) {
		
	//	cout << "czesc " << imie << " " << nazwisko;
		
	//}
	
//brutto = netto * 1.23
//netto = brutto/1.23
#include <iostream>
using namespace std;

int main()
{
    int wybor;
    float netto, brutto;
    cout << "Ktora kwote chcesz obliczyc? \n 1. Brutto \n 2. Netto" << endl;
    cin >> wybor;

    switch (wybor)
    {
    case 1:
        cout << "Podaj kwote netto: ";
        cin >> netto;
        cout << "Brutto: " << Brutto(netto) << " zl" << endl;
        break;
    case 2:
        cout << "Podaj kwote brutto: ";
        cin >> brutto;
        cout << "Netto: " << Netto(brutto) << " zl" << endl;
        break;
    }
}



