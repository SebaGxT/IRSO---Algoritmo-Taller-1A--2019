//Mostrar series de números - for
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	
	int i,a,b;

//Ingreso de datos

	printf("\nIngrese la cantidad de serie que desea mostrar: ");
	scanf("%d",&a);
	fflush(stdin);

//Salida de datos
	
	for(i=0;i<=a;i++){
		
		b=2*i;
		printf("%d",b);
	
	}

//Pausa y fin de programa
	
	system("pause");
	printf("\n\n\n\n");
	return 0;
	
}
