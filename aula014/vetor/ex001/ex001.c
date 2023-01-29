#include <stdio.h>
int main()
{
    int vetor[6],c;
    for(c=1;c<=6;c++) {
        printf("Digite o %do. valor: ",c);
        scanf("%d",&vetor[c]);
    }
    for(c=1;c<=6;c++) {
        printf("[ %d ]",vetor[c]);
    }
    return 0;
}
