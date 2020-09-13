//Multiple condicion y variable caracter
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
  
//Variables 
    
	int nrocliente;
	char tamanio;
	char sexo;
	char tipodepelo;

//Ingreso de datos

	printf("\nIngrese el n%cmero de cliente: ",163);   
	fflush(stdin);
	scanf("%d",&nrocliente);

	printf("\nIngrese el tamano de su animal(grande,mediano o chico): ");
	fflush(stdin);
	scanf("%c",&tamanio);

	printf("\nIngrese el sexo de su animal(macho o hembra): ");
	fflush(stdin);
	scanf("%c",&sexo);    
    
	printf("\nIngrese el tipo de pelo de su animal(corto,largo o enrulado): ");
	fflush(stdin);
	scanf("%c",&tipodepelo);

//Salida de datos

	if(tamanio=='g'&&sexo=='h'&&tipodepelo=='c'){
		
		printf("\nUsted se ha ganado un ba%co gratis para su mascota",164);
		
	}
 
//Pausa y fin de programa
   
	printf("\n\n\n\n");
	system("pause");
	return 0;

}
