/*
Omogućiti korisniku unos cijelog broja koji predstavlja dan u tjednu. Potrebno je ispisati riječima
dan u tjednu u ovisnosti o unesenom broju. U slučaju da je unesen cijeli broj koji ne predstavlja dan
u tjednu potrebno je ispisati poruku o pogrešnom unosu. Koristiti višestruki if-else.
*/

#include<stdio.h>
int main(void){

    int broj; 
    printf("Molim unos broja: ");
    scanf("%d", &broj);
    if(broj == 1){
            printf("\nPonedeljak");
    }
    else if(broj == 2){
            printf("\nUtorak");
    }
    else if(broj == 3){
            printf("\nSrijeda");
    }
    else if(broj == 4){
            printf("\nCetvrtak");
    }
    else if(broj == 5){
            printf("\nPetak");
    }
    else{
        printf("\nInvalid");
    }
    return 0;

}