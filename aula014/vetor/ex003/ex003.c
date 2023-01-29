#include <stdio.h>
int main()
{
    char nome[4][50];
    float n1[4],n2[4],m[4],SM,MT;
    int i,Tot;
    for(i = 1; i <= 4; i++) {
        printf("ALUNO %d\n",i);
        printf("Nome: ");
        scanf("%s",nome[i]);
        printf("Primeira Nota: ");
        scanf("%f",&n1[i]);
        printf("Segunda Nota: ");
        scanf("%f",&n2[i]);
        m[i] = (n1[i]+ n2[i]) / 2;
        SM = SM + m[i];
    }
    MT = SM / 4;
    system("cls");
    printf("LISTAGEM DE ALUNOS\n");
    printf("-------------------\n");
    for(i=1;i<=4;i++) {
        printf("%s %.1f\n",nome[i],m[i]);
        if(m[i] > MT) {
            Tot++;
        }
    }
    printf("Ao todo temos %d alunos acima da media da turma que e %.1f",Tot,MT);
    return 0;
}
