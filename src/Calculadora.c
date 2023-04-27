#include <stdio.h>
#include "projetoCalc.h"

/********************************************

 Autores: Felipe M. S. Bessoni, Vinicius C. de Assis
 Data: 26/04/2023
 Descrição: Calculadora feita com estrutura de projeto
 Copyright
 
 Compile: clang -Wall src/Calculadora.c lib/funcoesarit.c lib/funcoesaux.c -I./include -o calculadora

 
*********************************************/

// Comentarios

int main(void)
{
    float a, b, resultado;

    clearscr();
    printf("\nCalculadora para as quatro operacoes basicas\n");

    do
    {
        printf("\nInforme o primeiro valor: ");
        scanf("%f", &a);
        getchar();

        printf("\nInforme o segundo valor: ");
        scanf("%f", &b);
        getchar();

        switch(operador())
        {
        case '+':
            resultado = soma(a, b);
            break;
        case '-':
            resultado = subtracao(a, b);
            break;
        case '*':
            resultado = multiplicacao(a, b);
            break;
        case '/':
            resultado = divisao(a, b);
            break;
        }

        printf("\no resultado eh: %.2f\n", resultado);

    }
    while(desejarContinuar() != 0);

    printf("\n\nSaindo da calculadora\n\n");


} // Fim do escopo do main()
