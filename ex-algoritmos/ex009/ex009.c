#include <stdio.h>
int main()
{
    float real,dolar;
    printf("Digite quantos reais voce tem: ");
    scanf("%f",&real);
    dolar = real / 3.45;
    printf("Voce pode comprar %.1f dolares com %.1f reais",dolar,real);
    return 0;
}
