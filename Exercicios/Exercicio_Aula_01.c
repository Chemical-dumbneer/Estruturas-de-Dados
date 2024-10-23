#include <stdio.h>
#include <math.h>
#include <string.h>

void ex01(){
    int valorIni;
    printf("\nInsira um numero inteiro para que calculemos seu fatorial: ->");
    scanf("%d",valorIni);

    long valorFim = 1;
    for (long i = 1; i <= valorIni ; i++)
    {
        valorFim = valorFim * i;
    }

    printf("\nO fatorial de %d e %d.", valorIni, valorFim);
};

void ex02(){
    char texto[50];
    int isPalin = 1;
    printf("\nInsira um texto ou palavra: ->");
    fgets(texto, sizeof(texto), stdin);

    for (int i = 0; i < floor(strlen(texto)/2)-1; i++)
    {
        if (texto[i]!=texto[strlen(texto)-i])
        {
            isPalin = 0;
            break;
        }
    }
    if (isPalin)
    {
        printf("\nO texto/Palavra inserida e um palindromo.");
    } else {
        printf("\nO texto/Palavra inserida NAO e um palindromo.");
    }
}

void ex03(){
    char texto[50];

    printf("\nInsira um texto ou palavra: ->");
    fgets(texto, sizeof(texto), stdin);

    int numDeUns = 0;
    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto[i]=="1")
        {
            numDeUns++;
        }
    }

    printf("\nHaviam %d numeros 1's no texto informado.");
}

void ex04(){
    char textoIn[50];
    char textoOut[50];
    int j = 0;

    printf("\nInsira um texto ou palavra: ->");
    fgets(textoIn, sizeof(textoIn), stdin);

    for (int i = 0; i < strlen(textoIn); i++)
    {
        if (strchr("aeiou", textoIn[i]) == NULL)
        {
            textoOut[j]=textoIn[i];
            j++;
        }
    }

    printf("\nSegue sua String sem as vogais: %s", textoOut);
}

void ex05(){
    char textoIn[50];
    char textoOut[50];
    int j = 0;

    printf("\nInsira um texto ou palavra: ->");
    fgets(textoIn, sizeof(textoIn), stdin);
}

int main() {

    int exercicio;
    char resp;
    int sair = 0;

    do
    {
        printf("\nEscolha qual exercicio rodar:");
        printf("\n[1] - Faca um programa que leia um numero e calcule o seu fatorial.");
        printf("\n[2] - Faca um programa que leia uma string e informe se ela e um palindromo.");
        printf("\n[3] - Faca um programa que conte o numero de uns que aparecem em um string. Exemplo: (0011001) -> 3");
        printf("\n[4] - Faca um programa que receba do usuario uma string. O programa imprime a string sem suas vogais.");
        printf("\n[5] - Escreva um programa para converter uma cadeia de caracteres de letras maiusculas em letras minusculas.");
        printf("\nDigite o numero do exercicio correspondente :-> ");
        scanf("%d", exercicio);

        switch (exercicio)
        {
        case 1:
            ex01();
        case 2:
            ex02();
        case 3:
            ex03();
        case 4:
            ex04();
        case 5:
            ex05();
        default:

            printf("O indice selecionado nao corresponde a nenhum exercicio mencionado.");
        }

        printf("\n\nDeseja rodar outro exercicio?\n\n\t[S] - Sim\t[N] - Não");
        scanf("%c",resp);
        if (resp == "S" || resp == "s")
        {
            sair = 0;
        } else {
            sair = 1;
        }
    } while (sair = 0);



    return 0;
}
