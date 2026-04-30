#include <stdio.h>
#include <math.h> 

int main (){
    //Declaracion de variables
    int num1, num2, op; 
    float f1, f2; 

    //Menu de opciones
    do {
        printf("\n--------------------CALCULADORA EN C--------------------\n\n"); 
        printf("0. Salir\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Potencia\n6. Residuo de una division\n7. Compare los numeros\n8. Mostrar numeros entre un intervalo\n");  
        printf("\nElija la operacion que desea realizar: ");
        scanf("%d", &op); 
        fflush(stdin);  
    
        switch (op) {
            case 1: //Suma
                printf("Ingrese el primer numero: ");
                scanf("%d", &num1);
                printf("Ingrese el segundo numero: ");
                scanf("%d", &num2);
                printf("El resultado de la suma es: %d\n", num1 + num2);
                break;
            case 2: //Resta
                printf("Ingrese el primer numero: ");
                scanf("%f", &f1);
                printf("Ingrese el segundo numero: ");
                scanf("%f", &f2);
                printf("El resultado de la resta es: %.2f\n", f1 - f2);
                break;
            case 3: //Multiplicacion
                printf("Ingrese el primer numero: ");   
                scanf("%f", &f1);
                printf("Ingrese el segundo numero: ");
                scanf("%f", &f2);
                printf("El resultado de la multiplicacion es: %.2f\n", f1 * f2);
                break;
            case 4: //Division
                printf("Ingrese el primer numero: ");
                scanf("%f", &f1);
                printf("Ingrese el segundo numero: ");
                scanf("%f", &f2);
                    if (f2 != 0) {
                        printf("El resultado de la division es: %.2f\n", f1 / f2);
                    } else {
                        printf("Error: No se puede dividir por cero.\n");
                    }
                break;
            case 5: //Potencia
                printf("Ingrese la base: ");    
                scanf("%f", &f1);
                printf("Ingrese el exponente: ");
                scanf("%f", &f2);
                printf("El resultado de la potencia es: %.2f\n", pow(f1, f2));
                break;
        } 
    }while (op != 0);
    return 0; 
}
