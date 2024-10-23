#include <stdio.h>

int main(){
    char texto[50];

    int isPalin = 1;
    printf("\n[2] - Faca um programa que leia uma string e informe se ela e um palindromo.");
    printf("\nInsira um texto ou palavra: ->");
    scanf("%50[^\n]",texto); // %50[^\n] vai receber qualquer conjunto de caracteres até o \0 (nulo) ou \n (enter?) - stack overflow

    //procurando o tamanho da string
    int i = 0;
    while (texto[i] != '\0')
    {
        //printf("\n%d \t %c", i, texto[i]);
        i++;
    }
    
    int tamTexto = i*1; //por algum motivo quando não efetuada a operação o programa começa a ler memória que não deveria.
   
    for (i = 0; i < tamTexto; i++)
    {
        printf("\n%c\t%c\t",texto[i],texto[tamTexto - i -1]);
        if (texto[i] != texto[tamTexto - i -1])
        {
            printf("X");
            isPalin = 0;
            //break;
        }else{
            printf("O");
        }
    }
    
    if (isPalin == 1)
    {
        printf("\n\nO texto inputado e um palindromo.");
    } else {
        printf("\n\nO texto inputado NAO e um palindromo.");
    }
}
