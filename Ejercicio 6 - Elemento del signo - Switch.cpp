//Indicar el elemento del signo ingresando un entero - Version con swtich
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main (void){
	
//Variable

    int signo;

//Ingreso de datos
    
    printf("\n\t Signo \t\t n%cmero",163);
    printf("\n\t Aries \t\t   1");   
    printf("\n\t Tauro \t\t   2");
    printf("\n\t Geminis \t   3");  
    printf("\n\t Cancer \t   4");
    printf("\n\t Leo \t\t   5"); 
    printf("\n\t Virgo \t\t   6");
    printf("\n\t Libra \t\t   7");
    printf("\n\t Escorpio \t   8");
    printf("\n\t Sagitario \t   9");
    printf("\n\t Capricornio \t   10");
    printf("\n\t Acuario \t   11");
    printf("\n\t Piscis \t   12");
    
    printf("\n\nPor favor ingrese un n%cmero del 1 al 12: ",163);
    scanf("%d",&signo);
    fflush(stdin);
    
//Salida de datos
    
    switch (signo){
    	
           case 1:
           case 5:
           case 9: 
		   
		   		printf("\nEl signo es de Fuego");
                break;
                
           case 2:
           case 6:
           case 10:
		   
		   		printf("\nEl signo es de Tierra");
                break;
                
           case 3:
           case 7:
           case 11:
		   
		   		printf("\nEl signo es de Aire");
                break;
                
           case 4:     
           case 8:
           case 12:
		   		
				printf("\nEl signo es de Agua");
                break;
                
           default:
		   		
				   printf("\nError, Ingrese un n%cmero del 1 al 12.",163);
           } 
                 
//Pausa y fin de programa

        printf("\n\n\n\n");
        system("pause");
        return 0;
        
}
