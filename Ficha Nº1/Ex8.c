#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main ()

{
    float x, y, z;
    SetConsoleOutputCP(CP_UTF8);

    printf("x = ");
    scanf("%f", &x);
    printf("y = ");
    scanf("%f", &y);

    z = (x*y) + 5;

    if (z <= 0)
        printf("A\n");

    else
    {
        if (z <= 100)
            printf ("B\n");

        else
            printf("C\n");
    }

    return 0;
}