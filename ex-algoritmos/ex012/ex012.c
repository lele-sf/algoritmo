#include <stdio.h>
int main()
{
    float preco,promo,pFinal;
    printf("Digite o preco do produto: ");
    scanf("%f",&preco);
    promo = (preco * 5) / 100;
    pFinal = preco - promo;
    printf("O preco do produto com a promocao eh %.1f",pFinal);
    return 0;
}
