//Sacar porcentaje - for
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){

//Variables
    
    int i,numcont,cont,num;
    float porc;
    
//Iniciación de variables en 0
	
	numcont=0;
	cont=0;
	
//Ingreso de datos
	
    for(i=1;i<=7;i++){
		
		printf("Ingrese el numero %d: ",i);              
        scanf("%d",&num);
        fflush(stdin);
        
        if(num>0){
        	
        	cont++;
        	
		}
		
        numcont++;    
	
	}
	
//Proceso

    porc=cont*100/numcont;
    
//Salida de datos
    
	printf("\n\nEl porcentaje es: %.2f ",porc);
    
//Pausa y fin de programa    
    
	printf("\n\n\n\n");
    system("pause");
    return 0;
    
}
