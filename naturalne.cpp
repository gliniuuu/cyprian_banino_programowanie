#include <iostream>
using namespace std;
 
void wyszukiwanieLiniowe(const int tab[], int rozmiar, int szukana, int wyniki[], int& liczbaWynikow) {
    liczbaWynikow = 0;
 
    for (int i = 0; i < rozmiar; ++i) {
        if (tab[i] == szukana) {
            wyniki[liczbaWynikow] = i;
            liczbaWynikow++;
        }
    }
}
 
int main() {
    const int rozmiar = 25;
    int tablica[rozmiar] = {2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
    int poszukiwana;
    cout << "Jaka liczbe poszukujesz: ";
    cin >> poszukiwana;
 
    int wyniki[rozmiar];
    int liczbaWynikow;
 
    wyszukiwanieLiniowe(tablica, rozmiar, poszukiwana, wyniki, liczbaWynikow);
 
    cout << "Poszukiwana liczba znajduje sie na pozycji: ";
    for (int i = 0; i < liczbaWynikow; ++i) {
        cout << wyniki[i];
        if (i < liczbaWynikow - 1) {
            cout << ", ";
        }
    }
    cout << endl;
 
    return 0;
}