/*
Omogućiti korisniku unos ocjena koje su predstavljene slovim A do F, velikim ili malim slovima, sve
dok se ne unese uskličnik (!). Nakon toga ispisati koliko je bilo uneseno ocjena od A do F. Koristiti
naredbu Switch-case.
*/

#include <stdio.h>

int main(void){

    char ocjena;
    int brojac = 0;
    printf("Unesite ocjenu: ");
    scanf(" %c", &ocjena);
    
    
    while(ocjena != '!'){
        

        switch(ocjena){

            case 'A' : 
            case 'a' :
            brojac++;
            break;
            case 'B' : 
            case 'b' :
            brojac++;
            break;
            case 'C' : 
            case 'c' :
            brojac++;
            break;
            case 'D' : 
            case 'd' :
            brojac++;
            break;
            case 'F' : 
            case 'f' :
            brojac++;
            break;
            default :
            printf("\nNije valjan ocjena! ");
            break;


        }
        printf("Unesite ocjenu: ");
        scanf(" %c", &ocjena);
        
    }
    printf("%d", brojac);
    return 0;
}