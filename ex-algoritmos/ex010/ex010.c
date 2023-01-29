#include <stdio.h>
int main()
{
    int alt,lag,area,tinta;
    printf("Digite a altura e largura da sua parede: ");
    scanf("%d%d",&alt,&lag);
    area = alt * lag;
    printf("A area a ser pintada eh de %d metros quadrados\n",area);
    tinta = area / 2;
    printf("A quantidade de tinta para realizar o servico vai ser de %d litros",tinta);
    return 0;
}
