#include <stdio.h>
#include <stdlib.h>
// isto são comentários

int main()
{
    int tamVetor; //declara a variável do tipo int chamada tamVetor
    printf("Digite o tamanho do vetor: "); // escreve na tela a mensagem dentro das "aspas"
    scanf("%d", &tamVetor);//scaneia o teclado e aguarda q seja digitado um numero inteiro "%d" e guarda na variável tamVetor
    int vetor[tamVetor]; //declara um vetor de tamanho definido pela variável tamVetor
    int i; // declara a variável do tipo int chamada i que será usada na estrutura de repetição for
    
    //este for faz as instruções que estão dentro das chaves serem repetidas enquanto i for menor que tamVetor
    // este for serve para que seja preenchido vetor 
    for(i=0; i<tamVetor; i++){
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d",&vetor[i]);//scaneia o teclado e aguarda q seja digitado um numero inteiro "%d" e guarda no vetor na posição i
    }
    
    // este for serve para que seja mostrado na tela o vetor, sem precisar repetir o print(é dado um print e ele é repetido)
    for(i=0; i<tamVetor; i++){
        printf("Vetor [%d]: %d\n", i, vetor[i]);
    }

    return 0;
}
