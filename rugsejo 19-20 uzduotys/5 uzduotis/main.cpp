#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    for (int skaicius = 1; skaicius <= 20; skaicius += 2) {
        suma= suma + skaicius;
    }

    cout << "nelyginiu skaiciu suma intervale [1; 20] yra " << suma << endl;
    return 0;
}