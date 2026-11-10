/*
Ispisati na ekran sve pozitivne troznamenkaste brojeve čija je zadnja znamenka djeljiva s 3. Na kraju,
dodatno ispisati aritmetičku sredinu ispisanih brojeva.
*/

#include<stdio.h>
int main(void){

    int zbroj = 0, brojac = 0;
    int i;
    for(i = 100; i < 1000; i++){
        if(i % 10 % 3 == 0){
            zbroj += i;
            brojac++;
            printf("%d ", i);
        }

        
    }
    float srednja = (float)zbroj/brojac;
    printf("\nAritmeticka sredina svih je : %.2f ", srednja);
    return 0;
}