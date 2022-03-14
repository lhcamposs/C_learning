#include <stdio.h>
#include <stdlib.h>

void main(){
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if((num % 3) == 0 ){
        printf("Esse numero é multiplo de 3");
    }
    else{
        printf("Não é multiplo de 3");
    }
}



