#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho;
    int *vetor={NULL};
    //insira aqui seu código
    scanf("%d", &tamanho);
    vetor=(int*) malloc(tamanho*sizeof(int));
    for(int i=0; i<tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    if(vetor==NULL){
        printf("[vazio]\n");
    }else{
        for(int i=0; i<tamanho; i++){
        if(i==0){
            printf("[%d", vetor[i]);
        }else{
            printf(", %d", vetor[i]);
        }
    }
    }
    printf("]\n");
    free(vetor);
    return 0;
}