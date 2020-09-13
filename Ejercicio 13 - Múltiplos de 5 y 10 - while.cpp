//Números múltiplos de 5 y 10
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){

//Variables
 
    int num,cont,multi5,multi10;
        
//Iniciación de variables en 0
		
	cont=0;
	multi5=0;
	multi10=0;		

//Ingreso de datos

	printf("Ingrese un n%cmero: ",163);
	scanf("%d",&num);
	fflush(stdin);

	while(num!=0){ 
              
			  printf("\n\nEl n%cmero es: %d\n",num);             
             
		if(num!=0){
			
			 cont++; 
					
					 }
			
		if(num%5==0){
              	
             multi5++;
                       
                     }  
              
		if(num%10==0){
              	
             multi10++;
                        
                     }
                        
              printf("\nIngrese un n%cmero: ",163);
              scanf("%d",&num);   
              fflush(stdin);
      
              }   

//Salida de datos
              
	printf("\n\nCantidad de n%cmeros ingresados:%d ",163,cont);
    printf("\n\nLa cantidad de m%cltiplos de 5 son:%d ",163,multi5);
    printf("\n\nLa cantidad de m%cltiplos de 10 son:%d ",163,multi10);
    
//Pausa y fin de programa
   
    printf("\n\n\n\n");
    system("pause");
    return 0;

}
