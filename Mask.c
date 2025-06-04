#include "Mask.h"
#include <stdio.h>
     int main(){
        int num1 = 0, num2 = 0;
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);
        int resultado = somatorio(num1, num2);
        printf("A soma de %d e %d eh: %d\n", num1, num2, resultado);
        system("pause");
        return 0;
     }