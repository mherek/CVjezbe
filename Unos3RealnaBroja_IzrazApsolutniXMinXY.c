/*
Omogućiti korisniku unos realnih brojeva x i y. Izračunati i ispisati na ekran vrijednost izraza
|x| × min{x, y}.
*/
#include<stdio.h>
int main(void){

    float x,y, min, izraz;
    printf("Molim unos 2 realna broja : ");
    scanf("%f %f", &x, &y);
    (x < y) ? (min = x ) : (min = y);
    (x < 0) ? (x = -x) : x;
    

    izraz = x * min;
    printf("\n x * min je: %.2f ", izraz);

    return 0;
}