//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones y Procedimientos

void pausar(){

	printf("\n\n\n\n");
	system("pause");

}

//Main
int main(){

//Variables

	int vec1[10], vec2[15],vec3[25], i;

//Ingreso de datos 
	
	for(i=1;i<=10;i++){
    	
		vec1[i]=i;                  
    	printf("%3d",i);
    	
	}
 
	printf("\n\n"); 
            
	for(i=1;i<=15;i++){
   	
    	vec2[i]=i;
    	printf("%3d",i);        
    
	}
	
//Proceso	//Salida de datos
	
	printf("\n\n");       
                  
	for(i=1;i<=25;i++){
 	
 		if(i<=10){
 		
 			vec3[i]=vec1[i];
 		
		}else{
	 	
			vec3[i]=vec2[i-10];
	 	
		}
	  
  		printf("%3d",vec3[i]);
  
	}
	
//Pausa y fin de programa

	pausar();
	return 0;

}
