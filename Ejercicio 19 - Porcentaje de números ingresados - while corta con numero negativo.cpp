//Porcentaje de números ingresados
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
    
//Variables
    
    int num1,numcont,cont;
    float porc;
    
//Iniciación de variables en 0
	
	numcont=0;
	cont=0;

//Ingreso de datos

    printf("Ingrese un n%cmero: ",163);
    scanf("%d",&num1);
    fflush(stdin);
   if(num1>=0){
   		while(num1>=0){
    	
    		numcont++;
    	
    		if(num1>0){
    		
    			cont++;
    		
			}
    	
			printf("\nIngrese un n%cmero: ",163);
    		scanf("%d",&num1);
    		fflush(stdin);
    	
    	}

//Proceso
  
   		porc=cont*100/numcont;

//Salida de datos

    	printf("\n\nEl porcentaje es: %.2f ",porc);
   	
   }else{
   	
   		printf("\n\nFinalizo el programa sin ingresos");
   	
   }  
     
//Pausa y fin de programa
    
    printf("\n\n\n\n");
    system("pause");
    return 0;

    }
