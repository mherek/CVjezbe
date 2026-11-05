/*
1. Omogućiti korisniku unos tri realna broja. Odrediti i ispisati na ekran najveći od njih.
*/

#include<stdio.h>
int main(void){

    float prviBroj, drugiBroj, treciBroj, najveci;
    printf("Molim unos 3 realna broja : ");
    scanf("%f %f %f", &prviBroj, &drugiBroj, &treciBroj);

    najveci = (prviBroj > drugiBroj) 
            ?  ((prviBroj > treciBroj) ? prviBroj : treciBroj)
            :  ((drugiBroj > treciBroj) ? drugiBroj : treciBroj);
            
    
    printf("%.2f", najveci);



    return 0;
}