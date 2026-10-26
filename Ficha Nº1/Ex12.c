#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int horas, minutos, minutosIns;
    SetConsoleOutputCP(CP_UTF8);

    printf("Insira os minutos: ");
    scanf("%d", &minutosIns);

    if(minutos < 0 || minutosIns > 1440)
    {
        printf("Valor inválido!\n");
        return 0;
    } 
    else
    {
        horas = minutosIns / 60;
        minutos = minutosIns % 60;

        printf("Horas: %d\n", horas);
        printf("Minutos: %d\n", minutos);~

        printf("Os %d minutos inseridos correspondem a %d:%d.\n", minutosIns, horas, minutos);
    }



return 0;
}