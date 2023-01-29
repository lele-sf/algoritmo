#include <stdio.h>

int parImpar(int v)
{
    if(v % 2 == 0) {
        printf("O numero eh par!");
    } else {
    printf("O numero eh impar!");
    }
}
int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    parImpar(num);
    return 0;
}
