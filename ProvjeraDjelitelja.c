/*
Omogućiti korisniku unos jednog cijelog broja. Pronaći i na ekran ispisati sve djelitelje tog broja
*/

#include<stdio.h>
int main(void){

    int a;
    printf("Molim unos broja  ");
    scanf("%d", &a);
    int i;
    for(i = 1; i <= a; i++){
        if(a%i == 0){
            printf("%d ", i);

        }
    }
    return 0;

    
}