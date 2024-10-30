#include <iostream>
using namespace std;

// Funkcija, kuri atlieka FizzBuzz logiką
void fizzbuzz(int n) {
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" <<endl; // Skaičius dalijasi tiek iš 3, tiek iš 5
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl; // Skaičius dalijasi iš 3
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl; // Skaičius dalijasi iš 5
        } else {
            cout << i << endl; // Atspausdinti skaičių
        }
    }
}

int main() {
    int n;

    // Paprašome vartotojo įvesti teigiamą sveikąjį skaičių
    cout << "Įveskite teigiamą sveikąjį skaičių n: ";
    cin >> n;

    // Patikriname, ar n yra teigiamas skaičius
    if (n > 0) {
        fizzbuzz(n); // Iškviečiame FizzBuzz funkciją
    } else {
        cout << "Prašome įvesti teigiamą sveikąjį skaičių!" << endl;
    }

    return 0;
}