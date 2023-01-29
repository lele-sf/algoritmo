/*
#include <stdio.h>
int main()
{
    int dinheiro;
    printf("Digite a quantidade de dinheiro: ");
    scanf("%d",&dinheiro);
    if(dinheiro >= 10.000) {
        printf("Partiu Disney!");
    } else {
    printf("Vai trabalhar!");  }
    return 0;
}
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if (num % 2 == 0) {
        printf("O numero %d eh par",num);
    } else {
        printf("O numero %d eh impar",num);
        }
    return 0;
}
