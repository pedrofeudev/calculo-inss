#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"PORTUGUESE");

    float nota1, nota2, resultado;

    printf("Leia a primeira nota:\n");

           scanf("%f", &nota1);

    printf("Leia a segunda nota:\n");

           scanf("%f", &nota2);

    resultado = (nota1 + nota2) / 2;

           printf("A m�dia �: %f", resultado);


           Return 0;

}
