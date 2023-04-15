#include <stdio.h>
#define pi 3,14 /*asi se define una constante*/

int main (int argc, char *argv[]) {

    char Nombre[50]; /*cadena para el nombre*/
    char Cedula [20]; /*cadena para la cedula*/
    char opcion;
    float ahorro;
    float cd1=0, cd2=0, cd3=0, cd4=0, cd5=0; /*cantidad de objetos a comprar*/
    float pri1=150, pri2=55, pri3=180, pri4=70, pri5=120;/*precios de los articulos*/
    float subtotal1=0, subtotal2=0, subtotal3=0, subtotal4=0, subtotal5=0; /*subtotales*/
    float subs=0, total=0; /*subtotales*/

    
    
    
    printf("*/*/*/*/*/*/*/*/*/*ELEGIR UN PROUCTO*/*/*/*/*/*/*/*/*/*/*/*\n");
    printf("a)Llantas (Precio: $150)\n");
    printf("b)Kit pastillas de freno (Precio: $55)\n");
    printf("c)Kit de embrague (Precio: $180)\n");
    printf("d)Faro (Precio: $70)\n");
    printf("e)Radiador (Precio: $120)\n");
   
    printf("Ingrese opcion a facturar:");
    scanf("%c", &opcion);

    switch (opcion)
    {
    case 'a':
        printf("Ingrese cantidad de Llantas: \n");
        scanf("%f", &cd1);

        break;
    case 'b':
        printf("Ingrese cantidad de Pastillas de Freno: \n");
        scanf("%f", &cd2);

        break;
    case 'c':
        printf("Ingrese cantidad de Kit de Embragues: \n");
        scanf("%f", &cd3);

        break;
    case 'd':
        printf("Ingrese cantidad de Faros: \n");
        scanf("%f", &cd4);
        break;
    case 'e':
        printf("Ingrese cantidad de Radiadores: \n");
        scanf("%f", &cd5);
        break;
    default:
    break;
    }

    subtotal1 = cd1 * pri1;
    subtotal2 = cd2 * pri2;
    subtotal3 = cd3 * pri3;
    subtotal4 = cd4 * pri4;
    subtotal5 = cd5 * pri5;
   

    subs = subtotal1 + subtotal2 + subtotal3 + subtotal4;

    if (subs > 100 && subs <= 500 ){
        total = subs * 0.95;
    }
    else if (subs > 500 && subs <= 1000){
        total = subs * 0.93;
    }
    else if (subs > 1000){
        total = subs * 0.90;
    }
    else{
        total = subs;
    }
   
    /*printf("Elegiste:", cd1, "faros");
    printf("Elegiste:", cd2, "faros");
    printf("Elegiste:", cd3, "faros");
    printf("Elegiste:", cd4, "faros");*/

    printf("Ingrese Nombre del Cliente \n");
    scanf("%s", &Nombre);
    printf("Ingrese Cedula del Cliente \n");
    scanf("%s", &Cedula);

    printf("******************DATOS DE CLIENTE*******************************\n");
    printf("Nombre: %s\n", Nombre);
    printf("Nombre: %s\n", Cedula);

    printf("******************FACTURA*******************************\n");
    printf("PRODUCTO          CANTIDAD          VALOR UNITARIO       TOTAL\n");
    if(cd1 !=0){
        printf("LLANTAS          %.0f              %.2f            %.2f\n", cd1,pri1,subtotal1);
    }
     if(cd2 !=0){
        printf("KIT FRENO          %.0f              %.2f            %.2f\n", cd2,pri2,subtotal2);
    }  
     if(cd3 !=0){
        printf("KIT DE EMBRAGUE    %.0f              %.2f            %.2f\n", cd3,pri3,subtotal3);
    }
     if(cd4 !=0){
        printf("FAROS               %.0f              %.2f            %.2f\n", cd4,pri4,subtotal4);
    }
     if(cd5 !=0){
        printf("RADIADORES          %.0f              %.2f            %.2f\n", cd5,pri5,subtotal5);
    }

    ahorro = subs - total;
    printf("El subtotal es: %0.2f\n",subs);
    printf("El valor ahorrado es: %0.2f\n",ahorro);
    printf("El subtotal es: %0.2f\n",total);


    return 0;
}