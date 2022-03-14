#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num, resul;
    printf("Informe o numero: ");
    scanf("%d", &num);
    
    if (num > 20){
        resul = num * 2;
    }
    else{
        resul = num * 4;
    }
    printf("Resultado: %d", resul);
}


