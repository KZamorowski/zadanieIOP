#include <iostream>

using namespace std;

int silnia(int n) {
    int wynik = 1;
    for (int i = 1; i <= n; ++i) {
        wynik *= i;
    }
    return wynik;
}

  
bool czyPierwsza(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
	cout << "1. Sprawdź, czy liczba jest pierwsza" << endl;
	cout << "2. Oblicz silnię liczby" << endl;
        cin >> wyjscie;

	if(wyjscie == 1){
		int liczba;
		cin >> liczba;
		if (czyPierwsza(liczba)){
			cout << liczba << "jest liczba pierwsza" << endl;
		}
		else{
			cout << liczba << "nie jest liczba pierwsza" << endl;
		}

	}

        if (wyjscie == 2) {
            int liczba;
            cout << "Podaj liczbe: ";
            cin >> liczba;
            cout << "Silnia liczby " << liczba << " wynosi: " << silnia(liczba) << endl;
        }
    } while(wyjscie !=0);
    return 0;
}

