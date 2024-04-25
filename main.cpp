//=====[Libraries]=============================================================

#include "smart_home_system.h"

//=====[Main function, the program entry point after power on or reset]========


// En cada archivo comento las partes bloqueantes con titulo CODIGO BLOQUEANTE
// - smart_home_system
// - pc_serial_com

/* Para solucionar el bloqueo de la configuracion del rtc,
 * se implementa una maquina de estados en pcSerialComUpdate()
 * dentro de la funcion commandSetDateAndTime 
 */

int main()
{
    smartHomeSystemInit();
    
    while (true) {
        smartHomeSystemUpdate();
    }
}