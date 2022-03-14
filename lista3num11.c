#include <stdio.h>
#include <stdlib.h>

void main(){
    int n1, n2, n3;
    
    printf("Digite um primeiro numero: ");
    scanf("%d", &n1);
    printf("\nDigite um segundo numero: ");
    scanf("%d", &n2);
    printf("\nDigite um terceiro numero: ");
    scanf("%d", &n3);
    
    if(n1 > n2 && n1 > n3){
        printf("O maior numero é: %d", n1);
    }
    else if(n2 > n1 && n2 > n3){
        printf("O maior numero é: %d", n2);
    }
    else{
        printf("O maior numero é: %d", n3);
    }
}

