#include <stdio.h>
int main()
{
    int n,div=0,nulo=0,par = 0,sPar;
    float media,soma;
    for(int i=1;i<=5;i++) {
        printf("Digite o %d valor: \n",i);
        scanf("%d",&n);
        soma = soma + n;
        media = soma / i;
        if (n % 5 == 0) {
            div++;
        }
        if (n == NULL) {
            nulo++;
        }
        if (n % 2 == 0) {
            sPar = sPar + n;
        }

    }
    printf("A soma entre os valores e %.1f\n",soma);
    printf("A media entre os valores e %.1f\n",media);
    printf("Valores divisiveis por cinco: %d\n",div);
    printf("Valores nulos: %d\n",nulo);
    printf("A soma dos valores pares e %d",sPar);



    return 0;
}
