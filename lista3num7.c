#include <stdio.h>
#include <stdlib.h>

void main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num >= 20 && num <= 50){
        printf("O numero esta compreendido entre 20 e 50");
    }
    else{
        printf("O numero não esta compreendido entre 20 e 50");
    }
}

