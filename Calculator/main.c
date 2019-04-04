#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main()
{
float num1;
float num2;
int flagn1=0;
int flagn2=0;
char continuar = 's';
int opcion = 0;

while(continuar == 's'){
    printf("                                                   \n");
        printf("  *********CALCULADORA*********\n");
        printf("                                                   \n");
        printf("\n");
        if(flagn1==0)
        {
        printf("          1- Ingresar 1er operando \n");
        }
        else
        {
        printf("          1- Ingresar 1er operando (A=%.2f) \n",num1);
        }
        if(flagn2==0)
        {
            printf("          2- Ingresar 2do operando \n");
        }
        else
        {
            printf("          2- Ingresar 2do operando (B=%.2f)\n",num2);
        }
        printf("          3- Calcular la suma (A+B)\n");
        printf("          4- Calcular la resta (A-B)\n");
        printf("          5- Calcular la division (A/B)\n");
        printf("          6- Calcular la multiplicacion (A*B)\n");
        printf("          7- Calcular el factorial (A!)\n");
        printf("          8- Calcular todas las operaciones.\n");
        printf("                   9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                num1=IngresarNumero('A');
                flagn1=1;
                break;
            case 2:
                num2=IngresarNumero('B');
                flagn2=1;
                break;
            case 3:
                if(flagn1==0 || flagn2==0)
                {
                    printf("Error, no ingresaste ningun valor.");
                }
                else
                {
                   Suma(num1,num2);
                }
                break;
            case 4:
                if(flagn1==0 || flagn2==0)
                {
                    printf("Error, no ingresaste ningun valor.");
                }
                else
                {
                Resta(num1,num2);
                }
                break;
            case 5:
                if(flagn1==0 || flagn2==0)
                {
                    printf("Error, no ingresaste ningun valor.");
                }
                else
                {
                Division(num1,num2);
                }
                break;
            case 6:
                if(flagn1==0 || flagn2==0)
                {
                    printf("Error, no ingresaste ningun valor.");
                }
                else
                {
                Multiplicacion(num1,num2);
                }
                break;
            case 7:
                if(flagn1==0)
                {
                    printf("Error, no ingresaste ningun valor.");
                }
                else
                {
                Factorial(num1);
                }
                break;
            case 8:
                if(flagn1==0 || flagn2==0)
                {
                    printf("Error, no ingresaste ningun valor.");
                }
                else
                {
                MostrarTodosLosResultados(num1,num2);
                }
                break;
            case 9:
                continuar = 'n';
                break;
            default:
                printf("Error, reingrese una opcion correcta (1-9)");
                break;
        }
        getch();
        system("cls");
    }

    return 0;

}



