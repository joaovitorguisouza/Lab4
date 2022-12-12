#include <stdio.h>
#define N 1024

void getstr(char * str, long long int nchar);

int main(void) {
    char msg[N] = {'x','x','x','x','x'};
    printf("Entre com uma msg: ");
    getstr(msg, N);
    printf("%s\n", msg);
    printf("Entre com outra msg: ");
    getstr(msg, N);
    printf("%s\n", msg);
    return 0;
}

void getstr(char * str, long long int nchar) {
    char c;
    long long int i;
    for(i = 0; i < nchar && (c = getchar()) != '\n'; i++)
        str[i] = c;
    str[(i >= nchar) ? nchar - 1 : i] = '\0';
    if(i >= nchar) // precisa limpar o buffer do teclado
        while ((c = getchar()) != '\n' && c != EOF);
}