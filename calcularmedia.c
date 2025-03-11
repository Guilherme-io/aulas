#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    float media;

    printf("**Programa calculo de média \n");
    printf("digite a sua primeira nota: \n");
    scanf("%f", &nota1);
    
    printf("digite a sua segunda nota: \n");
    scanf("%f", &nota2);
    
    printf("digite a sua terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("a media é: %.1f", media);

    return 0;










}


