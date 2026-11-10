/*
Omogućiti korisniku unos cijelog broja n iz intervala [5, 25]. Potom, za svaki broj od 1 do n, u
posebnom retku, ispisati na ekran isto toliko zvjezdica (*).
*/

#include<stdio.h>
int main(void){
    int n; 
    printf("Molim unos cijelog broja : ");
    scanf("%d", &n);
    if(n >= 5 && n <= 25){

        int i, j;
        for(i = 1; i <= n; i++){
            for(j = 0; j < i; j++){
                printf("*");
            }
            printf("\n");
        } 
    }else{
        printf("\nBroj nije u intervalu : ");
    }
    return 0;
}