//Ingreso de un número entero, indicar si termina en 23
//Librerias
#include<stdio.h>
#include<stdlib.h>

//Main
int main(void){

//Variables

    int n1;

//Ingreso de datos
    
    printf("Ingrese un n%cmero: ",163);
    fflush(stdin);
    scanf("%d",&n1);

//Salida de datos
    
    if(n1%100==23){
    	
    	printf("\nEl n%cmero ingresado termina en 23",163);
    	
	}else{
		
		printf("\nEl n%cmero ingresado no termina en 23",163);
		
	}   

//Pausa y fin de programa

	printf ("\n\n\n\n");
	system ("pause"); 
	return 0;
	
}
