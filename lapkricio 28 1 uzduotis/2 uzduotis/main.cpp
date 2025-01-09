#include <iostream>
using namespace std;


double keltiLaipsniu(double skaicius, int laipsnis) {
    if (laipsnis == 0) {
        return 1;
    }

    return skaicius * keltiLaipsniu(skaicius, laipsnis - 1);
}

int main() {
    double skaicius;
    int laipsnis;


    cout << "Iveskite skaiciu: ";
    cin >> skaicius;
    cout << "Iveskite laipsni: ";
    cin >> laipsnis;

    double rezultatas = keltiLaipsniu(skaicius, laipsnis);

    cout << skaicius << " pakeltas " << laipsnis << " laipsniu yra: " << rezultatas << endl;

    return 0;
}