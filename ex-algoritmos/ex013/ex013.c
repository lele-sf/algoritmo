#include <stdio.h>
int main()
{
    float sal,aum,salFinal;
    printf("Digite o seu salario: ");
    scanf("%f",&sal);
    aum = (sal * 15) / 100;
    salFinal = sal + aum;
    printf("O salario final eh %.1f",salFinal);
    return 0;
}
