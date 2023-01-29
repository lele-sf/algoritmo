#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char n[50];
    printf("Digite seu nome: ");
    scanf("%s",&n);
    printf("Total de letras do seu nome: %d\n",strlen(n));
    printf("Seu nome em maisculas eh %s\n",strupr(n));
    printf("Seu nome em minisculas eh %s\n",strlwr(n));
    printf("A primeira letra do seu nome eh %c\n",n[0]);

    return 0;
}
