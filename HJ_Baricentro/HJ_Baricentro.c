#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;

} Punto;

int main() {
    Punto A, B, C, baricentro;
    float denominador;
    float areaABC;
    float areaABP;
    float areaACP;
    float areaBCP;
    
    
    // Ingreso de los puntos A, B y C
    printf("Ingrese las coordenadas del punto A:\n");
    printf("x: ");
    scanf("%f", &A.x);
    printf("y: ");
    scanf("%f", &A.y);
    
    printf("Ingrese las coordenadas del punto B:\n");
    printf("x: ");
    scanf("%f", &B.x);
    printf("y: ");
    scanf("%f", &B.y);
    
    printf("Ingrese las coordenadas del punto C:\n");
    printf("x: ");
    scanf("%f", &C.x);
    printf("y: ");
    scanf("%f", &C.y);
    
    // Cálculo del baricentro
    denominador = (A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y));
    if (denominador == 0) {
        printf("Los puntos ingresados no forman un triangulo.\n");
        return 0;
    }
    
    baricentro.x = (A.x + B.x + C.x) / 3;
    baricentro.y = (A.y + B.y + C.y) / 3;
    
    // Verificación si el baricentro está dentro del triángulo
    areaABC = fabs((A.x*(B.y-C.y)+B.x*(C.y-A.y)+C.x*(A.y-B.y))/2.0);
    areaABP = fabs((A.x*(B.y-baricentro.y)+B.x*(baricentro.y-A.y)+baricentro.x*(A.y-B.y))/2.0);
    areaACP = fabs((A.x*(baricentro.y-C.y)+baricentro.x*(C.y-A.y)+C.x*(A.y-baricentro.y))/2.0);
    areaBCP = fabs((B.x*(C.y-baricentro.y)+baricentro.x*(B.y-C.y)+C.x*(baricentro.y-B.y))/2.0);
    
    if (areaABC == (areaABP + areaACP + areaBCP)) {
        printf("El baricentro se encuentra dentro del triangulo.\n");
        printf("Coordenadas del baricentro: (%.2f, %.2f)\n", baricentro.x, baricentro.y);
    } else {
        printf("El baricentro se encuentra fuera del triangulo.\n");
        printf("Coordenadas del baricentro: (%.2f, %.2f)\n", baricentro.x, baricentro.y);
    }
    
    
    
    return 0;
}