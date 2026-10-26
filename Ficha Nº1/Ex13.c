#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int horas, minutos, minutosIns;
    SetConsoleOutputCP(CP_UTF8);

    printf("Insira os minutos: ");
    scanf("%d", &minutosIns);

    if(minutosIns < 0 || minutosIns > 1440)

        printf("Valor inválido!\n");
    
    
    else
    {
        if (minutosIns > 720 && minutosIns < 1440)
        {
        horas = minutosIns / 60;
        horas = horas - 12;
        minutos = minutosIns % 60;
        
        printf("Os %d minutos inseridos correspondem a %d:%d PM.\n", minutosIns, horas, minutos);
        }


        else if (minutosIns == 720)
        {
            printf("Os %d minutos inseridos correspondem a 12:00 PM.\n", minutosIns);
        }

        else if (minutosIns == 0 || minutosIns == 1440)
        {
            printf("Os %d minutos inseridos correspondem a 12:00 AM.\n", minutosIns);
        }
        
        else
        {
            horas = minutosIns / 60;
            minutos = minutosIns % 60;

            printf("Os %d minutos inseridos correspondem a %d:%d AM.\n", minutosIns, horas, minutos);

        }
         
    }
    return 0;
}
