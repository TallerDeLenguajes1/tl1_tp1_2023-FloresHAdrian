#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    // printf("\n Hola Mundo \n");

    int var = 20; //Declaro variable
    int *ptr; //Declaro puntero

    ptr = &var; //Asigno ubicacion de memora de var al puntero

    printf("\n\n1.Contenido del puntero: %d \n", *ptr);
    printf("2.La direccion de memmoria almacenada por el puntero: %d\n", ptr);
    printf("3.La direccion de memoria de la variable: %d\n", &var);
    printf("4.La direccion de memoria del puntero : %d\n", &ptr);
    printf("5.El tamaño de memoria utilizado por la variable: %d\n", sizeof(var));

    return 0;
}
