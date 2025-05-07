#include <stdio.h>

//Movimentaçao de peças de xadrez

// Definindo funções recursivas

void movimentoTorre(n){
    if (n < 5);
    printf("Direita\n");
    movimentoTorre(n-1);
}

void movimentoBispo(n){
    if (n < 5);
    printf("Cima, Direita\n");
    movimentoBispo(n -1);
    
}

void movimentoRainha(n){
    if (n < 8);
    printf("Esquerda\n");
    movimentoRainha(n-1);
}

// Torre

int main (){
    
printf("\n");
printf("Movimentação da Torre: \n");

int t = 0;
while (t < 5){

    printf("Direita\n");

    t++;
}


// Bispo

printf("\n");
printf("Movimentação do bispo: \n");

int b = 0;

do{
    printf("Cima, Direita\n");
    b++;
}
while(b < 5);

// Rainha

printf("\n");
printf("Movimentação da rainha: \n");

for (int r = 0; r < 8; r++) {
    printf("Esquerda\n");
}

//Cavalo 
// Para implementar o movimento do cavalo vamos usar loops aninhados

printf("\n");
printf("Movimento do cavalo: \n");

for(int movimentoCompleto = 1; movimentoCompleto == 1; movimentoCompleto--){ //Loop externo

    for(int movimentoPrimeiraFase = 0; movimentoPrimeiraFase < 2; movimentoPrimeiraFase++){ //Loop interno

        printf("Baixo \n");
    }

printf("Esquerda \n");

}



return 0;
} 