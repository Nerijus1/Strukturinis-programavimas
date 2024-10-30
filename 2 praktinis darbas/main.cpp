#include <iostream>
#include <set>
using namespace std;
//euklido algoritmas:
int rastiDBD(int skaicius1, int skaicius2) {
    while (skaicius2 != 0) {
        int DBD = skaicius2;
        skaicius2 = skaicius1 % skaicius2;
        skaicius1 = DBD;
    }
    return skaicius1; }

int Skaicius() {
    return rand() % 100 + 1; // Generuoja skaičių nuo 1 iki 100
    }

void fizzbuzz (int n){
    for (int i = 1; i <= n; ++i){
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" <<endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
}


int main() {
    int choise;
    char raide;
    const set<char>  balses = {'a', 'e', 'i', 'o', 'u','A', 'E', 'I', 'O', 'U'};

    cout << "1. ar ivesta raide yra balse " << endl;
    cout << "2. funkcija kuri randa didziausia bendra dalikli tarp dvieju ivestu skaitmenu"<< endl;
    cout << "3. mini zaidimas"<<endl;
    cout << "4. programa"<< endl;

    cout <<"pasirinkite opcija"<<endl;
    cin >> choise;

    if (choise ==1 ) {
        cout <<"iveskite raide"<<endl;
        cin >> raide;

        if (balses.find(raide) != balses.end()) {
            cout << "True." << endl;
        } else {
            cout << "False." << endl;
        }
    }
    if (choise == 2 ) {
        int skaicius1, skaicius2;
        cout << "iveskite pirmaji skaiciu: ";
        cin >> skaicius1;
        cout << "iveskite antraji skaiciu: ";
        cin >> skaicius2;
        int dbd = rastiDBD(skaicius1, skaicius2);
        cout << "didziausias bendras daliklis yra: " << dbd <<endl;
    }
    if (choise == 3 ) {
        int spejimas = 0;
        bool teisingaiAtspeta = false;
        int atsitiktinisSkaicius = Skaicius();

        while (!teisingaiAtspeta) {
            cout<< "atspekite skaiciu:";
            cin >> spejimas;

            if (spejimas > atsitiktinisSkaicius) {
                cout <<"maziau"<< endl;
            }else if(spejimas < atsitiktinisSkaicius) {
                cout << "daugiau"<< endl;
            }else {
                cout << "atspejai!!!! " << atsitiktinisSkaicius << endl;
                teisingaiAtspeta = true;}
        }
    }
    if (choise == 4 ) {
        int n;
        cout << "iveskite teigiama sveikaji skaiciu: ";
        cin >> n;
        if (n > 0) {
            fizzbuzz(n);
        }

    }


    return 0;
}
