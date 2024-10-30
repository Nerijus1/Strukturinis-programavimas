#include <iostream>
#include <iomanip>

using namespace std;

double convertCurrency(double amount, double rate) {
    return amount * rate;
}

int main() {
    const double usdToEur = 0.9127;
    const double gpbToEur = 1.1942;
    const double inrToEur = 0.0109;
    const double GBP_Total = 0.8593;
    const double GBP_Buy = 0.8450;
    const double GBP_Sell = 0.9060;
    const double USD_Total = 1.0713;
    const double USD_Buy= 1.0547;
    const double USD_Sell = 1.1309;
    const double INR_Total = 88.8260;
    const double INR_Buy = 85.2614;
    const double INR_Sell = 92.8334;





    int choice;
    double amount, convertedAmount;

    cout << "voliutos konvertacija" << endl;
    cout << "1. USD i EUR" << endl;
    cout << "2. EUR i USD" << endl;
    cout << "3. GPB i EUR" << endl;
    cout << "4. EUR i GPB" << endl;
    cout << "5. INR i EUR" << endl;
    cout << "6. EUR i INR" << endl;
    cout << "7. BUY USD WITH EUR" <<endl;
    cout << "8. BUY GBP WITH EUR" <<endl;
    cout << "9. BUY INR WITH EUR" <<endl;
    cout << "10. SELL EUR TO USD" <<endl;
    cout << "11. SELL EUR TO GBP" <<endl;
    cout << "12. SELL EUR TO INR" <<endl;


    cout << "pasirinkite opcija (1 iki 12): ";
    cin >> choice;

    if (choice == 1) {
        cout << "iveskite suma  USD: ";
        cin >> amount;
        convertedAmount = convertCurrency(amount, usdToEur);
        cout << fixed << setprecision(2);
        cout << amount << " USD = " << convertedAmount << " EUR" << endl;
    } else if (choice == 2) {
        cout << "iveskite suma  EUR: ";
        cin >> amount;
        convertedAmount = convertCurrency(amount, USD_Total);
        cout << fixed << setprecision(2);
        cout << amount << " EUR = " << convertedAmount << " USD" << endl;
    }else if (choice == 3) {
        cout << "iveskite suma  GPB: ";
        cin >> amount;
        convertedAmount = convertCurrency(amount, gpbToEur);
        cout << fixed << setprecision(2);
        cout << amount << " GPG = " << convertedAmount << " EUR" << endl;
    }else if (choice == 4) {
        cout << "iveskite suma  EUR: ";
        cin >> amount;
        convertedAmount = convertCurrency(amount,GBP_Total);
        cout << fixed << setprecision(2);
        cout << amount << " EUR = " << convertedAmount << " GBP" << endl;
    }else if (choice == 5) {
        cout << "iveskite suma  INR: ";
        cin >> amount;
        convertedAmount = convertCurrency(amount,inrToEur);
        cout << fixed << setprecision(2);
        cout << amount << " INR = " << convertedAmount << " EUR" << endl;
    }else if (choice == 6) {
        cout << "iveskite suma  EUR: ";
        cin >> amount;
        convertedAmount = convertCurrency(amount,INR_Total);
        cout << fixed << setprecision(2);
        cout << amount << " EUR = " << convertedAmount << " INR" << endl;
    }else if (choice == 7) {
        cout << "iveskite pirkimo suma ";
        cout << "iveskite suma  EUR: ";
        cin >> amount;
        convertedAmount = convertCurrency(amount, USD_Buy);
        cout << fixed << setprecision(2);
        cout << amount << " EUR = " << convertedAmount << " USD" << endl;
    }else if (choice == 8) {
        cout << "iveskite suma  EUR: ";
        cin >> amount;
        convertedAmount = convertCurrency(amount, GBP_Buy);
        cout << fixed << setprecision(2);
        cout << amount << " EUR = " << convertedAmount << " GBP" << endl;
    }else if (choice == 9) {
        cout << "iveskite suma  EUR: ";
        cin >> amount;
        convertedAmount = convertCurrency(amount, INR_Buy);
        cout << fixed << setprecision(2);
        cout << amount << " EUR = " << convertedAmount << " INR" << endl;
    }else if (choice == 10) {
        cout << "iveskite pardavimo suma ";
        cout << "iveskite suma  EUR: ";
        cin >> amount;
        convertedAmount = convertCurrency(amount, USD_Sell);
        cout << fixed << setprecision(2);
        cout << amount << " EUR = " << convertedAmount << " USD" << endl;
    }else if (choice == 11) {
        cout << "iveskite suma  EUR: ";
        cin >> amount;
        convertedAmount = convertCurrency(amount, GBP_Sell);
        cout << fixed << setprecision(2);
        cout << amount << " EUR = " << convertedAmount << " USD" << endl;
    }else if (choice == 12) {
        cout << "iveskite suma  EUR: ";
        cin >> amount;
        convertedAmount = convertCurrency(amount, INR_Sell);
        cout << fixed << setprecision(2);
        cout << amount << " EUR = " << convertedAmount << " USD" << endl;

    } else {
        cout << "netinkamas pasirinkimas atsiprasome, issirinkite varianta nuo 1 iki 6." << endl;
    }
}
