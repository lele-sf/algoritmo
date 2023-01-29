#include <stdio.h>
int main()
{
    int m[3][2],i,c;

    for(i=0;i<3;i++) {
        for(c=0;c<2;c++) {
            printf("Digite um valor da posicao [%d,%d]: ",i,c);
            scanf("%d",&m[i][c]);
        }
    }
    for(i=0;i<3;i++) {
        for(c=0;c<2;c++) {
            printf("%d",m[i][c]);
        }
     }
    return 0;
}
