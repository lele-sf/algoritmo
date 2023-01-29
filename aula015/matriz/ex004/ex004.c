#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[4][4],i,j,soma=0,prod=1,maior=0;

    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            printf("Digite o valor da posicao [%d,%d]: ",i,j);
            scanf("%d",&m[i][j]);
            if(i==j) {
            soma = soma + m[i][j];
            }
        }
    }
    prod = m[2][0];
    for(j=1;j<4;j++) {
        prod = prod * m[2][j];
    }
    for(i=1;i<4;i++) {
        if(m[i][3] > maior) {
            maior = m[i][3];
        }
    }
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
    printf("Soma dos elementos da diagonal principal: %d\n", soma);
    printf("O produto dos valores da terceira linha e %d\n",prod);
    printf("O maior valor da quarta coluna e %d",maior);
    return 0;
}
