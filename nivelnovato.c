#include <stdio.h>

int main () {

    // Definindo movimento da torre
    int i = 1;

    while (i <= 5){
        printf("Torre se moveu uma casa a direita\n");
        i++;
    }

    printf("\n");

    // Definindo movimento do bispo
    for (int b = 1; b <= 5; b++){
        printf("Bispo se moveu pra cima e para a direita (diagonal)\n");
    }

    printf("\n");

    // Definindo movimento da rainha
    int p = 0;

    do {
        printf("Rainha se moveu uma casa para a esquerda\n");
        p++;
    } while (p <= 7);


    return 0;
}