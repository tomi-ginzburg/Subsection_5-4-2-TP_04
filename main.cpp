//=====[Libraries]=============================================================

#include "smart_home_system.h"

//=====[Main function, the program entry point after power on or reset]========


// En cada archivo comento las partes bloqueantes con titulo CODIGO BLOQUEANTE


int main()
{
    smartHomeSystemInit();
    
    while (true) {
        smartHomeSystemUpdate();
    }
}