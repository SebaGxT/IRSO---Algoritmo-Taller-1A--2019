//Ingreso de tres números enteros, indicar cual es el mayor
//Librerias
#include<stdio.h>
#include<stdlib.h>

//Main
int main(void){

//Variables
    
	int n1,n2,n3;

//Ingreso de datos
    
    printf("Ingrese un n%cmero: ",163);
    scanf("%d",&n1);
	fflush(stdin);
    
    printf("\nIngrese el segundo n%cmero: ",163);
    scanf("%d",&n2);
    fflush(stdin);
    
    printf("\nIngrese el tercer n%cmero: ",163);
    scanf("%d",&n3);
    fflush(stdin);

//Salida de datos
  
	if(n1==n2&&n1==n3){
	
		printf("\nTodos los n%cmeros son iguales",163);	
	
		}else if(n1>n2&&n1>n3){
    	
    		printf("\nEl primer n%cmero es el mayor",163);
    	
			}else if(n2>n1&&n2>n3){
		
					printf("\nEl segundo n%cmero es el mayor",163);
		
				}else{
		
					printf("\nEl tercer n%cmero es el mayor",163);
		
				}

//Pausa y fin de programa
				   
	printf ("\n\n\n\n");
	system ("pause"); 
	return 0;
	
}
