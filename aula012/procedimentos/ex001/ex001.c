#include <stdio.h>
int main()
{
    int i;
    char n[50],pesado;
    float p, maior = 0;

    void topo(){
        system("cls");
        printf("---------------------------------\n");
        printf(" D E T E C T O R  DE  P E S A D O ");
        printf("\n Maior Peso ate agora: %.2f KG\n",maior);
        printf("---------------------------------\n");
    }

    for(i=1;i<=5;i++) {
        printf("Digite o nome: ");
        scanf("%s",&n);
        printf("Digite o peso de %s: ",n);
        scanf("%f",&p);
        if (p > maior) {
            maior = p;
            pesado = n;
        }
    topo();
    }
    topo();
    printf("A pessoa mais pesada tem %.1f quilos.",maior);
    return 0;
}
