#include <stdio.h>

int main() 
{
    //Ejercicio 2.3 apartado a)
    printf("Hola mundo");

    //Ejercicio 2.3 apartado e)
    int a, *p;
    a = 3;
    p = &a;

    printf("\nContenido del puntero: %d\n", *p);
    printf("Direcci%cn de memoria almacenada por el puntero: %p\n", 162, p);
    printf("Direcci%cn de memoria de la variable: %p\n", 162, &a);
    printf("Direcci%cn de memoria del puntero: %p\n", 162, &p);
    printf("Tama%co de la variable (en Bytes): %d\n", 164, sizeof(a));
    return 0;
}