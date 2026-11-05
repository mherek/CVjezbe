/*
Omogućiti korisniku unos ocjena koje su predstavljene velikim ili malim slovima od A do F te ispisati
postotak za određenu ocjenu (A: 90 – 100, B: 80 – 89, C: 70 – 79, D: 60 – 69, F: 0 – 59). U slučaju da
je unesen znak koji ne predstavlja ocjenu potrebno je ispisati poruku o pogrešci. Koristiti switchcase
*/

#include<stdio.h>
int main(void){

    char ocjena;
    printf("Molim unos ocjene : ");
    scanf(" %c", &ocjena);
    switch (ocjena){
        case 'A' :
         case 'a' : 
        printf("90 - 100 ");
        break;
        case 'B':
         case 'b' :
        printf("80 - 89 ");
        break;
        case 'C':
         case 'c' :
        printf("70 - 79 ");
        break;
        case 'D':
         case 'd' : 
        printf("60 - 69");
        break;
        case 'F':
         case 'f' :
        printf("0 - 59");
        break;
        default : 
        printf("Invalid");
        break;




    }
    return 0;

}