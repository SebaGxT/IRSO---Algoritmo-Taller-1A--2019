//leer 3 numeros enteros y visuzalizarlos ordenados de menor a mayor
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main (void){

//Variables

	int a,b,c;

//Ingreso de datos

	printf("\nIngrese el primer n%cmero: ",163);
	fflush(stdin);
	scanf("%d",&a);

	printf("\nIngrese el segundo n%cmero: ",163);
	fflush(stdin);
	scanf("%d",&b);

	printf("\nIngrese el tercer n%cmero: ",163);
	fflush(stdin);
	scanf("%d",&c);


//Salida de datos

	if(a<b&&a<c){
		
		 if(b<c){
		 	
		 	printf("\nEl orden es %d %d %d",a,b,c);
		 	
		 }else{
		
		printf("\nEl orden es %d %d %d",a,c,b);
		
		}
		
	}else if(b<a&&b<c){
		
		if(a<c){
			
			printf("\nEl orden es %d %d %d",b,a,c);
			
		}else{
			
			printf("\nEl orden es %d %d %d",b,c,a);	
			
		} 	
	}else if(c<a&&c<b){
		
		if(b<a){
			
			printf("\nEl orden es %d %d %d",c,b,a);
			
		}else{
			
			printf("\nEl orden es %d %d %d",c,a,b);
			
		} 
		
	} 
							
//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
