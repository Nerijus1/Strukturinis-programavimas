#include <iostream>
using namespace std;

int suskaiciuotiPerimetra() {
    int krastine;

    cout << "Iveskite kvadrato krastine: ";
    cin >> krastine;
    cout << 4*krastine;
}
void suskaiciuotiPlota() {\
    int krastine1;
    int krastine2;
    cout << "Iveskite krastine: ";
    cin>>krastine1;
    cout <<"iveskite kita krastine";
    cin>>krastine2;
    cout <<"plotas yra " <<krastine1*krastine2<<endl;
}

int main() {
    while (true) {
        int pasirinkimas;
        cout<<"pasirinkite veiksma\n";
        cout<<"1 apskaiciuoti perimetra\n";
        cout<<"2 apskaiciuoti plota\n";
        cout<<"3 iseiti\n";

        cout<<"pasirinkite veiksma:\n";
        cin >> pasirinkimas;

        if (pasirinkimas == 1) {
            suskaiciuotiPerimetra();
        }
        if (pasirinkimas == 2) {
            suskaiciuotiPlota();
        }
        if (pasirinkimas == 3) {
            break;
        }
    }
        return 0;
}