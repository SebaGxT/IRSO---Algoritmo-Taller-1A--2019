//Leer un número entero y visualizar si pertenece al intervalo [0-100]
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main (void){

//Variables

	int n1;

//Ingreso de datos

	printf("\nIngrese un n%cmero entero: ",163);
	fflush(stdin);
	scanf("%d",&n1);

//Salida de datos

	if(n1>=0&&n1<=100){
		
		printf("\nEl n%cmero ingresado pertenece al intervalo [0-100]",163);
		
	}else{
		
		printf("\nEl n%cmero ingresado no pertenece al intervalo [0-100]",163);	
		
	} 
 
//Pausa y fin de programa
   
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
