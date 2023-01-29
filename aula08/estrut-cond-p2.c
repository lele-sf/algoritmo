#include <stdio.h>
int main()
{
    float n1,n2,media;
    printf("Primeira Nota: ");
    scanf("%f",&n1);
    printf("Segunda Nota: ");
    scanf("%f",&n2);
    media = (n1+n2) / 2;
    printf("Media = %.1f\n",media);
    if (media >= 7) {
        printf("Aluno APROVADO!");
    } else if ((media >=5) && (media < 7)) {
        printf("Aluno em RECUPERACAO!"); }
        else {
            printf("Aluno REPROVADO!");
        }
    return 0;
}
