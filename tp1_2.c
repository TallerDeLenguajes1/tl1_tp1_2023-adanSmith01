#include <stdio.h>

/***********EJERCICIO 2.4 ***********/

float cuadradoNum(float num); //Apartado a) parte I
void cuadradoNumV(float num); //Apartado b) parte I
void Invertir(float* a, float* b); //Apartado d) parte I
void orden(float* a, float* b); //Apartado e) parte I

int main () {
    //Apartado f
    float num1 , num2;
    
    printf("Ingrese dos n%cmeros reales: \n", 163);
    printf("num1: ");
    scanf("%f", &num1);
    printf("num2: ");
    scanf("%f", &num2);

    printf("\nValor inicial de num1: %.2f\n", num1);
    printf("Direccion: %p", &num1);
    //Se obtiene el cuadrado de num1 de dos funciones diferentes
    printf("\nEl cuadrado del n%cmero que se obtuvo de la funci%cn cuadradoNum(): %.2f", 163, 162, cuadradoNum(num1));
    cuadradoNumV(num1);

    printf("\nValor inicial de num2: %.2f\n", num2);
    //Se obtiene el cuadrado de num2 de dos funciones diferentes
    printf("\nEl cuadrado del n%cmero que se obtuvo de la funci%cn cuadradoNum(): %.2f", 163, 162, cuadradoNum(num2));
    cuadradoNumV(num2);

    Invertir(&num1, &num2);
    printf("\nValores de num1 y num2 luego de ejecutarse la funci%cn Invertir(): \n", 162);
    printf("num1: %.2f\n", num1);
    printf("num2: %.2f\n", num2);

    orden(&num1, &num2);
    printf("\nValores de num1 y num2 luego de ejecutarse la funci%cn orden(): \n", 162);
    printf("num1: %.2f\n", num1);
    printf("num2: %.2f\n", num2);
    return 0;
}

//Definición de las funciones

//Apartado a) parte II
float cuadradoNum(float num) {
    return (num*num); 
}

//Apartado b) parte II
void cuadradoNumV(float num) {
    printf("\nContenido de la variable: %.2f\n", num);
    printf("Direcci%cn de memoria de la variable: %p\n", 162, &num);
    printf("El cuadrado del n%cmero que se obtuvo de la funci%cn cuadradoNumv(): %.2f\n", 163, 162, num*num);
}

//Apartado d) parte II
void Invertir(float* a, float* b) {
    float c;
    c = *a;
    *a = *b;
    *b = c;
}

//Apartado e) parte II
void orden (float* a, float* b) {
    if (*a > *b) Invertir(a, b);
}