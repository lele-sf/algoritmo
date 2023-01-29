#include <stdio.h>

int main() {
    float num;
    printf("Digite um numero:");
    scanf("%f",&num);
    printf("O dobro de %.1f eh %.1f\n",num,num*2);
    printf("A terca parte de %.1f eh %f\n",num,num/3);
    return 0;
}
