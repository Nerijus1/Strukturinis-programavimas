#include <iostream>
using namespace std;

int main() {
    int eilutes, stulpeliai;

    cout << "Iveskite lenteles eiluciu skaiciu: ";
    cin >> eilutes;
    cout << "Iveskite lenteles stulpeliu skaiciu: ";
    cin >> stulpeliai;

    // dinamine lenteles atmintis su rodyklemis
    int** lentele = new int*[eilutes];
    for (int i = 0; i < eilutes; i++) {
        lentele[i] = new int[stulpeliai];
    }

    // lenteles uzpildymas
    for (int i = 0; i < eilutes; i++) {
        cout << "iveskite reiksmes " << i + 1 << "-ai eilutei (su tarpais):\n";
        for (int j = 0; j < stulpeliai; j++) {
            cin >> lentele[i][j];
        }
    }
    // lenteles atspausdinimas
    cout << "\nLentele:\n";
    for (int i = 0; i < eilutes; i++) {
        for (int j = 0; j < stulpeliai; j++) {
            cout << lentele[i][j] << "\t";
        }
        cout << "\n";
    }

    // apskaiciuojamas eiluciu sumos
    cout << "\nEiluciu sumos:\n";
    for (int i = 0; i < eilutes; i++) {
        int sum = 0;
        for (int j = 0; j < stulpeliai; j++) {
            sum += lentele[i][j];
        }
        cout << i + 1 << " eilute: " << sum << "\n";
    }

    // apskaiciuojamas stulpeliu sumos
    cout << "\nStulpeliu sumos:\n";
    for (int j = 0; j < stulpeliai; j++) {
        int sum = 0;
        for (int i = 0; i < eilutes; i++) {
            sum += lentele[i][j];
        }
        cout << j + 1 << " stulpelis: " << sum << "\n";
    }

    // ieskoma didziausia reiksme lenteleje
    int max_value = lentele[0][0];
    for (int i = 0; i < eilutes; i++) {
        for (int j = 0; j < stulpeliai; j++) {
            if (lentele[i][j] > max_value) {
                max_value = lentele[i][j];
            }
        }
    }
    cout << "\nDidziausia reiksme lenteleje: " << max_value << "\n";

    // Atlaisvinama  atmintis
    for (int i = 0; i < eilutes; i++) {
        delete[] lentele[i];
    }
    delete[] lentele;

    return 0;

}