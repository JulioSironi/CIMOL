#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    float divisao;
    printf("Informe um numero inteiro:");
    scanf("%d",&n1);
    printf("Informe outro numero inteiro:");
    scanf("%d",&n2);
    divisao=n1/n2;
    printf("%d + %d = %d\n",n1,n2,n1+n2);
    printf("%d - %d = %d\n",n1,n2,n1-n2);
    printf("%d / %d = %d\n",n1,n2,divisao);
    printf("%d * %d = %d\n",n1,n2,n1*n2);
    return 0;
}
