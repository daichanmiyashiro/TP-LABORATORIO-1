float IngresarNumero(char var)
{
    float numero1;
    printf("Ingrese un numero para %c\n",var);
    scanf("%f",&numero1);
    return numero1;
}


float Suma(float numero1, float numero2){

float resultado;
resultado = numero1 + numero2;
printf("La suma es :%.2f\n", resultado);

return resultado;
}

float Resta(float numero1, float numero2){

float resultado= numero1 - numero2;
printf("La resta es :%.2f\n", resultado);

return resultado;
}

float Multiplicacion(float numero1, float numero2){

float multiplicacion = numero1 * numero2;
printf("La multiplicacion es :%.2f", multiplicacion);
return multiplicacion;

}

float Division(float numero1, float numero2){

    if(numero2<=0){
        printf("\nNo se puede dividir por 0 o numero negativo");
    }
    else {
    float division = numero1/numero2;
    printf ("\nLa division es %.2f\n", division);

    return division;
    }}

float Factorial(float numero1){

   int auxNumero1 = (int)numero1;
   int factorial=1;
   int i;

   if(numero1<0){

    printf("No se puede factorizar por numero negativo\n");

   }
   else if(numero1 != auxNumero1){

    printf("No se puede ingresar datos flotantes\n");
   }
   else {
    for(i=1;i<=numero1;i++){

    factorial = factorial*i;
    }
    printf("El factorial de A es %d\n", factorial);
    }
   }

   float MostrarTodosLosResultados(float numero1,float numero2){
   Suma(numero1,numero2);
   Resta(numero1,numero2);
    Multiplicacion(numero1,numero2);
    Division(numero1,numero2);
    Factorial(numero1);

   }

