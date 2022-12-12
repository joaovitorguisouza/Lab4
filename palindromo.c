/**
* Arquivo: palindromo.c
* Autor: Joao Vitor Guimaraes de Souza
* Matrícula: 12111EBI030
* Criado em: 11/12/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void inverteString(char s1[], int t, char s2[])
{
    int i;
    int j = 0;
    for(i = t - 1; i >= 0; i--) { 
        s2[j] = s1[i];
        j++;
    }
    s2[j] = '\0';
}

int main()
{
    char s1[80];
    char s2[80];

    setlocale(LC_ALL, "Portuguese");
    printf("Mensagem: ");
    gets(s1);

    inverteString(s1, strlen(s1), s2);
    
    if(strcmp(s1, s2) == 0)
        printf("\n Palindromo: Verdadeiro");
    else
        printf("\n Palindromo: Falso");

    return 0;
}
