/*
Omogućiti korisniku unos duljine tri stranice a, b i c. Ispitati postoji li trokut s takvim stranicama i
ako postoji, ispisati na ekran kaka je (jednakostraničan, jednakokračan ili raznostraničan
*/

#include<stdio.h>
int main(void){

    int a,b,c;
    printf("Molim unos duljina stranica : ");
    scanf("%d %d %d", &a, &b, &c);

    if( a > 0 && b > 0 && c > 0 &&
        a+b > c && a+c > b && b+c > a){
        if(a == b && b == c ){
                printf("\nJednakostranican ");
        }else if(a == b || b == c || a == c){
            printf("\nJednakokracan ");

        }else{
            printf("\nRaznostranican ");
        }

    }else{
        printf("\nNije trokut! ");

    }
    return 0;

}