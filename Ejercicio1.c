#include <stdio.h>

int main (){

    int numero = 1;

    while (numero<=500){
        int v= numero * numero;
        int c= numero* numero * numero;
        printf("%d \n, %d \n, ", v, c);
        numero ++;

    }
    
}
