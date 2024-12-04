#include <iostream>
#include <string>


using namespace std;

const char ABECELE[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };

// Sifravimo funkcija
void sifruotiVigenere(const char tekstas[], const char raktas[], char uzsifruotas[]) {
    int tekstoIlgis = 0, raktoIlgis = 0, raktasInd = 0;

    // Suzinome teksto ir rakto ilgi
    while (tekstas[tekstoIlgis] != '\0') tekstoIlgis++;
    while (raktas[raktoIlgis] != '\0') raktoIlgis++;

    // Sifravimas
    for (int i = 0; i < tekstoIlgis; i++) {
        if (tekstas[i]) {
            // Rasto simbolio ir rakto raides indeksai
            char simbolis = toupper(tekstas[i]);
            int tekstoInd = 0, raktoInd = 0;

            // Randame abeceles indeksas
            for (int j = 0; j < 26; j++) {
                if (ABECELE[j] == simbolis) tekstoInd = j;
                if (ABECELE[j] == toupper(raktas[raktasInd % raktoIlgis])) raktoInd = j;
            }

            // Uzsifruojame simboli
            uzsifruotas[i] = ABECELE[(tekstoInd + raktoInd) % 26];
            raktasInd++; // Pereiname prie kito rakto simbolio

        }
    }
}

void desifruotiVigenere(const char uzsifruotas[], const char raktas[], char desifruotas[]) {
    int uzsifruotoIlgis = 0, raktoIlgis = 0, raktasInd = 0;

    // Suzinome teksto ir rakto ilgi
    while (uzsifruotas[uzsifruotoIlgis] != '\0') uzsifruotoIlgis++;
    while (raktas[raktoIlgis] != '\0') raktoIlgis++;

    // Desifravimas
    for (int i = 0; i < uzsifruotoIlgis; i++) {
        if (isalpha(uzsifruotas[i])) {
            // Rasto simbolio ir rakto raidės indeksai
            char simbolis = toupper(uzsifruotas[i]);
            int uzsifruotoInd = 0, raktoInd = 0;

            // Randame indeksa abeceleje
            for (int j = 0; j < 26; j++) {
                if (ABECELE[j] == simbolis) uzsifruotoInd = j;
                if (ABECELE[j] == toupper(raktas[raktasInd % raktoIlgis])) raktoInd = j;
            }

            // Desifruojame simboli
            desifruotas[i] = ABECELE[(uzsifruotoInd - raktoInd + 26) % 26];
            raktasInd++; // Pereiname prie kito rakto simbolio

        }
    }
}

void sifruotiASCII(const string &tekstas, const string &raktas, string &uzsifruotas) {
    int raktoIlgis = raktas.length();
    int raktoIndeksas = 0;

    for (int i = 0; i < tekstas.length(); i++) {
        char simbolis = tekstas[i];
        char raktasSimbolis = raktas[raktoIndeksas % raktoIlgis];

        uzsifruotas += char(int(simbolis) + int(raktasSimbolis));
        raktoIndeksas++;
    }
}

void desifruotiASCII(const string &uzsfruotas, const string &raktas, string &desfruotas) {
    int raktoIlgis = raktas.length();
    int raktoIndeksas = 0;

    for (int i = 0; i < uzsfruotas.length(); i++) {
        char simbolis = uzsfruotas[i];
        char raktasSimbolis = raktas[raktoIndeksas % raktoIlgis];

        desfruotas += char((int(simbolis) - int(raktasSimbolis) + 256) % 256);
        raktoIndeksas++;
    }
}

int main() {
    while (true) {
        cout <<"Vigenere sifravimo sistema\n";
        cout <<"1. Sifruoti teksta\n";
        cout <<"2. Desifruoti teksta\n";
        cout <<"3. Sifruoti teksta su ASCII  koduote\n";
        cout <<"4. desifruoti teksta su ASCII  koduote\n";
        cout <<"5. Iseiti\n";
        cout <<"pasirinkite veiksma(1 -5):";


        int choise;
        cin>>choise;
        cin.ignore(); // Isvalome buferi

        if (choise == 1) {
            char tekstas[100];
            char raktas[100];
            char uzsifruotas[100];

            cout<<"iveskite teksta kuri norite uzsifruoti:\n";
            cin.getline(tekstas, 100);
            cout << "Iveskite slapta rakta:\n ";
            cin >> raktas;

            sifruotiVigenere(tekstas, raktas, uzsifruotas);
            cout << "Uzsifruotas tekstas: " << uzsifruotas << endl;
        } else if (choise == 2) {
            char uzsifruotas[100];
            char raktas[100];
            char desifruotas[100];

            cout<<"Iveskite teksta kuri norite desifruoti:\n";
            cin.getline(uzsifruotas, 100);
            cout << "Iveskite slapta rakta:\n ";
            cin >> raktas;

            desifruotiVigenere(uzsifruotas, raktas, desifruotas);
            cout << "desifruotas tekstas: " << desifruotas << endl;
        } else if (choise == 3) {
            string tekstas, raktas;
            string uzsifruotas;

            cout << "Iveskite teksta: ";
            getline(cin, tekstas);
            cout << "Iveskite rakta: ";
            getline(cin, raktas);

            sifruotiASCII(tekstas, raktas, uzsifruotas);
            cout << "Užšifruotas tekstas: " << uzsifruotas << endl;
        } else if (choise == 4) {
            string tekstas, raktas;
            string uzsifruotas, des1fruotas;

            cout << "Iveskite teksta: ";
            getline(cin, tekstas);
            cout << "Iveskite rakta: ";
            getline(cin, raktas);

            cout << "Desifruotas tekstas: " << des1fruotas << endl;
        } else if (choise == 5) {
            cout << "Iseinama is programos.\n";
            break;
        }else {
            cout<< "Kazkas neteisingai bandykite is naujo \n";
        }
    }
}