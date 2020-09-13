//Búsqueda mayor for
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
    
//Variables
    
    int i,num, may;
    
//Ingreso de datos
    
	printf("Ingrese el n%cmero: ",163);              
    scanf("%d",&num);
    fflush(stdin);
    
    may=num;
    
    for(i=1;i<=9;i++){
		
		printf("\nIngrese el n%cmero: ",163);
        scanf("%d",&num);
        fflush(stdin);
        
        if(num>may){
        	
        	may=num;	
        	
		}
    
	}
	
//Salida de datos
	
	printf("\n\nEl n%cmero mayor es: %d",163, may);

//Pausa y fin de programa
       
    printf("\n\n\n\n");
    system("pause");
    return 0;
    
}
