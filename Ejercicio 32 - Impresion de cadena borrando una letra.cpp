//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones y Procedimientos

void pausar(){

	printf("\n\n\n\n");
	system("pause");

}

//Main
int main(){

//Variables
	
	int i,c=0;
    char cad[20];
	
//Ingreso de datos
	
	printf("Ingrese una palabra:");
    gets(cad);
    fflush(stdin);
	
//Proceso //Salida de datos
	
	//Impresion de cadena borrando una letra en cada renglon
/*	for(i=strlen(cad)-1; i>=0;i--){
		
		printf("%s\n",cad);
        cad[i]='\0';
    
	}*/
    
	c=strlen(cad);
	
	while(c>0){
		
		printf("%s\n",cad);    
		c--;
		cad[c]='\0';    
    
	}

//Pausa y fin de programa

	pausar();
	return 0;

}
