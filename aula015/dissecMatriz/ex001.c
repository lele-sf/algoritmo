#include <stdio.h>
int main()
{
    int m[4][4],i,j,opcao;

    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            printf("Digite o valor da posicao [%d,%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    system("cls");
    printf("MENU DE OPCOES\n");
    printf("=================\n");
    printf("[1] Mostrar a Matriz\n");
    printf("[2] Diagonal Principal\n");
    printf("[3] Triangulo Superior\n");
    printf("[4] Triangulo Inferior\n");
    printf("[5] Sair\n");
    printf("\n===== OPCAO: ");
    scanf("%d", &opcao);


    switch (opcao) {
    case 1: for(i=0;i<4;i++) {
                for(j=0;j<4;j++) {
                    printf(" %d ",m[i][j]);
                }
            printf("\n");
            }
    break;
    case 2: for(i=0;i<4;i++) {
                for(j=0;j<4;j++) {
                    if(i==j) {
                    printf("%d ",m[i][j]);
                } else {
                printf("  ");
                }
            }
                printf("\n");
            }
    break;
    case 3: for(i=0;i<4;i++) {
                for(j=0;j<4;j++) {
                    if(i<j) {
                    printf("%3d ",m[i][j]);
                } else {
            printf("   ");
                }
                }
            printf("\n");
            }
    break;
    case 4: for(i=0;i<4;i++) {
                for(j=0;j<4;j++) {
                    if(i>j) {
                    printf("%3d ",m[i][j]);
                } else {
            printf("   ");
                }
                }
            printf("\n");
            }
    break;
    case 5: system("cls");
    printf("ENCERRANDO...");
    break;
    default: printf("Opção inválida");
    }
    return 0;
}
