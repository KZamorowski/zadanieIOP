#include <iostream>

using namespace std;

// Funkcja obliczająca silnię liczby
int silnia(int n) {
    int wynik = 1;
    for (int i = 1; i <= n; ++i) {
        wynik *= i;
    }
    return wynik;
}

int main() {
    int wyjscie;
    do {
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Oblicz silnię liczby" << endl;
        cin >> wyjscie;

        if (wyjscie == 1) {
            int liczba;
            cout << "Podaj liczbe: ";
            cin >> liczba;
            cout << "Silnia liczby " << liczba << " wynosi: " << silnia(liczba) << endl;
        }
    } while (wyjscie != 0);
    return 0;
}

