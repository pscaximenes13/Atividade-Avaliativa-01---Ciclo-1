#include <stdio.h>

int main()
{
    int i, numero;
    printf("Digite aqui o numero inteiro que voce deseja: ");
    scanf("%d", &numero);
    printf("\nTabuada do: %d\n ", numero);
    for(i = 1; i <=10; i++){
    printf("%dx%d = %d\n", numero, i, i * numero);
    }

    return 0;
}