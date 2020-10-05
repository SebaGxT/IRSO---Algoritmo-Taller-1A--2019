//Librerias
#include<stdio.h>
#include<stdlib.h>

//Main
int main(){

//Variables
    int svec[10],i,cont;
    
	cont=0;

//Ingreso de datos   
	for(i=0;i<10;i++){
          
        printf("\n Ingrese un numero: ");
        scanf("%d",&svec[i]);
        fflush(stdin);
        printf("\n El numero es: %d ", svec[i]);

//Proceso          
		if (svec[i]%2==1){
			
			cont++;
			
		}
                         
    }

//Salida de datos

		printf("\n El porcentaje de impares es: %d ",cont*100/10 );
    
//Pausa y fin de programa
 
    printf("\n\n\n\n");
    system("pause");
    return 0;
    
}
