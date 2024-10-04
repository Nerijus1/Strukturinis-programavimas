#include <iostream>
using namespace std;
int main() {
    int pasirinkimas;
    printf ("Meniu:\n");
    printf ("1. pirma opcija. spauskite 1:\n");
    printf ("2. antra opcija. spauskite 2:\n");
    printf ("3. trecia opcija. spauskite 3:\n");
    printf ("iveskite savo pasirinkima:");
    scanf ("%d", pasirinkimas);

    switch (pasirinkimas) {
        case 1:
            printf ("jus pasirinkote pirma opcija.\n");
            break;
        case 2:
            printf ("jus pasirinkote antra opcija.\n");
            break;
        case 3:
            printf ("jus pasirinkote trecia opcija. \n");
            break;
        default:
            printf("tokios opcijos nera");
    }
    return 0;
}
