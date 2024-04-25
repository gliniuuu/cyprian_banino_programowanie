#include <iostream>
using namespace std;
struct ksiazki
{
    string tytul;
    string autor;
    float rok_wydania;
    string wydawnictwo;
    float cena;
};
int main(){
 

    ksiazki jeden =
    {
        "tytul1",
        "autor1",
        1925,
        "helion1",
        23.54
    };
     ksiazki dwa =
    {
        "tytul2",
        "autor2",
        1926,
        "helion2",
        24.54
    };
     ksiazki trzy =
    {
        "tytul3",
        "autor1",
        1927,
        "helion3",
        25.54
    };
     ksiazki cztery =
    {
        "tytul4",
        "autor2",
        1928,
        "helion1",
        26.54
    };
     ksiazki piec =
    {
        "tytul5",
        "autor1",
        1929,
        "helion2",
        27.54
    };
     ksiazki szesc =
    {
        "tytul6",
        "autor2",
        1930,
        "helion3",
        28.54
    };
     ksiazki siedem =
    {
        "tytul7",
        "autor1",
        1931,
        "helion1",
        29.54
    };
	int wybor;
		cout << "Po czym filtorwac ksiazki? " << endl;
		cout << "1. rok wydania" << endl;
		cout << "2. wydawnictwo" << endl;
		cout << "3. cena" << endl;
		cout << "0. wyjscie" << endl;
		cin >> wybor;
 
		 if(wybor == 1){
		 	cout << "filtrujesz po roku wydania";
		int rok;
		    cout << "od ktorego roku maja byc ksiazki" << endl;
		    cout << "mamy ksiazki od 1925 do 1931 roku" << endl;
		    cin >> rok;
		if(rok == 1925) { 
		    		 		    cout << "Oto lista ksiazek, ktore moga cie zainteresowac: " << endl
 
		    << endl << "tytul " << jeden.tytul
<< endl << "autor " << jeden.autor
<< endl << "rok wydania " << jeden.rok_wydania
<< endl << "wydawnictwo " << jeden.wydawnictwo
<< endl << "cena "<< jeden.cena << " zl"
<< endl
<< endl << "tytul " << dwa.tytul
<< endl << "autor " << dwa.autor
<< endl << "rok wydania " << dwa.rok_wydania
<< endl << "wydawnictwo " << dwa.wydawnictwo
<< endl << "cena "<< dwa.cena << " zl"
<< endl
<< endl << "tytul " << trzy.tytul
<< endl << "autor " << trzy.autor
<< endl << "rok wydania " << trzy.rok_wydania
<< endl << "wydawnictwo " << trzy.wydawnictwo
<< endl << "cena "<< trzy.cena << " zl"
<< endl
<< endl << "tytul " << cztery.tytul
<< endl << "autor " << cztery.autor
<< endl << "rok wydania " << cztery.rok_wydania
<< endl << "wydawnictwo " << cztery.wydawnictwo
<< endl << "cena "<< cztery.cena << " zl"
<< endl
<< endl << "tytul " << piec.tytul
<< endl << "autor " << piec.autor
<< endl << "rok wydania " << piec.rok_wydania
<< endl << "wydawnictwo " << piec.wydawnictwo
<< endl << "cena "<< piec.cena << " zl"
<< endl 
<< endl << "tytul " << szesc.tytul
<< endl << "autor " << szesc.autor
<< endl << "rok wydania " << szesc.rok_wydania
<< endl << "wydawnictwo " << szesc.wydawnictwo
<< endl << "cena "<< szesc.cena << " zl"
<< endl 
<< endl << "tytul " << siedem.tytul
<< endl << "autor " << siedem.autor
<< endl << "rok wydania " << siedem.rok_wydania
<< endl << "wydawnictwo " << siedem.wydawnictwo
<< endl << "cena "<< siedem.cena << " zl";
		}
		else if(rok == 1926){
		     cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << dwa.tytul
<< endl << "autor " << dwa.autor
<< endl << "rok wydania " << dwa.rok_wydania
<< endl << "wydawnictwo " << dwa.wydawnictwo
<< endl << "cena "<< dwa.cena << " zl"
<< endl
<< endl << "tytul " << trzy.tytul
<< endl << "autor " << trzy.autor
<< endl << "rok wydania " << trzy.rok_wydania
<< endl << "wydawnictwo " << trzy.wydawnictwo
<< endl << "cena "<< trzy.cena << " zl"
<< endl
<< endl << "tytul " << cztery.tytul
<< endl << "autor " << cztery.autor
<< endl << "rok wydania " << cztery.rok_wydania
<< endl << "wydawnictwo " << cztery.wydawnictwo
<< endl << "cena "<< cztery.cena << " zl"
<< endl
<< endl << "tytul " << piec.tytul
<< endl << "autor " << piec.autor
<< endl << "rok wydania " << piec.rok_wydania
<< endl << "wydawnictwo " << piec.wydawnictwo
<< endl << "cena "<< piec.cena << " zl"
<< endl 
<< endl << "tytul " << szesc.tytul
<< endl << "autor " << szesc.autor
<< endl << "rok wydania " << szesc.rok_wydania
<< endl << "wydawnictwo " << szesc.wydawnictwo
<< endl << "cena "<< szesc.cena << " zl"
<< endl 
<< endl << "tytul " << siedem.tytul
<< endl << "autor " << siedem.autor
<< endl << "rok wydania " << siedem.rok_wydania
<< endl << "wydawnictwo " << siedem.wydawnictwo
<< endl << "cena "<< siedem.cena << " zl";    
		}
		else if (rok == 1927){
		    cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << trzy.tytul
<< endl << "autor " << trzy.autor
<< endl << "rok wydania " << trzy.rok_wydania
<< endl << "wydawnictwo " << trzy.wydawnictwo
<< endl << "cena "<< trzy.cena << " zl"
<< endl
<< endl << "tytul " << cztery.tytul
<< endl << "autor " << cztery.autor
<< endl << "rok wydania " << cztery.rok_wydania
<< endl << "wydawnictwo " << cztery.wydawnictwo
<< endl << "cena "<< cztery.cena << " zl"
<< endl
<< endl << "tytul " << piec.tytul
<< endl << "autor " << piec.autor
<< endl << "rok wydania " << piec.rok_wydania
<< endl << "wydawnictwo " << piec.wydawnictwo
<< endl << "cena "<< piec.cena << " zl"
<< endl 
<< endl << "tytul " << szesc.tytul
<< endl << "autor " << szesc.autor
<< endl << "rok wydania " << szesc.rok_wydania
<< endl << "wydawnictwo " << szesc.wydawnictwo
<< endl << "cena "<< szesc.cena << " zl"
<< endl 
<< endl << "tytul " << siedem.tytul
<< endl << "autor " << siedem.autor
<< endl << "rok wydania " << siedem.rok_wydania
<< endl << "wydawnictwo " << siedem.wydawnictwo
<< endl << "cena "<< siedem.cena << " zl";    
		}
		else if (rok == 1928) {
		    cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << cztery.tytul
<< endl << "autor " << cztery.autor
<< endl << "rok wydania " << cztery.rok_wydania
<< endl << "wydawnictwo " << cztery.wydawnictwo
<< endl << "cena "<< cztery.cena << " zl"
<< endl
<< endl << "tytul " << piec.tytul
<< endl << "autor " << piec.autor
<< endl << "rok wydania " << piec.rok_wydania
<< endl << "wydawnictwo " << piec.wydawnictwo
<< endl << "cena "<< piec.cena << " zl"
<< endl 
<< endl << "tytul " << szesc.tytul
<< endl << "autor " << szesc.autor
<< endl << "rok wydania " << szesc.rok_wydania
<< endl << "wydawnictwo " << szesc.wydawnictwo
<< endl << "cena "<< szesc.cena << " zl"
<< endl 
<< endl << "tytul " << siedem.tytul
<< endl << "autor " << siedem.autor
<< endl << "rok wydania " << siedem.rok_wydania
<< endl << "wydawnictwo " << siedem.wydawnictwo
<< endl << "cena "<< siedem.cena << " zl";    

		}
		else if(rok == 1929){
		    cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << piec.tytul
<< endl << "autor " << piec.autor
<< endl << "rok wydania " << piec.rok_wydania
<< endl << "wydawnictwo " << piec.wydawnictwo
<< endl << "cena "<< piec.cena << " zl"
<< endl 
<< endl << "tytul " << szesc.tytul
<< endl << "autor " << szesc.autor
<< endl << "rok wydania " << szesc.rok_wydania
<< endl << "wydawnictwo " << szesc.wydawnictwo
<< endl << "cena "<< szesc.cena << " zl"
<< endl 
<< endl << "tytul " << siedem.tytul
<< endl << "autor " << siedem.autor
<< endl << "rok wydania " << siedem.rok_wydania
<< endl << "wydawnictwo " << siedem.wydawnictwo
<< endl << "cena "<< siedem.cena << " zl";    
		}
		else if (rok == 1930){
		    cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << szesc.tytul
<< endl << "autor " << szesc.autor
<< endl << "rok wydania " << szesc.rok_wydania
<< endl << "wydawnictwo " << szesc.wydawnictwo
<< endl << "cena "<< szesc.cena << " zl"
<< endl 
<< endl << "tytul " << siedem.tytul
<< endl << "autor " << siedem.autor
<< endl << "rok wydania " << siedem.rok_wydania
<< endl << "wydawnictwo " << siedem.wydawnictwo
<< endl << "cena "<< siedem.cena << " zl";    
		}
		else if(rok == 1931){
		    cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << siedem.tytul
<< endl << "autor " << siedem.autor
<< endl << "rok wydania " << siedem.rok_wydania
<< endl << "wydawnictwo " << siedem.wydawnictwo
<< endl << "cena "<< siedem.cena << " zl";    
		}
		 }
		 else if(wybor == 2) {
		 	cout << "filtrujesz po wydawnictwie" << endl;
		 	int wydawnictwo;
		 	cout << "ktore chcesz wydawnictwo?" << endl;
		 	cout << "1. helios1" << endl;
		 	cout << "2. helios2" << endl;
		 	cout << "3. helios3" << endl;
		 	cin >> wydawnictwo;
		 	if(wydawnictwo == 1) {
		 		    cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << jeden.tytul
<< endl << "autor " << jeden.autor
<< endl << "rok wydania " << jeden.rok_wydania
<< endl << "wydawnictwo " << jeden.wydawnictwo
<< endl << "cena "<< jeden.cena << " zl"
<< endl
<< endl << "tytul " << cztery.tytul
<< endl << "autor " << cztery.autor
<< endl << "rok wydania " << cztery.rok_wydania
<< endl << "wydawnictwo " << cztery.wydawnictwo
<< endl << "cena "<< cztery.cena << " zl"
<< endl
<< endl << "tytul " << siedem.tytul
<< endl << "autor " << siedem.autor
<< endl << "rok wydania " << siedem.rok_wydania
<< endl << "wydawnictwo " << siedem.wydawnictwo
<< endl << "cena "<< siedem.cena << " zl";
			 }
			 else if (wydawnictwo == 2) {
			 	  cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << dwa.tytul
<< endl << "autor " << dwa.autor
<< endl << "rok wydania " << dwa.rok_wydania
<< endl << "wydawnictwo " << dwa.wydawnictwo
<< endl << "cena "<< dwa.cena << " zl"
<< endl
<< endl << "tytul " << piec.tytul
<< endl << "autor " << piec.autor
<< endl << "rok wydania " << piec.rok_wydania
<< endl << "wydawnictwo " << piec.wydawnictwo
<< endl << "cena "<< piec.cena << " zl";
			 }
			 else if(wydawnictwo == 3){
			 	  cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << trzy.tytul
<< endl << "autor " << trzy.autor
<< endl << "rok wydania " << trzy.rok_wydania
<< endl << "wydawnictwo " << trzy.wydawnictwo
<< endl << "cena "<< trzy.cena << " zl"
<< endl
<< endl << "tytul " << szesc.tytul
<< endl << "autor " << szesc.autor
<< endl << "rok wydania " << szesc.rok_wydania
<< endl << "wydawnictwo " << szesc.wydawnictwo
<< endl << "cena "<< szesc.cena << " zl";
			 }
		 }
		 else if(wybor == 3){
		 cout << "filtrujesz po cenie" << endl;
		 cout <<  "wybierz swoj budzet od 24 do 30zl *pisz pelne liczby bez nominalow* " << endl;
		 int budzet;
		 cin >> budzet;
		 if(budzet == 24){    
		       cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << jeden.tytul
<< endl << "autor " << jeden.autor
<< endl << "rok wydania " << jeden.rok_wydania
<< endl << "wydawnictwo " << jeden.wydawnictwo
<< endl << "cena "<< jeden.cena << " zl";
 
		 }
		 else if(budzet == 25)  {
		   cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << jeden.tytul
<< endl << "autor " << jeden.autor
<< endl << "rok wydania " << jeden.rok_wydania
<< endl << "wydawnictwo " << jeden.wydawnictwo
<< endl << "cena "<< jeden.cena << " zl"
<< endl
<< endl << "tytul " << dwa.tytul
<< endl << "autor " << dwa.autor
<< endl << "rok wydania " << dwa.rok_wydania
<< endl << "wydawnictwo " << dwa.wydawnictwo
<< endl << "cena "<< dwa.cena << " zl";
}
    else if(budzet == 26){
          cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << jeden.tytul
<< endl << "autor " << jeden.autor
<< endl << "rok wydania " << jeden.rok_wydania
<< endl << "wydawnictwo " << jeden.wydawnictwo
<< endl << "cena "<< jeden.cena << " zl"
<< endl
<< endl << "tytul " << dwa.tytul
<< endl << "autor " << dwa.autor
<< endl << "rok wydania " << dwa.rok_wydania
<< endl << "wydawnictwo " << dwa.wydawnictwo
<< endl << "cena "<< dwa.cena << " zl"
<< endl
<< endl << "tytul " << trzy.tytul
<< endl << "autor " << trzy.autor
<< endl << "rok wydania " << trzy.rok_wydania
<< endl << "wydawnictwo " << trzy.wydawnictwo
<< endl << "cena "<< trzy.cena << " zl";
    }
    else if(budzet == 27){
      cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << jeden.tytul
<< endl << "autor " << jeden.autor
<< endl << "rok wydania " << jeden.rok_wydania
<< endl << "wydawnictwo " << jeden.wydawnictwo
<< endl << "cena "<< jeden.cena << " zl"
<< endl
<< endl << "tytul " << dwa.tytul
<< endl << "autor " << dwa.autor
<< endl << "rok wydania " << dwa.rok_wydania
<< endl << "wydawnictwo " << dwa.wydawnictwo
<< endl << "cena "<< dwa.cena << " zl"
<< endl
<< endl << "tytul " << trzy.tytul
<< endl << "autor " << trzy.autor
<< endl << "rok wydania " << trzy.rok_wydania
<< endl << "wydawnictwo " << trzy.wydawnictwo
<< endl << "cena "<< trzy.cena << " zl"
<< endl
<< endl << "tytul " << cztery.tytul
<< endl << "autor " << cztery.autor
<< endl << "rok wydania " << cztery.rok_wydania
<< endl << "wydawnictwo " << cztery.wydawnictwo
<< endl << "cena "<< cztery.cena << " zl";
}
else if(budzet == 28){
      cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << jeden.tytul
<< endl << "autor " << jeden.autor
<< endl << "rok wydania " << jeden.rok_wydania
<< endl << "wydawnictwo " << jeden.wydawnictwo
<< endl << "cena "<< jeden.cena << " zl"
<< endl
<< endl << "tytul " << dwa.tytul
<< endl << "autor " << dwa.autor
<< endl << "rok wydania " << dwa.rok_wydania
<< endl << "wydawnictwo " << dwa.wydawnictwo
<< endl << "cena "<< dwa.cena << " zl"
<< endl
<< endl << "tytul " << trzy.tytul
<< endl << "autor " << trzy.autor
<< endl << "rok wydania " << trzy.rok_wydania
<< endl << "wydawnictwo " << trzy.wydawnictwo
<< endl << "cena "<< trzy.cena << " zl"
<< endl
<< endl << "tytul " << cztery.tytul
<< endl << "autor " << cztery.autor
<< endl << "rok wydania " << cztery.rok_wydania
<< endl << "wydawnictwo " << cztery.wydawnictwo
<< endl << "cena "<< cztery.cena << " zl"
<< endl
<< endl << "tytul " << piec.tytul
<< endl << "autor " << piec.autor
<< endl << "rok wydania " << piec.rok_wydania
<< endl << "wydawnictwo " << piec.wydawnictwo
<< endl << "cena "<< piec.cena << " zl";
 
    
}
else if(budzet == 29){
      cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << jeden.tytul
<< endl << "autor " << jeden.autor
<< endl << "rok wydania " << jeden.rok_wydania
<< endl << "wydawnictwo " << jeden.wydawnictwo
<< endl << "cena "<< jeden.cena << " zl"
<< endl
<< endl << "tytul " << dwa.tytul
<< endl << "autor " << dwa.autor
<< endl << "rok wydania " << dwa.rok_wydania
<< endl << "wydawnictwo " << dwa.wydawnictwo
<< endl << "cena "<< dwa.cena << " zl"
<< endl
<< endl << "tytul " << trzy.tytul
<< endl << "autor " << trzy.autor
<< endl << "rok wydania " << trzy.rok_wydania
<< endl << "wydawnictwo " << trzy.wydawnictwo
<< endl << "cena "<< trzy.cena << " zl"
<< endl
<< endl << "tytul " << cztery.tytul
<< endl << "autor " << cztery.autor
<< endl << "rok wydania " << cztery.rok_wydania
<< endl << "wydawnictwo " << cztery.wydawnictwo
<< endl << "cena "<< cztery.cena << " zl"
<< endl
<< endl << "tytul " << piec.tytul
<< endl << "autor " << piec.autor
<< endl << "rok wydania " << piec.rok_wydania
<< endl << "wydawnictwo " << piec.wydawnictwo
<< endl << "cena "<< piec.cena << " zl"
<< endl 
<< endl << "tytul " << szesc.tytul
<< endl << "autor " << szesc.autor
<< endl << "rok wydania " << szesc.rok_wydania
<< endl << "wydawnictwo " << szesc.wydawnictwo
<< endl << "cena "<< szesc.cena << " zl";
}
else if(budzet == 30){
      cout << "Oto lista ksiazek, ktore moga cie zainteresowac " << endl
<< endl << "tytul " << jeden.tytul
<< endl << "autor " << jeden.autor
<< endl << "rok wydania " << jeden.rok_wydania
<< endl << "wydawnictwo " << jeden.wydawnictwo
<< endl << "cena "<< jeden.cena << " zl"
<< endl
<< endl << "tytul " << dwa.tytul
<< endl << "autor " << dwa.autor
<< endl << "rok wydania " << dwa.rok_wydania
<< endl << "wydawnictwo " << dwa.wydawnictwo
<< endl << "cena "<< dwa.cena << " zl"
<< endl
<< endl << "tytul " << trzy.tytul
<< endl << "autor " << trzy.autor
<< endl << "rok wydania " << trzy.rok_wydania
<< endl << "wydawnictwo " << trzy.wydawnictwo
<< endl << "cena "<< trzy.cena << " zl"
<< endl
<< endl << "tytul " << cztery.tytul
<< endl << "autor " << cztery.autor
<< endl << "rok wydania " << cztery.rok_wydania
<< endl << "wydawnictwo " << cztery.wydawnictwo
<< endl << "cena "<< cztery.cena << " zl"
<< endl
<< endl << "tytul " << piec.tytul
<< endl << "autor " << piec.autor
<< endl << "rok wydania " << piec.rok_wydania
<< endl << "wydawnictwo " << piec.wydawnictwo
<< endl << "cena "<< piec.cena << " zl"
<< endl 
<< endl << "tytul " << szesc.tytul
<< endl << "autor " << szesc.autor
<< endl << "rok wydania " << szesc.rok_wydania
<< endl << "wydawnictwo " << szesc.wydawnictwo
<< endl << "cena "<< szesc.cena << " zl"
<< endl 
<< endl << "tytul " << siedem.tytul
<< endl << "autor " << siedem.autor
<< endl << "rok wydania " << siedem.rok_wydania
<< endl << "wydawnictwo " << siedem.wydawnictwo
<< endl << "cena "<< siedem.cena << " zl";
}
else if(wybor = 0){
    exit;
}
 
 
    return( 0 );
		 }
		 }