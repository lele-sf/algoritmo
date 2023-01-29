#include <stdio.h>
#include <ctype.h>
int main()
{
    char nome[50],primLetra;
    int c;

    for(c=1;c<=5;c++) {
        printf("Digite o seu nome: ");
        scanf("%s",nome);
        primLetra = toupper(nome[0]);
        printf("A primeira letra do seu nome e %c\n",primLetra);
    }

    return 0;
}
