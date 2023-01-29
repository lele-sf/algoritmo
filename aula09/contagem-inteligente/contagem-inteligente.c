#include <stdio.h>
int main()
{
    int inicio,fim,cont;
    printf("CONTAGEM INTELIGENTE\n--------------------\n");
    printf("Inicio: ");
    scanf("%d",&inicio);
    printf("Fim: ");
    scanf("%d",&fim);
    printf("--------------------\n  C O N T A N D O\n--------------------\n");
    if (inicio < fim) {
    while (inicio<=fim){
        printf("%d..  ",inicio++);
    }   } else if (inicio > fim) {
    while (inicio>=fim){
        printf("%d..  ",inicio--);} }
    return 0;
}
