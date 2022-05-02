#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r1,r2,r3,p,p1,p2,p3,v1,v2,v3,v,i;
    printf("Informe o valor do resistor 1:");
    scanf("%f",&r1);
    printf("Informe o valor do resistor 2:");
    scanf("%f",&r2);
    printf("Informe o valor do resistor 3:");
    scanf("%f",&r3);
    printf("Informe o valor da fonte de alimentacao:");
    scanf("%f",&v);
    i=v/(r1+r2+r3);
    v1=r1*i;
    v2=r2*i;
    v3=r3*i;
    p=v*i;
    p1=v1*i;
    p2=v2*i;
    p3=v3*i;
    printf("Tensao nos resistores  r1=%.2f,  r2=%.2f,  r3=%.2f\n",v1,v2,v3);
    printf("potencia nos resistores  r1=%.2f,  r2=%.2f,  r3=%.2f\n",p1,p2,p3);
    printf("Potencia total do circuito=%.2f\n",p);
    printf("Corrente total do circuito=%.2f",i);
    return 0;
}
