#include <stdio.h>
int main()
{
    float dias,saltotal;
    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%f",&dias);
    saltotal = dias * (8 * 25);
    printf("O salario eh %.2f",saltotal);
    return 0;
}
