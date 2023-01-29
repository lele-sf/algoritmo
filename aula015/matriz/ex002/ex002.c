#include <stdio.h>
int main()
{
    int m[3][3],i,j,totPar = 0;

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("Digite um valor para posicao [%d,%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
        if(m[i][j] % 2 == 0) {
            printf("{%d}  ",m[i][j]);
            totPar++;
           } else {
               printf(" %d  ",m[i][j]);
           }
            printf("\n");
    }
    printf("Ao todo foram digitados %d valores PARES",totPar);
    return 0;
}
