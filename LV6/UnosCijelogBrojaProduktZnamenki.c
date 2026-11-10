/*
Omogućiti korisniku unos jednog cijelog broja. Potom, izračunati i ispisati na ekran produkt
znamenki tog broja.
*/

#include <stdio.h>

int main(void){

    int broj, produkt = 1;
    printf("Unesite broj: ");
    scanf("%d", &broj);

    while(broj > 0){

        int a;
        a = broj % 10 ;
        produkt = produkt * a;

        broj = broj / 10 ;
    }

    printf("Produkt znamenki je: %d", produkt);

    return 0;

}