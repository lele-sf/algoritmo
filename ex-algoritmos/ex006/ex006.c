#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero:");
    scanf("%d",&num);
    printf("O antecessor de %d eh %d\n",num,num-1);
    printf("O sucessor de %d eh %d\n",num,num+1);
    return 0;
}
