#include <stdio.h>
#include "GameFunctions.h"

int main()
{
    if (!GameFunctions_Init())
        return 1;

    printf("Super Meat Boy\n");
    printf("Game initialized.\n");

    GameFunctions_Shutdown();

    return 0;
}
