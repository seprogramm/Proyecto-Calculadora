#include <stdio.h>

void main (void){
    //Declaracion de variables
    int num1, num2, op; 
    float f1, f2; 

    //Menu de opciones
    printf("\n--------------------CALCULADORA EN C--------------------\n\n"); 
    printf("1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Potencia\n6. Residuo de una division\n7. Compare los numeros\n8. Mostrar numeros entre un intervalo\n");  
    printf("\nElija la operacion que desea realizar: ");
    scanf("%d", &op); 
    fflush(stdin); 

    switch (op)
    {
    case 1:
        printf("Ingrese el primer numero: ");
        scanf("%d", &num1);
        printf("Ingrese el segundo numero: ");
        scanf("%d", &num2);
        printf("El resultado de la suma es: %d\n", num1 + num2);
        break;
    case 2:
        printf("Ingrese el primer numero: ");
        scanf("%f", &f1);
        printf("Ingrese el segundo numero: ");
        scanf("%f", &f2);
        printf("El resultado de la resta es: %.2f\n", f1 - f2);
        break;
    }
}