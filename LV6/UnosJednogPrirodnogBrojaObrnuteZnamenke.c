/*
Omogućiti korisniku unos jednog prirodnog broja. Kreirati broj koji ima obrnuo napisane znamenke
naspram unesenog broja, npr. od broja 123 kreirati broj 321.
*/

#include<stdio.h>
int main(void){

    int broj, obrnutBroj = 0, ostatak;

    
    printf("Unesite prirodan broj: ");
    // Provjera da li je broj prirodan
    if (scanf("%d", &broj) != 1 || broj <= 0) {
        printf("Pogrešan unos! Molimo unesite prirodan broj (veći od 0).\n");
        return 1;
    }

    int original = broj ;

    // Algoritam koji uzima broj i okrece znamenke od zadnje do prve
    while(broj > 0 ){
        ostatak = broj%10;
        obrnutBroj = obrnutBroj * 10 + ostatak;
        broj /= 10;
    }
    printf("Obrnuti broj od %d je: %d\n", original, obrnutBroj);

    return 0;
}