#include <stdio.h>

int main() {
    float n1,n2,media;
    printf("Digite a primeira nota:");
    scanf("%f",&n1);
    printf("Digite a segunda nota:");
    scanf("%f",&n2);

    media = (n1 + n2) / 2;
    printf("A media entre as duas notas eh %.1f",media);

    return 0;
}
