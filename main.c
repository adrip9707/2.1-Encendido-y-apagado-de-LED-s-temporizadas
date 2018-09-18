#include <xc.h>  //Esta es la librería principal del compilador
//en ella se encuentran todas las definiciones para el microcontrolador utilizado
#include "config.h"
// Definiciones
#define _XTAL_FREQ 32000000



void main(void) {
    
    //Configuración del Oscilador
    //OSCCON1bits.NOSC=0b110;
    // OSCCON1bits.NDIV=0b000;
    OSCFRQbits.HFFRQ=0b110; //Selecciona la frecuencia de 32MHz del INTOSC
    //Configuración de puertos
    PORTB=0;    //Limpia puerto B
    TRISB=0;    //Puerto B como salidas
    ANSELB=0;   //Puerto B como digital
 
//4. Inicia ciclo infinito
    while(1){
        LATBbits.LATB7=~LATBbits.LATB7+1;  //Toggle bits RB0
        __delay_ms(500);                //Retardo 500ms segundo
    }
    return;
}
