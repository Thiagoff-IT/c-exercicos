// Faça um programa que apresente os números de 1 a 10, sendo que cada número deve ser impresso em uma linha e os números ímpares deslocados (\t) a direita.
#include <stdio.h>
int main(int argc, char *argv[]) {
    int i;
    for(i=0; i<10; i++){
        printf("%d\n", i);
        if(i % 2 == 0)
        printf("%d\n\t", i);
    }
}
