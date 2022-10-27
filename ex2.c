// Faça um programa que: leia um valor numérico inserido por um usuário e atribua ele para uma variável x e depois imprima o dado presente nesta variável; 
#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor:\n");
    scanf("%d", &valor);

    int valorFinal = valor;

    printf("Valor: %d", valorFinal);
    return 0;
}
