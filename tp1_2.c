#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int CuadradoNum(int num);
void CuadradoNumVoid(int *num);
void InvertirNum(int *a, int *b);
void OrdenarNum(int *a, int *b);

int main(int argc, char const *argv[])
{

    int a, b, aux;
    //Punto 4a
    printf("\nIngrese valor de a: ");
    scanf("%d",&a);
    printf("\nIngrese valor de b: ");
    scanf("%d",&b);
    // int a = 3,aux;
    aux = CuadradoNum(a);
    printf("\nEl cuadrado de %d es %d", a,aux);
    
    //Punto 4b
    aux = a;
    CuadradoNumVoid(&a);
    printf("\nEl cuadrado de %d usando puntero es: %d",aux,a);

    //Punto 4c
    // int b = 24;
    printf("\nDados a=%d y b=%d",a,b);
    InvertirNum(&a,&b);
    printf(" Si los invertimos seran a=%d, b=%d",a,b);

    //Punto 4d
    // a= 28;
    // b=15;
    printf("\nSean a=%d, b=%d ",a,b);
    OrdenarNum(&a,&b);
    printf("  Ordenados de menor a mayor serian %d, %d",a,b);


    return 0;
}

int CuadradoNum(int num){
    return num * num;
}

void CuadradoNumVoid(int *num){
    int x= *num;
    *num = x*x;
}

void InvertirNum(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void OrdenarNum(int *a, int *b){
    if(*a>*b){
        int aux;
        aux = *a;
        *a=*b;
        *b=aux;
    }
}