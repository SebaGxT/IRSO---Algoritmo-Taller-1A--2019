/*
(1) leer un numero entero, visualizar si es positivo, negativo o neutro
(2) leer un numero entero, visualizar si es par impar o neutro
(3) leer un numero entero, visualizar si es multiplo de 3 y no de 7
(4) leer un numero entero,, visualizar si pertenece al intervalo 0-100
*/
//Librerias
#include<stdio.h>
#include<stdlib.h>

//Main
int main (void){

//Variables

 	int numEntero;

//Ingreso de datos

	printf("Ingrese n%cmero entero: ",163);
	scanf("%d",&numEntero);
	fflush(stdin);

//Salida de datos	
	
	if(numEntero==0){
		
			printf("\nEl n%cmero es neutro.",163);
			printf("\nEl n%cmero pertenece al rango 0-100.",163);
		
		}else if(numEntero>0){
			
				printf("\nEl n%cmero es positivo.",163);
				
				if(numEntero%2==0){
					
					printf("\nEl n%cmero es par.",163);
					
				}else{
					
					printf("\nEl n%cmero es impar.",163);
					
				}
				
				if(numEntero%3==0&&numEntero!=0){
					
					printf("\nEl n%cmero es m%cltiplo de 3.",163,163);
					
				}
				
				if(numEntero%7==0&&numEntero!=0){
					
					printf("\nEl n%cmero es m%cltiplo de 7.",163,163);
					
				}
				
				if(numEntero>=0&&numEntero<=100){
					
					printf("\nEl n%cmero pertenece al rango 0-100.",163);
					
				}else{
					
					printf("\nEl n%cmero esta fuera del rango 0-100.",163);
					
				}
				
			}else{
		
				printf("\nEl n%cmero es negativo.",163);
				
				if(numEntero%2==0){
					
					printf("\nEl n%cmero es par.",163);
					
				}else{
					
					printf("\nEl n%cmero es impar.",163);
					
				}
				
				if(numEntero%3==0&&numEntero!=0){
					
					printf("\nEl n%cmero es m%cltiplo de 3.",163,163);
					
				}
				
				if(numEntero%7==0&&numEntero!=0){
					
					printf("\nEl n%cmero es m%cltiplo de 7.",163,163);
					
				}
				
				if(numEntero>=0&&numEntero<=100){
					
					printf("\nEl n%cmero pertenece al rango 0-100.",163);
					
				}else{
					
					printf("\nEl n%cmero esta fuera del rango 0-100.",163);
					
				}
		
			} 

//Pausa y fin de programa
 	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}

