#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Portuguese");


    float totalsl, desconto, salario;

    printf("\n");

    printf("Digite o Sal�rio do Funcion�rio:");
    scanf("%f", &salario);
    printf("\n");

    if (salario <= 600)
    {
        printf("n�o sera descontado INSS\n");
        printf("sendo assim o sal�rio ser�: %.2f", salario);
    }
    else

        if (salario>600 && salario<1200)

        {
            desconto= salario0.20;
            totalsl= salario-desconto;

            printf("Ser� descontado 20 porcento de INSS\n");
            printf("O deconto ser� de: %.2f\n", desconto);
            printf("O sal�rio sera liqu�do ser�:%.2f",totalsl);
        }
        else
            if (salario>=1200 && salario<=2000)
            {
                desconto= salario0.25;
                totalsl= salario-desconto;

                printf("Ser� descontado 25 porcento de INSS\n");
                printf("O desconto ser� de: %.2f\n", desconto);
                printf("O sal�rio ser� liqu�do ser�:%.2f",totalsl);
            }
            else
                if(salario>2000)
                {
                    desconto= salario*0.30;
                    totalsl= salario-desconto;

                    printf("Ser� descontado 30 porcento de INSS\n");
                    printf("O desconto ser� de: %.2f\n", desconto);
                    printf("O sal�rio ser� liqu�do ser�:%.2f",totalsl);
                }
    return 0;
}
