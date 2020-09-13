//Suma de números par
//Librerias
#include <stdio.h>
#include <stdlib.h>

int main (void){

//Variables
	
    int num,aux,cont,par;
 
//Iniciación de variables en 0 
    
    cont=0;
	num=0;
    par=0;

//Ingreso de datos

	printf("Ingrese cantidad de valores: ");
	scanf("%d",&aux);
	fflush(stdin);
    
	while(cont<=aux){
	
		cont+=1;
    
		printf("\nIngrese un n%cmero: ",163);
    	scanf("%d",&num);
    	fflush(stdin);

//Proceso
    
		if(num%2==0){
		
			par+=1;
		
		}	
    
    }

//Salida de datos 
    
    printf("\nLa cantidad de pares ingresados es %d",par);
    
//Pausa y fin de programa
	   
    printf ("\n\n\n\n");
    system ("pause");
    return 0;
}
