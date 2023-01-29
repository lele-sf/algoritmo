#include <stdio.h>

int soma (int n1, int n2)
{
    int res;
    res = n1 + n2;
    return res;
}

int main()
{
    int v1,v2,resultado;
    printf("Digite um numero: ");
    scanf("%d",&v1);
    printf("Digite outro numero: ");
    scanf("%d",&v2);
    resultado = soma(v1,v2);
    printf("%d + %d = %d",v1,v2,resultado);
    return 0;
}
