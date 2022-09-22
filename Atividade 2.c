#include <stdio.h>

int main()
{
    int i, n, termo1=1, termo2=1, proximoTermo;
    
    printf("Digite aqui a quantidade de termos: ");
    scanf("%i", &n);
    
    printf("\n SÉRIE DE FIBONACCI\n ");
    
    for(i= 1; i <= n; i++){
        
        printf("%i,", termo1);
        proximoTermo = termo1+termo2;
        termo1=termo2;
        termo2=proximoTermo;
        
    }
    

    return 0;
}
