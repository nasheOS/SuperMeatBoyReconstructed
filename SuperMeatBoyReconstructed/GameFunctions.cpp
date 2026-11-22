#include "GameFunctions.h"
#include <stdio.h>

bool GameFunctions_Init()
{
    printf("Initializing GameFunctions...\n");

    return true;
}

void GameFunctions_Shutdown()
{
    printf("Shutting down GameFunctions...\n");
}

int GameFunctions_Call(unsigned int address)
{
    switch (address)
    {
        case 0x00401080:
            printf("FUN_00401080\n");
            return 1;

        case 0x004011B0:
            printf("FUN_004011B0\n");
            return 1;
    }

    return 0;
}