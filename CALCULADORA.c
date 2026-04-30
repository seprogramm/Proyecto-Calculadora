#include <stdio.h>

void main (void){
    //Declaracion de variables
    float num1, num2, op; 

    //Menu de opciones
    printf("\n--------------------CALCULADORA EN C--------------------\n\n"); 
    printf("1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Potencia\n6. Residuo de una division\n7. Compare los numeros\n8. Mostrar numeros entre un intervalo\n");  
    printf("\nElija la operacion que desea realizar: ");
    scanf("%f", &op); 
    fflush(stdin); 
}
