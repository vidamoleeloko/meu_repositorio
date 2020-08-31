#include <stdio.h>
int multiplicarValor(int valor,int quantidadeDeVezes){
    return valor/quantidadeDeVezes;
}
int main(){
    for (int contador = 1; contador < 30; contador++){
        int quantidadeDeVezes = 10;
        printf("%d dividido %d = %d\n",quantidadeDeVezes,contador,multiplicarValor(contador,quantidadeDeVezes));
    }
    return 0;
}

