// *  1º  Que pida un número y diga si es mayor de 100.
#include <stdio.h>

int main(){
    int numero;
    printf("Indicame un numero\n");
    scanf("%d",&numero);
    if(numero < 100){
        printf("El numero es menor que 100\n");
    }else{
        printf("El numero es mayor o igual a 100\n");
    }
    return 0;
    }