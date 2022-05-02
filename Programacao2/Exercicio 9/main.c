#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2;
    printf("informe um numero:");
    scanf("%f",&n1);
    printf("informe outro numero:");
    scanf("%f",&n2);
    if((n1&&n2>0)&&(n1&&n2<1))
        printf("Valores validos");
    else
        printf("Valores invalidos");
    return 0;
}
