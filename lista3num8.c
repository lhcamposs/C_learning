#include <stdio.h>
#include <stdlib.h>

void main(){
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if(num > 20){
        printf("Numero maior do que 20");
    }
    else if(num == 20){
        printf("Igual a 20");
    }
    else{
        printf("Numero menor do que 20");
    }
}

