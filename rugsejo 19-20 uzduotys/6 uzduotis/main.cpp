#include <iostream>
using namespace std;

int main() {

    double P = 1000;
    double r = 5;
    int t = 10;

    double S = (P/100)*5;
    double S2 = (S*t)+P;

    cout << "Galutine suma po " << t << " metu: " << S2 << " EUR" << endl;

    return 0;
}