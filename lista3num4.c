#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if((num % 5) == 0 ){
        printf("Esse numero é divisivel de 5");
    }
    else{
        printf("Não é divisivel de 5");
    }
}


