#include <string.h>
#include <stdio.h>

int main() {

int tamanho, x;
char nome[30];

printf ("Informe um nome:\n");
gets(nome);

tamanho = strlen(nome);

printf("As letras na posicao impar sao: ");

 for (x=0; x<=tamanho; x++){
    if (x % 2 == 0) {
    printf(" %c ", nome[x]);
}
}

 printf("Nome digitado: %s",nome);

return 0;
}
