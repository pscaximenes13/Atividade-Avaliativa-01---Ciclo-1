#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char nome[100];
    char email[100];
    char telefone[100];
    
    int tamanhoNome;
    int tamanhoEmail;
    int tamanhoTelefone;
    
    printf("Digite aqui o seu nome: ");
    scanf("%s", &nome);
    tamanhoNome = strlen (nome);
    
    printf("Digite aqui o seu email: ");
    scanf("%s", &email);
    tamanhoEmail = strlen (email);
    
    printf ("Digite aqui o seu telefone: ");
    scanf ("%s", &telefone);
    tamanhoTelefone = strlen (telefone);
    
    printf ("\nSeu nome possui %d digitos.\n ", tamanhoNome);
    printf ("\nSeu email possui %d digitos.\n  ", tamanhoEmail);
    printf ("\nSeu telefone possui %d digitos.\n  ", tamanhoTelefone);

    return 0;
}
