//leer un número entero y visualizar si es positvo, negativo o neutro
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main (void){

//Variables

	int n1;

//Ingreso de datos

	printf("\nIngrese un n%cmero entero: ",163);
	scanf("%d",&n1);
	fflush(stdin);
	
//Salida de datos

	if (n1==0){
		
		printf("\nEl n%cmero ingresado es neutro",163);
			
	}else if (n1>0){
		
		printf("\nEl n%cmero ingresado es positivo",163);
		
	}else{
		
		printf("\nEl n%cmero ingresado es negativo",163);
		
	} 

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;	    
}
