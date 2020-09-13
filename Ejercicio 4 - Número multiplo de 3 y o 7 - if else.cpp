//Visualizar un número entero y decir si es o no múltiplo de 3 y si es o no múltiplo de 7 
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

	if(n1%3==0){
		
		printf("\nEl n%cmero ingresado es m%cltiplo de 3",163,163);
		
	}else{
		
		printf("\nEl n%cmero ingresado no es m%cltiplo de 3",163,163);	
		
	} 
    
	if(n1%7==0){
		
		printf("\nEl n%cmero ingresado es m%cltiplo de 7",163,163);
		
	}else{
		
		printf("\nEl n%cmero ingresado no es m%cltiplo de 7",163,163);
		
	} 
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	    

}
