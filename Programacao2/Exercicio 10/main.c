#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,r,pi=3.14159;
    printf("Informe o valor do raio: ");
    scanf("%f",&r);
    A=pi*(r*r);
    printf("Area da circunferencia = %.2f",A);
    return 0;
}
