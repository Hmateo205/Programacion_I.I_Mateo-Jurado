#include <stdio.h>
#include "Funciones.h"

int main (int argc, char *argv[]) {

    float x1 = ingresarCoordenadaX();
    float y1 = ingresarCoordenadaY();
    float x2 = ingresarCoordenadaX();
    float y2 = ingresarCoordenadaY();
    float x3 = ingresarCoordenadaX();
    float y3 = ingresarCoordenadaY();

    float radio = obtenerRadio(x1,y1,x2,y2,x3,y3);

    obtenerArea(radio,x1,y1,x2,y2,x3,y3);


    return 0;
}