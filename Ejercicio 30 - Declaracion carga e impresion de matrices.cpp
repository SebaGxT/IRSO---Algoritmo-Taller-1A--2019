//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Funciones y Procedimientos

void pausar(){

	printf("\n\n\n\n");
	system("pause");

}

//Main
int main(){

//Variables
	const int FIL=6,COL=6;
	int m[FIL][COL],m2[FIL][COL],m3[FIL][COL],m4[FIL][COL],f,c,a;
	srand(time(NULL));
	a=1;
		
//Ingreso de datos
	
	//Carga e impresion de matriz en cero
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){ 
	 
			m[f][c]=0;
			printf("%2d", m[f][c]);
			
		} 
		
		printf("\n");
    
	}
	
	printf("\n\n");
	
	//Carga e impresion de matriz
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){ 
			
			m[f][c]= f;
			printf("%2d", m[f][c]);

		}
		 
		printf("\n");
    
	}
	
	//Carga por lectura e impresion de matriz 2
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){ 
			
			printf("\n ingrese un numero para la matriz fila %d columna %d: ",f+1,c+1);
            fflush (stdin);
            scanf("%d",&m2[f][c]);  
			          
            }
            
	}
 	
	printf("\n\n");
            
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
		
            printf("%2d", m2[f][c]);
            
            
        }
        
        printf("\n");
        
	}
    
	printf("\n\n");
            
    //impresion de fila fija        
	for(c=0;c<COL;c++){
		
		printf("%2d",m2[0][c]);
		
	}
            
    printf("\n\n");
    
    //Impresion de columna fija
    for(f=0;f<FIL;f++){
    	
    	printf("%2d",m2[f][1]);
    	
	}
	
	printf("\n\n");
	
	//Carga de matriz con enteros random impresion y diagonal principal
	for(f=0;f<FIL;f++){
		
    	for(c=0;c<COL;c++){
    		
    		m3[f][c]=rand()%10+0;
    		
		}
    		
	}
	
	printf("La matriz es: \n");
    
    for(f=0;f<FIL;f++){
    	
    	for(c=0;c<COL;c++){
    		
    		printf("%2d", m3[f][c]);
    		
		}
    
   		printf("\n");
   		
    }
    
    printf("\n\n");
    
    printf("\n\n La diagonal principal es: \n\n");
    
    for(f=0;f<FIL;f++){
    	
    	printf("%2d", m3[f][f]);
    	
	}
	
	printf("\n\n");
	
	printf("\n\n La Diagonal secundaria es: \n\n");
    
    for(f=0;f<FIL;f++){
    	
    	printf("%2d",m3[f][FIL-f]);
    	
	}
	
	printf("\n\n\n\n");
	
	//Suma de valores columna matriz con variable
	for(f=0;f<FIL;f++){
    	
		for(c=0;c<COL;c++){
			
			m[f][c]=c+a;
    			
			
		}
		
		a++;
	
	}
	
	for(f=0;f<FIL;f++){
    	
    	for(c=0;c<COL;c++){
    		
    		printf(" %3d",m[f][c]);
    		
		}
    		
    	printf("\n\n");
	
	}
	
	printf("\n\n");
	
	a=1;
	
	//Multiplicacion de valores columna matriz con variable
	for(f=0;f<FIL;f++){
		for(c=0;c<COL;c++){
			
			m[f][c]=c*a;
			
		}
		
		a++;

	}
    
    for(f=0;f<FIL;f++){
    	
    	for(c=0;c<COL;c++){
    		
    		printf(" %3d",m[f][c]);	
    		
		}
    
   		printf("\n\n");
	
	}
	
	printf("\n\n");
	
	//Carga e impresion de matriz superior 1 diagonal 0 inferior -1
	
	for(f=0;f<FIL;f++){
    	
    	for(c=0;c<COL;c++){
    		
    		if(f==c){
    			
    			m4[f][c]=0;
					
			}else if(f>c){
				
				m4[f][c]=-1;
				
			}else{
				
				m4[f][c]=1;	
				
			} 
    		
		}
    	
	}
	
	for(f=0;f<FIL;f++){
    	
    	for(c=0;c<COL;c++){
    		
    		printf("%3d",m4[f][c]);
    		
		}
    
    	printf("\n\n");
	
	}
	
//Pausa y fin de programa

	pausar();
	return 0;

}
