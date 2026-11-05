/*
Omogućiti korisniku unos duljine tri stranice a, b i c. Ispisati postoji li trokut s takvim stranicama i
ako postoji, ispisati na ekran kakav je (jednakostraničan, jednakokračan, raznostraničan).
*/

#include<stdio.h>
int main(void){

    int a,b,c;
     printf("Molim unos 3 stranice : ");
    scanf("%d %d %d", &a, &b, &c);
    if(a+b > c && a+c > b && b+c > a){
        if(a == b && b == c){
                 printf("Trokut je jednakostranican!\n ");
        }else if(a == b || b == c || a == c){
                printf("Trokut je jednakokracan!\n ");

        }else {
            printf("Trokut je Raznostranican!\n ");
            
        }

    }else{

    printf("Nije trokut\n ");
 
    }
    return 0;
}
