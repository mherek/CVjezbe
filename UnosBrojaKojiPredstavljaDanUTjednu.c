/*
Omogućiti korisniku unos cijelog broja koji predstavlja dan u tjednu. Potrebno je ispisati riječima
dan u tjednu u ovisnosti o unesenom broju. U slučaju da je unesen cijeli broj koji ne predstavlja dan
u tjednu potrebno je ispisati poruku o pogrešnom unosu. Koristiti switch-case.
*/

#include<stdio.h>
int main(void){

    int dan;
    printf("Molim unos broja koji predstavlja dan u tjednu : ");
    scanf("%d", &dan);
    switch(dan){

        case 1:
        printf("Ponedeljak");
        break;
        case 2:
        printf("Utorak");
        break;
        case 3:
        printf("Srijeda");
        break;
        case 4:
        printf("Cetvrtak");
        break;
        case 5:
        printf("Petak");
        break;
        default : 
        printf("Invalid");
        break;
    }
    return 0;
}