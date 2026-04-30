#include <stdio.h>
#include <math.h> //Para operaciones matematicas como potencia
#include <windows.h>  // Para Sleep()

int main (){
    //Declaracion de variables
    int num1, num2, op; 
    float f1, f2; 

    //Menu de opciones
    do {
        printf("\n--------------------CALCULADORA EN C--------------------\n\n"); 
        printf("Bienvenido a la calculadora en C, elija una de las siguientes opciones:\n\n"); 
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
                Sleep(1500);
                break;
            case 2: //Resta
                printf("Ingrese el primer numero: ");
                scanf("%f", &f1);
                printf("Ingrese el segundo numero: ");
                scanf("%f", &f2);
                printf("El resultado de la resta es: %.2f\n", f1 - f2);
                Sleep(1500);
                break;
            case 3: //Multiplicacion
                printf("Ingrese el primer numero: ");   
                scanf("%f", &f1);
                printf("Ingrese el segundo numero: ");
                scanf("%f", &f2);
                printf("El resultado de la multiplicacion es: %.2f\n", f1 * f2);
                Sleep(1500);
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
                Sleep(1500);
                break;
            case 5: //Potencia
                printf("Ingrese la base: ");    
                scanf("%f", &f1);
                printf("Ingrese el exponente: ");
                scanf("%f", &f2);
                printf("El resultado de la potencia es: %.2f\n", pow(f1, f2));
                Sleep(1500);
                break;            
            case 6: //Residuo de una division
                    printf("Ingrese el primer numero: ");
                    scanf("%d", &num1);
                    printf("Ingrese el segundo numero: ");
                    scanf("%d", &num2);
                    if (num2 != 0) {
                        printf("El residuo de %d/%d es: %d\n", num1, num2, num1 % num2);
                    } else {
                        printf("Error: No se puede dividir por cero.\n");
                    }
                Sleep(1500);
                break;
            case 7: //Comparar los numeros
                printf("Ingrese el primer numero: ");
                scanf("%f", &f1);
                printf("Ingrese el segundo numero: ");
                scanf("%f", &f2);
                    if (f1 > f2) {
                        printf("%.2f es mayor que %.2f\n", f1, f2);
                    } else if (f1 < f2) {
                        printf("%.2f es menor que %.2f\n", f1, f2);
                    } else {
                        printf("Ambos numeros son iguales.\n");
                    }
                Sleep(1500);
                break;
            case 8: //Mostrar numeros entre un intervalo incluyendo los números del intervalo
                printf("Ingrese el primer numero: ");
                scanf("%d", &num1);
                printf("Ingrese el segundo numero: ");
                scanf("%d", &num2);
                    if (num1 < num2) {
                        printf("Numeros en el intervalo [%d,%d]: ", num1, num2);
                        for (int i = num1; i <= num2; i++) {
                            printf("%d ", i);
                        }
                        printf("\n");
                    } else if (num1 > num2) {
                        printf("Numeros en el intervalo [%d,%d]: ", num2, num1);
                        for (int i = num1; i >= num2; i--) {
                            printf("%d ", i);
                        }
                        printf("\n");
                    } else {
                        printf("Ingrese dos numeros diferentes para mostrar el intervalo.\n");
                    }
                Sleep(1500);
                break;
        } 
    }while (op != 0 || op < 0 || op > 8);
    Sleep(1500);
    return 0; 
}
