#include <stdio.h>
#include <stdlib.h>

void main(){
    int idade;
    
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    
    if(idade >= 65){
        printf("É maior de 65.");
    }
    else if(idade >= 18){
        printf("É maior de idade.");
    }
    else{
        printf("É menor de idade.");
    }
}

