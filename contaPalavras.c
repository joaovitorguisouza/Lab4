/**
* Arquivo: contaPalavras.c
* Autor: Joao Vitor Guimaraes de Souza
* Matrícula: 12111EBI030
* Criado em: 11/12/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char frase[50];
    printf("\n Entre uma frase: ");
    gets(frase);

    int tam_str = strlen(frase);
    int num_palavras = 1;

    for(int i = 0; i < tam_str; i++)
        if(frase[i] == ' ')
            num_palavras++;

    printf("\nEsta frase tem %d palavras", num_palavras);
    return 0;
}
