//Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas para ela:
#include <stdio.h>;
int main() {
    char nome[50];
    printf("Digite o seu nome: ");
    scanf("%s",nome);
    printf("Boas vindas %s!",nome);
return 0;}
