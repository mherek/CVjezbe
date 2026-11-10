/*
Omogućiti korisniku unos dva cijela broja. Osigurati da drugi bude veći u odnosu na prvi. Ispisati na
ekran sve cijele brojeve između njih.
*/
#include<stdio.h>
int main(void){

    int a,b; 
    printf("Molim unos 2 cijela broja : ");
    scanf("%d %d", &a, &b);
    if(b > a){
        int i;
        for(i = a+1; i < b; i++){
           printf("\n%d", i);
                }
    }else{
        printf("Drugi mora biti veci! ");
    }
    return 0;
}