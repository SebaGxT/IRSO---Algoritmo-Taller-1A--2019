//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funciones y Procedimientos

void pausar(){

	printf("\n\n\n\n");
	system("pause");

}

//Main
int main(){

//Variables

	char cad [30],cad2[30],cad3[30],fin[4];

//Ingreso de datos
	
	//Carga de cadena por copia
	strcpy (cad,"Lautaro correte a la izquierda");
             
    printf ("\nLa cadena de 30 caracteres es la siguiente: %s",cad);
	
	//Carga de cadena por lectura
	printf("\nIngrese una frase de 30 caracteres: ");
    gets(cad2);
	fflush(stdin); 
    printf ("\n%s",cad2);
    
//Proceso

	strcpy(fin, "FIN");
	printf("\n Ingrese una frase de 30 caracteres termina ingresando FIN: ");
    gets(cad); 
    printf ("\n%s",cad3);
             
    while(strcmp(cad,fin)!=0){
                
		printf("\n Ingrese una frase de 30 caracteres termina ingresando FIN: ");
        gets(cad3);
        printf("\n%s\n\n",cad3);
                
    } 

//Salida de datos

//Pausa y fin de programa

	pausar();
	return 0;

}  
