/*
Omogućiti korisniku unos jednog cijelog broja. Provjeriti i na ekran ispisati je li broj prost (prost broj
je pozitivan cijeli broj veći od 1 koji nema djelitelja osim jedan i samog sebe).
*/


#include<stdio.h>
int main(void){

    int broj, provjera = 0;
    printf("Molim unos jednog cijelog broja : ");
    scanf("%d", &broj);

    if (broj <= 1) {
        provjera = 1;
    }

    int j;
    for (j = 2; j < broj; j++) {
        if (broj % j == 0) {
            provjera = 1;
        }
    }

    if (provjera == 0) {
        printf("Broj je prost.");
    }
    else {
        printf("Broj nije prost.");
    }

    return 0;
}
