#include <stdio.h>
#include <stdlib.h>


int main() {
    char nombre[50];
    char cedula[20];
    char opcion;
    int opcion1;
    float unidades1=0, unidades2=0,unidades3=0, unidades4=0, unidades5=0;
    float precio1 = 150, precio2 = 55, precio3 = 180, precio4 = 70, precio5 = 120;
    float subtotal1 = 0, subtotal2 = 0, subtotal3 = 0, subtotal4 = 0, subtotal5 = 0;
    float subtotal = 0, total = 0;
    float ahorro = 0;
    int seguir = 1;
    
    while (1) {
        printf("*************** MECANICA UDLA *******************\n");
        printf("a. Facturar producto\n");
        printf("b. Imprimir factura\n");
        printf("c. Salir\n");
        printf("Ingrese la opcion deseada: ");
        scanf(" %c", &opcion);
        
        switch (opcion) {
            case 'a':
                printf("************* LISTA DE PRODUCTOS ***********************\n");
              printf("1. Llantas (Precio: $150)\n");
              printf("2. Kit Pastillas de freno (Precio: $55\n");
              printf("3. Kit de embrague (Precio: $180)\n");
              printf("4. Faro (Precio: $70)\n");
              printf("5. Radiador (Precio: $120)\n");
              printf("Ingrese la opcion deseada: ");
                scanf("%i", &opcion1);
                switch (opcion1) {
                    case 1:
                        printf("Ingrese la cantidad de unidades: ");
                scanf("%f", &unidades1);
                        subtotal1 = precio1 * unidades1;
                        break;
                    case 2:
                            printf("Ingrese la cantidad de unidades: ");
                scanf("%f", &unidades2);
                        subtotal2 = precio2 * unidades2;
                        break;
                    case 3:
                             printf("Ingrese la cantidad de unidades: ");
                scanf("%f", &unidades3);
                        subtotal3 = precio3 * unidades3;
                        break;
                    case 4:
                           printf("Ingrese la cantidad de unidades: ");
                scanf("%f", &unidades4);
                        subtotal4 = precio4 * unidades4;
                        break;
                    case 5:
                             printf("Ingrese la cantidad de unidades: ");
                scanf("%f", &unidades5);
                        subtotal5 = precio5 * unidades5;
                        break;
                    default:
                        printf("Opcion no valida.\n");
                        break;
                }

                subtotal = subtotal1+subtotal2+subtotal3+subtotal4+subtotal5;
                
   if (subtotal >= 501 && subtotal <= 1000)
    {
                     total = subtotal * 0.96;
       ahorro=subtotal-total;
                       
    }
    else if (subtotal >= 1001&& subtotal <= 5000)
    {
        total = subtotal * 0.93;
         ahorro=subtotal-total;
        
    }
    else if (subtotal > 5000)
    {
        total = subtotal * 0.91;
        ahorro=subtotal-total;
        
    }
    else
    {
        total = subtotal;
        ahorro=subtotal-total;
        
    }
                
                printf("Desea facturar otro producto? (1: Si, 0: No): ");
                scanf("%i", &seguir);
                
                break;
           
       

         case 'b':
                if (subtotal == 0) {
                    printf("No hay productos facturados.\n");
                } else {
                   printf("Ingrese el nombre del cliente: \n");
    scanf("%s", &nombre);
    printf("Ingrese la cedula del cliente: \n");
    scanf("%s", &cedula);

    printf("*********** DATOS DEL CLIENTE ************\n");
    printf("Nombre: %s\n", nombre);
    printf("Cedula: %s\n", cedula);

    printf("***************** FACTURA IMPRESA **************\n");
    printf("PRODUCTO        VALOR UNITARIO      SUBTOTAL\n");
                    
    if (unidades1 != 0)
    {
        printf("Llantas          %.2f        %.2f\n", precio1, subtotal1);
    }

    if (unidades2 != 0)
    {
        printf("Kit Frenos       %.2f        %.2f\n",  precio2, subtotal2);
    }

    if (unidades3 != 0)
    {
        printf("Kit Embrague     %.2f        %.2f\n", precio3, subtotal3);
    }

    if (unidades4 != 0)
    {
        printf("Faros            %.2f        %.2f\n", precio4, subtotal4);
    }

    if (unidades5 != 0)
    {
        printf("Radiadores       %.2f        %.2f\n", precio5, subtotal5);
    }
    
    
    

    printf("El subtotal es: %.2f\n", subtotal);
    printf("El total ahorrado es: %.2f\n", ahorro);
    printf("El total es: %.2f\n", total);
    exit(0);

                }
                
                break;

                
            case 'c':
              
                 printf("GRACIAS POR USAR NUESTRO PROGRAMA..!!\n");
                exit(0);
                break;
            default:
                printf("Opcion no valida.\n");
                break;
        }
    }
    
    return 0;
}