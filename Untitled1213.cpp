#include <iostream>
using namespace std;
int main(){


int liczba1;
int liczba2;
char znak;

cout << "podaj pierwsza liczbe ";
cin >> liczba1;
cout << "podaj liczbe druga ";
cin >> liczba2;
cout << "co z nimi zrobic ";
cin >> znak;

switch( znak )
{
	case '+':
	cout << (liczba1 + liczba2) << endl;
	break;
	case '-':
		cout << (liczba1 - liczba2) << endl;
	break;
	
	case '*':
		cout << (liczba1 * liczba2) << endl;
	break;
	
	case '/':	
		cout << (liczba1 / liczba2) << endl;
	break;
}


}