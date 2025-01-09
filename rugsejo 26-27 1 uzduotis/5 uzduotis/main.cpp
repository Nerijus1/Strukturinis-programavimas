#include <iostream>
using namespace std;

void Skaiciupalyginimas() {
    int a;
    int b;
    cout << "iveskite pirma skaiciu:\n";
    cin >>a;
    cout << "iveskite antra skaiciu:\n";
    cin >>b;

    if (a > b) {
        cout << "Pirmas skaicius " << a << " yra didesnis uz antra " << b << "." << endl;
    } else if (a < b) {
        cout << " Antras skaicius " << b << " yra didesnis uz pirma " << a << "." << endl;
    } else {
        cout << "Skaičiai yra lygūs (" << a << " == " << b << ")." << endl;
    }
}

int main() {

 Skaiciupalyginimas();
    return 0;
}