//Ingresar números enteros y mostrar el mayor
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main (void){
    
//Variables

    int num,may;

//Iniciación de variables en 0
	
	may=0;

//Ingreso de datos

    printf("Ingrese un n%cmero: ",163);
    scanf("%d",&num);
	fflush(stdin);
       
    while((num!=0)&&(num!=1)){
		if(num>may){
			
			may=num;	
			
		}

		printf("\nIngrese un n%cmero: ",163);
        scanf("%d",&num); 
		fflush(stdin);
              
  	
	  }
	  
//Salida de datos
      
	printf("\n\nEl mayor es: %d",may);    
    
//Pausa y fin de programa
   
    printf("\n\n\n\n");
    system("pause");
    return 0;

}
