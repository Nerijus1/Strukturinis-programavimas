#include <iostream>
using namespace std;

void suma() {
    int a;
    int b;
    cout <<"iveskite pirma skaiciu";
    cin >> a;
    cout <<"iveskite antra skaiciu";
    cin >> b;
    cout <<a+b<<endl;
}
void skirtumas() {
    int a;
    int b;
    cout <<"iveskite pirma skaiciu";
    cin >> a;
    cout <<"iveskite antra skaiciu";
    cin >> b;
    cout <<a-b<<endl;
}
void sandauga() {
    int a;
    int b;
    cout <<"iveskite pirma skaiciu";
    cin >> a;
    cout <<"iveskite antra skaiciu";
    cin >> b;
    cout <<a*b<<endl;
}
void dalyba() {
    int a;
    int b;
    cout <<"iveskite pirma skaiciu";
    cin >> a;
    cout <<"iveskite antra skaiciu";
    cin >> b;
    cout <<a/b<<endl;
}

int main() {
    int pasirinkimas;
while (true) {
    cout <<"pasirinkite veiksma:\n";
    cout <<"1 rasti suma dvieju skaiciu a+b\n";
    cout <<"2 rasti skirtuma dvieju skaiciu a-b \n";
    cout <<"3 rasti sandauga dvieju skaiciu a*b\n";
    cout <<"4 rasti dalmeni dvieju skaiciu a/b \n";
    cout <<"5 iseiti is programos\n";
    cout <<"pasirinkite veiksma:\n";

    cin >> pasirinkimas;

    if (pasirinkimas == 1) {
        suma();
    }
    if (pasirinkimas == 2) {
        skirtumas();
    }
    if (pasirinkimas == 3) {
        sandauga();
    }
    if (pasirinkimas == 4) {
        dalyba();
    }
    if (pasirinkimas == 5) {
        break;
    }
}
    return 0;

}
