#include <stdio.h>
#include <stdlib.h>

void main(){
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if((num % 3) == 0 && (num % 7) == 0){
        printf("Esse numero é divisivel de 3 e 7");
    }
    else{
        printf("Esse numero não é divisivel de 3 e 7");
    }
}


