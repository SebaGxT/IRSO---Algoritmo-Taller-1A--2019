//Ingresar un signo e indicar a que elemento pertenece
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main (void){

//Variables

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

    if(signo==1||signo==5||signo==9){
    	
    	printf("\nEl signo es de Fuego");
    	
	}else if(signo==2||signo==6||signo==10){
		
		printf("\nEl signo es de Tierra");
		
	}else if(signo==3||signo==7||signo==11){
		
		printf("\nEl signo es de Aire");
		
	}else if (signo==4||signo==8||signo==12){
		
		printf("\nEl signo es de Agua"); 
		
	}else{
		
		printf("\nEl n%cmero ingresado es incorrecto.",163);
		
	} 
                 
//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
