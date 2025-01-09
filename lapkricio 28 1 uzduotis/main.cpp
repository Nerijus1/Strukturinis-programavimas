#include <iostream>
using namespace std;

void atspausdintiAtvirksciai(int n) {
    if (n == 0) {
        return;
    }

    cout << n % 10;
    atspausdintiAtvirksciai(n / 10);
}

int main() {
    int skaicius;

    cout << "iveskite skaiciu: ";
    cin >> skaicius;

    cout << "Skaicius atvirksciai: ";
    atspausdintiAtvirksciai(skaicius);
    cout << endl;

    return 0;
}