#include <stdio.h>

void torre(int n){
    if (n > 0){
        printf("Direita\n");
        torre (n -1);
    }
}

void rainha(int n){
    if (n > 0){
        printf("Esquerda\n");
        rainha (n - 1);
    }
}

void bispo(int n){
    if (n > 0){
        for(int cima = 1; cima > 0; cima--){
            printf("Cima ");

            for (int direita = 1; direita > 0; direita--){
                printf("+ Direita\n");
            }
        }
        bispo (n - 1);
    }
}


int main () {


    // Definindo movimento da torre
    int t = 5;
    torre(t);

    printf("\n");


    // Definindo movimento do bispo
    int b = 5;
    bispo(b);

    printf("\n");


    // Definindo movimento da rainha
    int k = 8;
    rainha(k);

    printf("\n");


    // Definindo movimento do cavalo
    int cima = 1;
    int direita = 0;

    for (int c = 0, d = 0; c < 1; c++){
        
        while(d < 2 && cima == 1){
            printf("Cima\n");
            d++;
        } 
        if (d == 2 && direita == 0){
            printf("Direita\n");
            direita++;
        }
    }

    return 0;
}