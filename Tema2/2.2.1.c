//El usuario de nuestro programa podrá teclear dos números de hasta 8 cifras significativas. 
//El programa deberá mostrar el resultado de dividir el primer número entre el segundo, utilizando tres cifras decimales.

#include<stdio.h>
int main()
{
    float numero;
    float numero2;
    float resultado;
    
    printf("Introduce un numero: \n");
    scanf("%f", &numero);
    printf("Introduce otro numero: \n");
    scanf("%f", &numero2);
    
    resultado = numero/numero2;
    
    printf("%8.0f entre %8.0f es %.3f", numero, numero2, resultado);
    
    return 0;
    
}