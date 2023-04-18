#include <stdio.h>

int main(int argc, char *argv[])
{

    char opcion;
    float numa = 0, numb = 0, numc = 0, numd = 0, nume = 0, numf = 0;
    float prca = 150, prcb = 55, prcc = 180, prcd = 70, prce = 120;
    float tota = 0, totb = 0, totc = 0, totd = 0, tote = 0;
    float subtotal = 0, total = 0;
    char nombre[50];
    char cedula[50];

    printf("BIENVENIDO AL SISTEMA DE FACTURACIÓN\n");

    printf("Ingrese su nombre: ");
    scanf("%s", &nombre);
    printf("Ingrese su número de cédula: ");
    scanf("%s", &cedula);
    printf("Escoja los productos que desea facturar:\n");
    printf("a) Llantas (Precio: $150)\n");
    printf("b) Kit Pastillas de freno (Precio: $55)\n");
    printf("c) Kit de embrague (Precio: $180)\n");
    printf("d) Faro (Precio: $70)\n");
    printf("e) Radiador (Precio: $120)\n");

    scanf("%s", &opcion);

    switch (opcion)
    {
    case 'a' /* constant-expression */:
        printf("Ingrese la cantidad de Llantas que desea facturar: ");
        scanf("%f", &numa);
        break;
    case 'b' /* constant-expression */:
        printf("Ingrese la cantidad de Kit Pastillas de freno que desea facturar: ");
        scanf("%f", &numb);
        break;
    case 'c' /* constant-expression */:
        printf("Ingrese la cantidad de Kit de embrague que desea facturar: ");
        scanf("%f", &numc);
        break;
    case 'd' /* constant-expression */:
        printf("Ingrese la cantidad de Faro que desea facturar: ");
        scanf("%f", &numd);
        break;
    case 'f' /* constant-expression */:
        printf("Ingrese la cantidad de Radiador que desea facturar: ");
        scanf("%f", &nume);
        break;

    default:
        printf("la opción elegida no existe ");
        break;
    }
    tota=numa * prca;
    totb=numb * prcb;
    totc=numc * prcc;
    totd=numd * prcd;
    tote=nume * prce;
   
    printf("*********   FACTURA ************\n");
    printf("Nombre: %s\n", nombre);
    printf("Nro. cédula: %s\n", cedula);
        printf("Producto                Número              valor           total\n");
    if (numa != 0){
        printf("Llantas                 %.2f                %.2f             %.2f\n",numa,prca,tota);
    }
    if (numb != 0){
        printf("Kit Pastillas de freno  %.2f                %.2f             %.2f\n",numb,prcb,totb);
    }
    if (numc != 0){
        printf("Kit de embrague         %.2f                %.2f             %.2f\n",numc,prcc,totc);
    }
    if (numd != 0){
        printf("Faro                    %.2f                %.2f             %.2f\n",numd,prcd,totd);
    }
    if (nume != 0){
        printf("Radiador                %.2f                %.2f             %.2f\n",nume,prce,tote);
    }
     subtotal =tota + totb + totc+ totc + tote;

    if (subtotal > 100 && subtotal <= 500){
        printf("Se aplica un decuento del 5 porciento\n");
        subtotal = subtotal * 0.95;
    }
    else if (subtotal > 500 && subtotal <= 1000){
        printf("Se aplica un decuento del 7 porciento\n");
        subtotal = subtotal * 0.93;
    }
    else if (subtotal > 1000){
        printf("Se aplica un decuento del 10 porciento\n");
        subtotal = subtotal * 0.90;
    }
    else
    {
        printf("No se aplica descuento dado que el mónto no alcanzo el mínimo necesario\n");
    }

    total = subtotal * 1.12;

    printf("el subtotal es: %.2f\n", subtotal);
    printf("el total es: %.2f\n", total);




    return 0;
}