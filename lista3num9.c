#include <stdio.h>
#include <stdlib.h>

void main(){
    int nascimento, anoAtual;
    
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    
    if(nascimento > 0 && nascimento <= anoAtual){
        printf("Sua idade é %d", anoAtual - nascimento);
    }
    else{
        printf("Temos um exterminador do futuro por aqui?? Data de nascimento invalida");
    }
}


