//Ingreso de números enteros y búsqueda del menor
//Librerias
#include<stdio.h>
#include<stdlib.h>

//Main
int main(void){

//Variables
    
	int n1, n2;

//Ingreso de dato
    
    printf("Ingrese un n%cmero: ",163);
    scanf("%d",&n1);
    fflush(stdin);
    
    printf("/nIngrese el segundo n%cmero: ",163);
    scanf("%d",&n2);
    fflush(stdin);

//Salida de datos    
    
    if(n1<n2){
    	
    	printf("\n%d es menor que %d",n1,n2);
    	
	}else if(n2<n1){
		
		printf("\n%d es menor que %d",n2,n1);
		
	}else{
		
		printf("\nLos n%cmeros son iguales",163);
		
	}  

//Pausa y fin de programa

	printf ("\n\n\n\n");
	system ("pause"); 
	return 0;

}
