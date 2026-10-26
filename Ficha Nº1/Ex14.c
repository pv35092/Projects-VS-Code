#include <stdio.h>
#include <stdlib.h>


int main()
{
    int dia, mes, ano, datafinal;

    printf("Insira o dia: ");
    scanf("%d", &dia);
    printf("Insira o mes: ");
    scanf("%d", &mes);
    printf("Insira o ano: ");
    scanf("%d", &ano);

    if(dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 0)
    {
        printf("Data invalida!\n");
        return 1;
    }

    if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        datafinal = 30 - dia;
        printf("Faltam %d dias para o final do mês.\n", datafinal);
    }

    else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        datafinal = 31 - dia;
        printf("Faltam %d dias para o final do mês.\n", datafinal);
    }

    else
    {
        if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        {
            datafinal = 29 - dia;
            printf("Faltam %d dias para o final do mês.\n", datafinal);
        }
        else
        {
            datafinal = 28 - dia;
            printf("Faltam %d dias para o final do mês.\n", datafinal);
        }
    }

    
    return 0;
}