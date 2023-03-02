#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Portuguese");


    float totalsl, desconto, salario;

    printf("\n");

    printf("Digite o Salário do Funcionário:");
    scanf("%f", &salario);
    printf("\n");

    if (salario <= 600)
    {
        printf("não sera descontado INSS\n");
        printf("sendo assim o salário será: %.2f", salario);
    }
    else

        if (salario>600 && salario<1200)

        {
            desconto= salario0.20;
            totalsl= salario-desconto;

            printf("Será descontado 20 porcento de INSS\n");
            printf("O deconto será de: %.2f\n", desconto);
            printf("O salário sera liquído será:%.2f",totalsl);
        }
        else
            if (salario>=1200 && salario<=2000)
            {
                desconto= salario0.25;
                totalsl= salario-desconto;

                printf("Será descontado 25 porcento de INSS\n");
                printf("O desconto será de: %.2f\n", desconto);
                printf("O salário será liquído será:%.2f",totalsl);
            }
            else
                if(salario>2000)
                {
                    desconto= salario*0.30;
                    totalsl= salario-desconto;

                    printf("Será descontado 30 porcento de INSS\n");
                    printf("O desconto será de: %.2f\n", desconto);
                    printf("O salário será liquído será:%.2f",totalsl);
                }
    return 0;
}
