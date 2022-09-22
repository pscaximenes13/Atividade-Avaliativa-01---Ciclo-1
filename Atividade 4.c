#include <stdio.h>

int main()
{   
    int numero;
    printf ("Digite aqui um numero inteiro: ");
    scanf("%d",&numero);
    
   
    while(numero>=0){
        printf ("%d \n", numero);
        
        numero=numero-1;
    }
    
    return 0;
 
}


