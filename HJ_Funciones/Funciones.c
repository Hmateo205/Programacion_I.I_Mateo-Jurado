#include <stdio.h>
#include <math.h>
#include "Funciones.h"

float ingresarCoordenadaX(){
    float x;
    printf("Ingrese la coordenada en X: ");
    scanf("%f",&x);
    return x;
}

float ingresarCoordenadaY(){
    float x;
    printf("Ingrese la coordenada en Y: ");
    scanf("%f",&x);
    return x;
}

float obtenerRadio(float x1,float y1,float x2,float y2,float x3,float y3){
    float b=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    float c=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    float a=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    float radio = b*c/(a+b+c);
    return radio;
}

float obtenerArea(float radio,float x1,float y1,float x2,float y2,float x3,float y3){
    float b=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    float c=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    float a=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    float areaTriangulo = b*c/2;
    float areaCirculo = 3.14*pow(radio,2);
    float area=areaTriangulo-areaCirculo;
    printf("El area del triangulo es: %f",areaTriangulo);
    printf("El area del circulo es: %f",areaCirculo);
    printf("El area entre el triangulo y el circulo es: %f",area);
}