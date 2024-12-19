#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Struktūra meniu elementui
struct menuItemType {
    string menuItem;
    double menuPrice;
};

// Funkcija, kuri įkelia meniu duomenis
void getData(vector<menuItemType>& menuList) {
    menuList = {
        {"Kiausiniene", 1.45},
        {"Kiaulienos sonine su keptu kiausiniu", 2.45},
        {"Keksiukas su vysnia", 0.99},
        {"Prancuziskas skrebutis", 1.99},
        {"Vaisiu salotos", 2.49},
        {"Pusryciu dribsniai", 0.69},
        {"Kava", 0.50},
        {"Arbata", 0.75}
    };
}

// Funkcija, kuri rodo meniu vartotojui
void showMenu(const vector<menuItemType>& menuList) {
    cout << "\nPusryciu meniu:\n";
    cout << "-----------------------------------\n";
    for (size_t i = 0; i < menuList.size(); ++i) {
        cout << i + 1 << ". " << setw(40) << left << menuList[i].menuItem
             << setw(5) << right << fixed << setprecision(2) << menuList[i].menuPrice << " Eur\n";
    }
    cout << "-----------------------------------\n";
    cout << "Pasirinkite patiekalus ivesdami ju numerius (arba 0 kad baigti):\n";
}

// Funkcija, kuri apskaičiuoja ir spausdina sąskaitą
void printCheck(const vector<pair<menuItemType, int>>& order) {
    double total = 0.0;

    cout << "\nSaskaita:\n";
    cout << "-----------------------------------\n";

    for (const auto& item : order) {
        double itemTotal = item.first.menuPrice * item.second;
        total += itemTotal;
        cout << setw(30) << left << item.first.menuItem
             << setw(5) << right << item.second << " x "
             << fixed << setprecision(2) << item.first.menuPrice << " Eur = "
             << fixed << setprecision(2) << itemTotal << " Eur\n";
    }

    double tax = total * 0.21;
    double finalTotal = total + tax;

    cout << "-----------------------------------\n";
    cout << setw(30) << left << "Tarpinis rezultatas:"
         << fixed << setprecision(2) << total << " Eur\n";
    cout << setw(30) << left << "21% Mokesciai:"
         << fixed << setprecision(2) << tax << " Eur\n";
    cout << "-----------------------------------\n";
    cout << setw(30) << left << "Is viso:"
         << fixed << setprecision(2) << finalTotal << " Eur\n";
}

int main() {
    vector<menuItemType> menuList;
    getData(menuList);

    vector<pair<menuItemType, int>> order;
    int choice, quantity;

    while (true) {
        showMenu(menuList);
        cin >> choice;

        if (choice == 0) {
            break;
        }

        if (choice < 1 || choice > static_cast<int>(menuList.size())) {
            cout << "Netinkamas pasirinkimas. Bandykite dar karta.\n";
            continue;
        }

        cout << "Iveskite pasirinkto patiekalo porciju kieku: ";
        cin >> quantity;

        if (quantity <= 0) {
            cout << "Netinkamas kiekis. Bandykite dar karta.\n";
            continue;
        }

        order.push_back(make_pair(menuList[choice - 1], quantity));
        cout << "Patiekalas pridetas prie uzsakymo!\n";
    }

    if (order.empty()) {
        cout << "Uzsakymas tuscias. Programa baigta.\n";
    } else {
        printCheck(order);
    }

    return 0;
}
