#include <stdio.h>
#include <stdlib.h>
//gcc main.c
//./a.out

int main(){
    int tamanho;
    int *vetor={NULL};
    //insira aqui seu código
    scanf("%d", &tamanho);
    if(tamanho==0){
        printf("[vazio]");
    }else{
        vetor=(int*) malloc(tamanho*sizeof(int));
        for(int i=0; i<tamanho; i++){
            scanf("%d", &vetor[i]);
        }
            for(int i=0; i<tamanho; i++){
            if(i==0){
                printf("[%d", vetor[i]);
            }else if(i>0 && i<tamanho-1){
                printf(", %d", vetor[i]);
            }else if(i>tamanho-2){
                printf(", %d]", vetor[i]);
            }   
        }
    }
    free(vetor);
    return 0;
}
--global user.email "gustavorv102@gmail.com"
--global user.name "gustavoRV"