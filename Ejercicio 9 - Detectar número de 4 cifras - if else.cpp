//Ingresar dos valores enteros e indicar si es de 4 cifras
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
    
//Variables
        
	int n1, n2,suma;
	
//Ingreso de datos

	printf("\nIngrese el primer n%cmero: ",163);   
	fflush(stdin);
	scanf("%d",&n1);

	printf("\nIngrese el segundo n%cmero: ",163);
	fflush(stdin);
	scanf("%d",&n2);

//Proceso

	suma=n1+n2;

//Salida de datos

	if(suma<10000&&suma>999){
		
		printf("\nLa suma de ambos n%cmeros es de 4 cifras: %d",163,suma);	
		
	}else{
		
		printf("\nLa suma no es de 4 cifras.");
		
	}

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;

}    
