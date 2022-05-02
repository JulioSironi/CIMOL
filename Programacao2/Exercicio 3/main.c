#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    float resultado;
    char operacao;
    printf("Informe o primeiro numero:");
    scanf("%d",&n1);
    printf("Informe o segundo numero:");
    scanf("%d",&n2);
    fflush(stdin);
    printf("Informe o tipo de opercao que deseja realizar(+,-,/,*):");
    scanf("%c",&operacao);
    switch(operacao)
    {
        case '+':resultado=n1+n2;break;
        case '-':resultado=n1-n2;break;
        case '/':resultado=n1/n2;break;
        case '*':resultado=n1*n2;break;

    }
    printf("Resultado = %.2f",resultado);
    return 0;
}
