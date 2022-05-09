#include <stdio.h>
#include <string.h>

int main () {

int i;
char nome[30];

printf("Digite o seu nome: \n");
gets (nome);

for (i=0; i<=3; i++) {
    printf("%c", nome[i]);
}

return 0;
}
