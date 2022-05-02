#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("informe um numero inteiro:");
    scanf("%d",&x);
    printf("informe outro numero inteiro:");
    scanf("%d",&y);
    if(y>x)
    {
        z=x;
        x=y;
        y=z;
    }
    printf("Valor da variavel x:\n",x);
    printf("Valor da variavel y:",y);
    return 0;
}
