#include <stdio.h>
int main()
{
    int v[7],c,totPar=0;
    for(c=1;c<=7;c++) {
        printf("Digite o %do. valor: ",c);
        scanf("%d",&v[c]);
    }
    for(c=1;c<=7;c++) {
        if(v[c]%2==0) {
            totPar++;
            printf("Valor PAR na posicao %d\n",c);
            }
        }
    printf("O total de pares foi %d\n",totPar);
    return 0;
}

