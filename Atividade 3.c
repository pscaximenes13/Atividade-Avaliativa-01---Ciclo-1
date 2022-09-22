#include <stdio.h>
#include <conio.h>

int main()
{
    int dia, mes, ano, resultado;
    printf ("Digite aqui a sua data de nascimento: ");
    scanf ("%d/%d/%d", &dia, &mes, &ano );
    
    resultado = dia*100+mes+ano;
    
    switch ( (resultado/100+resultado%100) %5) {
        
        case 0:printf("Timido");break;
        case 1:printf("Sonhador");break;
        case 2:printf("Paquerador");break;
        case 3:printf("Atraente");break;
        case 4:printf("Irressistivel");break;
        
    }
    
    return 0;
}
