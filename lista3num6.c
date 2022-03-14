#include <stdio.h>
#include <stdlib.h>

void main(){
    int salario, prestacao;

    printf("Informe seu salario: ");
    scanf("%d", &salario);
    printf("\nInforme a quantidade de prestações: ");
    scanf("%d", &prestacao);
    
    if (prestacao <= (salario * 0.3)){
        printf("Emprestimo concedido.");
    }
    else{
        printf("Emprestimo não concedido");
    }
}

