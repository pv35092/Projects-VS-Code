#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{  
    int i;
    SetConsoleOutputCP(CP_UTF8);  
    
    for (i = 1; i <= 20; i++)
    if (i % 2 == 0)
        printf("O valor de i=%d\n", i);

    printf("O valor de i depois de executado o ciclo = %d\n", i);

    
    return 0;
}