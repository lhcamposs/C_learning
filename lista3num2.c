#include <stdio.h>
#include <stdlib.h>

void main(){
    int n1, n2, result, result1, result2;
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &n2);
    
    result = n1 + n2;
    
    if (result > 20){
        result1 = result + 8;
        printf("Resultado: %d", result1);
    }
    else{
        result2 = result - 5;
        printf("Resultado: %d", result2);
    }
}
