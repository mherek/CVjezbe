/*
Omogućiti korisniku unos tri znaka te odrediti koji ima najmanju ASCII vrijednost. Za svaki od
preostala dva znaka ispisati vrijednost u heksadekadskom brojevnom sustavu koja je jednaka razlici
njega i najmanjeg.
*/


#include<stdio.h>
int main(void){

    char znak1, znak2, znak3, najmanji;
    printf("Molim unos 3 znaka : ");
    scanf(" %c %c %c", &znak1, &znak2, &znak3);
    
   
    najmanji = (znak1 < znak2) 
             ? ((znak1 < znak3) ? znak1 : znak3)
             : ((znak2 < znak3) ? znak2 : znak3); 

    
             
    if(najmanji == znak1){
        printf("%X\n", znak2 - najmanji);
        printf("%X\n", znak3 - najmanji);
        }
    else if(najmanji == znak2){
        printf("%X\n", znak1 - najmanji);
        printf("%X\n", znak3 - najmanji);
        }
     else{
        printf("%X\n", znak1 - najmanji);
        printf("%X\n", znak2 - najmanji);
    }
    return 0;         

}