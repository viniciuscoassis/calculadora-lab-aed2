#include <stdio.h>
#include <ctype.h>
int desejarContinuar()
{

    char continuar;
    int count = 3;

    while(count) {
    printf("Deseja continuar calculando? [s/n]");
        continuar = tolower(getchar());
        getchar();

        switch(continuar)
        {
        case 's':
            return (1);
        case 'n':
            return (0);
        default:
            printf("Digite somente 's' ou 'n'");
        }
        count--;
    }
    return (0);
}

char operador()
{
    char op = 1;

    do
    {
        printf("\nInforme a operacao [+ - * /]: ");
        op = getchar();
        getchar();

        switch(op)
        {
        case '+':
        case '-':
        case '*':
        case '/':
            break;
        default:
            printf("\nOperador invalido!\n");
            op = 0;
            break;
        }
    }
    while(op == 0);

    return(op);
}

void clearscr(void)
{
    printf("\033c");
    printf("\033[H\033[J");
    return;
}
