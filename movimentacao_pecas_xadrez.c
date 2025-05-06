#include <stdio.h>

//Movimentaçao de peças de xadrez

// Torre

int main (){

printf("Movimentação da Torre: \n");

int t = 0;
while (t < 5){

    printf("Direita\n");

    t++;
}


// Bispo

printf("Movimentação do bispo: \n");

int b = 0;

do{
    printf("Cima, Direita\n");
    b++;
}
while(b < 5);

// Rainha

printf("Movimentação da rainha: \n");

for (int r = 0; r < 8; r++) {
    printf("Esquerda\n");
}

return 0;
} 

