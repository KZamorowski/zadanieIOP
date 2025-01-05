#include <iostream>

using namespace std;

int silnia(int n) {
    int wynik = 1;
    for (int i = 1; i <= n; ++i) {
        wynik *= i;
    }
    return wynik;
}

int main(){
	int n = 5;
	int wynik = silnia(n);
	cout << wynik << endl;
	return 0;

}
