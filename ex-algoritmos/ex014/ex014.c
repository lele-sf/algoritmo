#include <stdio.h>
int main()
{
    float km,dias,ptotal;
    printf("Digite a quantidade de km percorridos: ");
    scanf("%f",&km);
    printf("Digite a quantidade de dias que o carro foi alugado: ");
    scanf("%f",&dias);
    ptotal = ((90 * dias) + (0.20 * km));
    printf("O preco total eh %.2f",ptotal);
    return 0;
}
