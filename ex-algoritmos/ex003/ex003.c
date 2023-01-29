/*Crie um programa que leia o nome e o salário de um funcionário, mostrando no
final uma mensagem.*/
#include <stdio.h>;
int main() {
    char nome[50];
    float sal;
    printf("Digite o seu nome: ");
    scanf("%s",nome);
    printf("Digite o seu salario: ");
    scanf("%f",&sal);
    printf("O salario de %s eh R$%.2f",nome,sal);
return 0;}
