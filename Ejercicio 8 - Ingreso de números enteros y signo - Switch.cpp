//Ingresar números enteros y signo, para sumar, restar, multiplicar o dividir
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main (void){
    
//Variables
	
	int n1,n2;
    char signo;

//Ingreso de datos

    printf("\nIngrese n%cmero 1: ",163);
    scanf("%d",&n1);
    fflush(stdin);
    
    printf("\nIngrese n%cmero 2: ",163);
    scanf("%d",&n2);
    fflush(stdin);
    
    printf("\nPor favor ingrese +, -, * o / segun la operacion que desea realizar: ");
    fflush(stdin);
    scanf("%c",&signo);
 
//Salida de datos
   
    switch (signo){
           case '+': 
		   			
				printf("\n La suma es: %d", n1+n2);
                break;
                
           case '-': 
		   
		   		printf("\n La resta es: %d", n1-n2);
                break;
                
           case '*': 
		   
		   		printf("\n La multiplicación es: %d", n1*n2);
                break;
                
          case '/':
		  
		  		 if(n2!=0){
		  		 	
		  		 		printf("\n La division es: %d", n1/n2);
		  		 	
				   }else{
				   	
				   		printf("\n Syntax Error");
				   	
				   }
                 break; 
				        
           default: 
		   
		   		printf("\n Error");

           }
 
 //Pausa y fin de programa
    
                 printf("\n\n\n\n");
                 system("pause");
                 return 0;
                 
}    
