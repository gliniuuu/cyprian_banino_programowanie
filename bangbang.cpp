#include <iostream>
 
using namespace std;
 
 
void xpp(int n) {
    int k = 2;
 
    cout << "Czynniki pierwsze liczby " << n << ": ";
 
    while (n > 1) {
        if (n % k == 0) { 
            cout << k << " ";
            n /= k; 
        }
    else{
        k++;
    }
    }
}
 
int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
 
    xpp(liczba);
 
    cout << endl;
 
    return 0;
}