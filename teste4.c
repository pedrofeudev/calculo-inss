#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

       setlocale(LC_ALL,"Portuguese");

        int a = 0;

        printf("-----Ol�! Para prosseguir com o seu cadastro, preencha os seguintes dados:-----\n");

        printf("��NOME COMPLETO:��\n");

                scanf("%s\n\n", &a);

        printf("��CPF��\n");

                scanf("%s\n\n", &a);

        printf("��ENDERE�O���\n");

        printf("��RUA��\n");

                scanf("%s\n\n", &a);

        printf("��NUMERO��\n");

                scanf("%s\n\n", &a);

        printf("��BAIRRO��\n");

                scanf("%s\nn", &a);

        printf("-----Finalizamos aqui o seu cadastro. � um prazer t�-lo conosco em nosso site!-----");


                                         return 0;






}



