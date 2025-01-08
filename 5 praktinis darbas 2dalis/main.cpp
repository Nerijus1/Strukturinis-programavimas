#include <iostream>
#include <string>
using namespace std;

struct Kontaktas {
    int id;
    string vardas;
    string pavarde;
    string telefonas;
};

// Funkcija kontaktui prideti
void pridetiKontaktus(Kontaktas*& kontaktai, int& kontaktuSkaicius) {
    // Paskiriame atminti naujam kontaktui
    Kontaktas* naujiKontaktai = new Kontaktas[kontaktuSkaicius + 1];

    // Kopijuojame esamus kontaktus i nauja masyva
    for (int i = 0; i < kontaktuSkaicius; i++) {
        naujiKontaktai[i] = kontaktai[i];
    }

    // Pridedame nauja kontakta
    cout << "Iveskite kontakto ID: ";
    cin >> naujiKontaktai[kontaktuSkaicius].id;
    cin.ignore();
    cout << "Iveskite varda: ";
    getline(cin, naujiKontaktai[kontaktuSkaicius].vardas);
    cout << "Iveskite pavarde: ";
    getline(cin, naujiKontaktai[kontaktuSkaicius].pavarde);
    cout << "Iveskite telefona: ";
    getline(cin, naujiKontaktai[kontaktuSkaicius].telefonas);

    // atlaisviname atminti ir priskiriame nauja masyva
    delete[] kontaktai;
    kontaktai = naujiKontaktai;
    kontaktuSkaicius++;
}

// Funkcija atspausdinti visus kontaktus
void atspausdintiKontaktus(Kontaktas* kontaktai, int kontaktuSkaicius) {
    if (kontaktuSkaicius == 0) {
        cout << "Nera kontaktu." << endl;
        return;
    }

    for (int i = 0; i < kontaktuSkaicius; i++) {
        cout << "ID: " << kontaktai[i].id << ", ";
        cout << "Vardas: " << kontaktai[i].vardas << ", ";
        cout << "Pavarde: " << kontaktai[i].pavarde << ", ";
        cout << "Telefonas: " << kontaktai[i].telefonas << endl;
    }
}

int main() {
    Kontaktas* kontaktai = nullptr;  // Dinaminis masyvas kontaktams saugoti
    int kontaktuSkaicius = 0;
    int pasirinkimas;

    while (true) {
        cout << "\nPasirinkite veiksma:\n";
        cout << "1. Prideti kontakta\n";
        cout << "2. Atspausdinti visus kontaktus\n";
        cout << "3. Baigti programa\n";
        cout << "Pasirinkite veiksma: ";
        cin >> pasirinkimas;
        cin.ignore();

        switch (pasirinkimas) {
            case 1:
                pridetiKontaktus(kontaktai, kontaktuSkaicius);
                break;
            case 2:
                atspausdintiKontaktus(kontaktai, kontaktuSkaicius);
                break;
            case 3:
                delete[] kontaktai;  // dinamiskos atminties atlaisvinimas
                cout << "Programa baigta." << endl;
                return 0;
            default:
                cout << "Neteisingas pasirinkimas. Bandykite dar karta." << endl;
        }
    }

    return 0;
}
