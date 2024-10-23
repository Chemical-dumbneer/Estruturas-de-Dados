#include <stdio.h>

int main(){
    int valorIni;
    int i;
    printf("\n[1] - Faca um programa que leia um numero e calcule o seu fatorial.\n");
    printf("\nInsira um numero inteiro para que calculemos seu fatorial: -> ");
    scanf("%d", &valorIni);

    int valorFim = 1;
    for (i = 1; i <= valorIni; i++)
    {
        valorFim *= i;
    }
    

    printf("\n\nO fatorial de %d e %d.", valorIni, valorFim);
};
