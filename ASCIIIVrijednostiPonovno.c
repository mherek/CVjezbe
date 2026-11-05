/*
Omogućiti korisniku unos tri znaka te odrediti koji ima najmanju ASCII vrijednost. Za svaki od
preostala dva znaka ispisati vrijednost u heksadekadskom brojevnom sustavu koja je jednaka razlici
njega i najmanjeg
*/

#include<stdio.h>
int main(void){

    char a,b,c;
    int najmanji;
    printf("Molim unos tri znaka : ");
    scanf(" %c %c %c", &a , &b , &c);

    najmanji = (a<b) 
            ?((a<c) ? a : c)
            :((b<c) ? b : c);    
    
    if(najmanji == a){

        printf("Razlika prvog znaka je : %x\n ", b-najmanji  );
        printf("Razlika prvog znaka je : %x\n ", c-najmanji  );
    }   
     if(najmanji == b){

        printf("Razlika prvog znaka je : %x\n ", a-najmanji  );
        printf("Razlika prvog znaka je : %x\n ", c-najmanji  );
    }   
     if(najmanji == c){

        printf("Razlika prvog znaka je : %x\n ", a-najmanji  );
        printf("Razlika prvog znaka je : %x\n ", b-najmanji  );
    }  
    return 0;

}