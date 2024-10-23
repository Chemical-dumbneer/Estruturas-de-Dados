#include <stdio.h>

int main(){
    char texto[50];

    int cont1 = 0;
    printf("\n[3] - Faca um programa que conte o numero de 1s que aparecem em um string. Exemplo: (0011001) -> 3");
    printf("\nInsira a string: ->");
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
        printf("\n%c\t",texto[i]);
        if (texto[i] != '1')
        {
            printf("");
            //break;
        }else{
            printf("+1");
            cont1++;
        }
    }
    
    printf("\n\nExistem %d uns na string inputada.", cont1);
}
