//Crear un programa que multiplique dos números enteros de la siguiente forma: pedirá al usuario un primer número entero. Si el número que se que teclee es 0,
//escribirá en pantalla "El producto de 0 por cualquier número es 0". Si se ha tecleado un número distinto de cero, se pedirá al usuario un segundo número y
//se mostrará el producto de ambos.
#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    
    printf("Introduce un numero: \n");
    scanf("%d", &numero1);
    
    if (numero1==0)  printf("El producto de 0 por cualquier numero es 0\n");
    if (numero1!=0)
    {
        printf("Introduce otro numero: \n");
        scanf("%d", &numero2);
        if (numero2==0) printf("El producto de cualquier numero por 0 es 0\n");
        if (numero2!=0) printf("Resultado: %d\n", numero1*numero2);
    }
    
    return 0;
}