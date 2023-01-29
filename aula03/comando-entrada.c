/*
#include <stdio.h>

int main ()
{
    char nome[50] = "gustavo";
    printf("meu nome eh %s",nome);
    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    char nome[50];
    printf("Qual o seu nome?\n");
    scanf("%s",nome);
    printf("Muito prazer %s!",nome);
    return 0;
}
*/
//ex: solicitar dois numeros para o usuario mostrar a + entre eles
/*#include <stdio.h>
int main() {
    float num1, num2,media;
    printf("Digite um numero: ");
    scanf("%f",&num1);
    printf("Digite outro numero: ");
    scanf("%f",&num2);
    media = (num1 + num2) / 2;
    printf("A media entre %1.f e %1.f eh: %.2f",num1,num2,media);
    return 0;
}*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = abs(-2);
    printf("Valor absoluto eh %d",a);
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float b = pow(5,2);
    printf("Funcao exponencial eh %.2f",b);
    return 0;
}

