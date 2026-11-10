/*
Omogućiti korisniku unos osam realnih brojeva. Osigurati da svaki unos bude unutar [- 5, 5]. Potom,
izračunati i na ekran ispisati srednju vrijednost unesenih brojeva.
*/


#include <stdio.h>

int main(void) {

        float broj, brojac = 0;
    int i;

    for(i = 0; i < 8; i++) {

        printf("Unesite broj: ");
        scanf("%f", &broj);

        while(broj < -5 || broj > 5) {
            printf("Neispravan unos. Pokusajte ponovno: ");
            scanf("%f", &broj);
        }

        brojac += broj;
    }

    printf("Prosjek: %.2f\n", brojac / 8);

    return 0;
}
