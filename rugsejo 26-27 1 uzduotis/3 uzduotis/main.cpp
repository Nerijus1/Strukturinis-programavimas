#include <iostream>
#include <cstdlib>  // norint naudoti rand()
#include <ctime>    // norint naudoti time() funkciją

using namespace std;

// atsitiktinio skaiciaus generatorius
void isvestiAtsitiktiniSkiciu() {
    int atsitiktinis = rand() % 100 + 1;
    cout << "Atsitiktinis skaicius: " << atsitiktinis << endl;
}

int main() {
    // nustatoma sekla
    srand(time(0));

    // Ciklas kuris vykdomas 10 kartu
    for (int i = 0; i < 10; i++) {
        isvestiAtsitiktiniSkiciu();
    }

    return 0;
}
