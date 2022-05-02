#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    printf("Informe um numero:");
    scanf("%f",&n);
    if(n!=0)
        printf("Diferente de zero");
    else
        printf("Igual a zero");
    return 0;
}
