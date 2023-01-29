#include <stdio.h>
int main()
{
    int a,b,c,delta;
    printf("Digite os valores de a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    delta = (b*b) - 4*a*c;
    if (delta < 0) {
        printf("Nao existem raizes reais!");
    } else {
    printf("O delta da equacao eh %d",delta);
    }
    return 0;
}
