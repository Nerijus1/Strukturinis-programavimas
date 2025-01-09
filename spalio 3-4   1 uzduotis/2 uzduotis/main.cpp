#include <iostream>
using namespace std;

// Funkcija, kuri konvertuoja temperatūrą iš Celsijaus į Farenheitą
double celsiusToFahrenheit(double tempCelsius) {
    return (tempCelsius * 9.0 / 5.0) + 32;

}

// Funkcija, kuri konvertuoja temperatūrą iš Farenheito į Celsijų
void fahrenheitToCelsius(double tempFahrenheit, double& tempCelsius) {
    tempCelsius = (tempFahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    double celsius, fahrenheit;

    while (true) {
        int pasirinkimas;
        cout<<"pasirinkite veiksma\n";
        cout<<"1 konvertuoti celsiusToFahrenheit\n";
        cout<<"2 konvertuoti fahrenheitToCelsius\n";
        cout<<"3 iseiti\n";
        cout<<"pasirinkite veiksma:\n";
        cin >>pasirinkimas;

        if (pasirinkimas == 1) {
            cout << "Iveskite temperatura Celsijaus: ";
            cin >> celsius;

            fahrenheit = celsiusToFahrenheit(celsius);
            cout << celsius << " C yra " << fahrenheit << " F.";
        }

        if (pasirinkimas == 2) {
            cout << "Iveskite temperatura Farenheito: ";
            cin >> fahrenheit;

            fahrenheitToCelsius(fahrenheit, celsius);
            cout << fahrenheit << " F yra " << celsius << " C.";
        }
        if (pasirinkimas == 3) {
            break;
        }
    }
        return 0;
    }