//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funciones y Procedimientos

void pausar(){

	printf("\n\n\n\n");
	system("pause");

}

//Main
int main(){

//Variables

	int x,cant,voc[5]={0,0,0,0,0};
    char cad[50];
	
//Ingreso de datos
	
	printf("Ingrese una palabra:");
    gets(cad);
    fflush(stdin);
    printf("\n\n");
    
    cant=strlen(cad);
	
//Proceso
	
	for(x=cant;x>0;x--){
		
		switch(cad[x]){
            
			case 'a': voc[0]++;
                      break;
        	case 'e': voc[1]++;
                      break;
        	case 'i': voc[2]++;
                      break;
        	case 'o': voc[3]++;
					  break;
       		case 'u': voc[4]++;
           			  break; 
           			  
		}
	
	}
	
//Salida de datos
	
	printf("a:");
    
	while(voc[0]>0){ 
	 
    	printf("*");                   
        voc[0]--;
        
    }
    
	printf("\n\n"); 
	                                        
    printf("e:");
    
    while(voc[1]>0){ 
	 
    	printf("*");                   
        voc[1]--;
        
    }
     
	printf("\n\n"); 
	 
    printf("i:");
     
    while(voc[2]>0){ 
	 
    	printf("*");                   
        voc[2]--;
        
    }
	  
    printf("\n\n");
     
    printf("o:");
     
    while(voc[3]>0){
	  
    	printf("*");                   
        voc[3]--;
        
    } 
    
    printf("\n\n");
    
    printf("u:");
    
    while(voc[4]>0){ 
	 
    	printf("*");                   
        voc[4]--;
        
    } 
	
//Pausa y fin de programa

	pausar();
	return 0;

}
