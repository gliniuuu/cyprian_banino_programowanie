#include <iostream>
using namespace std;

int main(){
	/* inkrementacja
	i = i + 1
	i += 1
	i++
	i = i - 1
	i -= 1
	i --
	*/
	// for(wartoscpoczatkowa; warunekKonczacy; krok)
	for (int i=0; i <= 5; i++){
		cout << "wartosc i: " << i << endl; // I - ZMIENNA lokalna, dzial tylko w tej petli
	}
	
	int wysokosc, szerokosc;

	cout << "daj wysokosc";
	cin >> wysokosc;
	cout << "daj szerokosc";
	cin >> szerokosc;
	
	
	
	
	for (int i=0; i <= szerokosc; i++){
		for(int j=0; j<wysokosc; j++){
			cout << " " << i << j;
		}
		cout << endl;
	}
	
	
cout << endl;
system("pause");
} 