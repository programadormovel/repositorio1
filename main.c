#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char *nome;
	nome = malloc(10);
	free(nome);
	
    printf("Entre com um texto qualquer: ");
    fgets(nome, 10, stdin);
 
 	printf("\n %s \n", nome);   
    printf("\n %p \n", *nome);
    printf("\n %d \n", sizeof(*nome));
    printf("\n %d \n", sizeof(nome));
    printf("\n %d \n", strlen(nome));
    printf("\n %p \n", &nome);
    printf("\n %p \n", &nome);
	
	free(nome);
	
	return 0;
}