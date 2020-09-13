//leer un número entero y visualizar si es par impar o nuetro
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main (void){

//Variables

	int n1;

//ingreso de datos

	printf("\nIngrese un n%cmero entero: ",163);
	fflush(stdin);
	scanf("%d",&n1);

//Salida de datos

	if(n1==0){
		
		printf("\nEl n%cmero ingresado es neutro",163);
		
	}else if(n1%2==0){
    		
    		printf("\nEl n%cmero ingresado es par",163);
    		
		}else{
             	
           	printf("\nEl n%cmero ingresado es impar",163);
             		
				 }
             
//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
