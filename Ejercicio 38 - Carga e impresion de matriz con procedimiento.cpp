//Librerias
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define FIL 5
#define COL 5

//Funciones y procedimientos
void pausar(){
	
	printf("\n\n\n\n");
	system("pause");
	
}

bool verifica_nummat(int mat[COL][FIL],int n){
	
	for(int c=0;c<COL;c++){
		
		for(int f=0;f<FIL;f++){
			
			if(n==mat[c][f]){
				
				return false;
				
			}
			
		}
		
	}
	
	return true;
	
}

void carga_matriz(int m[COL][FIL]){
	
	int n;
	
	srand(time(NULL));
		
	for(int c=0;c<COL;c++){
		
		for(int f=0;f<FIL;f++){
			
		/*	printf("\n\nIngrese el valor de la posicion c%d f%d: ",c+1,f+1);
			scanf("%d",&n);
			fflush(stdin);
			m[c][f]=n;*/
			
			n=rand()%101;
			
			while(verifica_nummat(m,n)==false){
				
				n=rand()%101;
				
			}
			m[c][f]=n;
			
		}
		
	}
        
}

void visualizar_matriz(int m[COL][FIL]){
	    
	for(int c=0;c<COL;c++){ 
		
		for(int f=0;f<FIL;f++){
			
			printf("%4d",m[c][f]);	
			
		}
		
		printf("\n");
        
    }
    
}

void traspasar_matriz(int m1[COL][FIL],int m2[COL][FIL]){
		  
	for(int c=0;c<COL;c++){
		
		for(int f=0;f<FIL;f++){
			
			m2[c][f]=m1[c][f];
					
		}
         
	}
        
}

void transponer_matriz(int m1[COL][FIL],int m2[COL][FIL]){
	
	int m3[COL][FIL];
	
	for(int c=0;c<COL;c++){
		
		for(int f=0;f<FIL;f++){
			
			m3[c][f]=m1[c][f];
			m1[c][f]=m2[c][f];
			m2[c][f]=m3[c][f];
					
		}
         
	}
	
}

//Main
int main(){

//Variables
	
	int mat1[COL][FIL],mat2[COL][FIL];
	
	carga_matriz(mat1);
	traspasar_matriz(mat1,mat2);
	carga_matriz(mat1);
	
	printf("Matriz 1\n\n");
	visualizar_matriz(mat1);
	printf("\n\nMatriz 2\n\n");
	visualizar_matriz(mat2);
	transponer_matriz(mat1,mat2);
	printf("\n\nMatriz 1\n\n");
	visualizar_matriz(mat1);
	printf("\n\nMatriz 2\n\n");
	visualizar_matriz(mat2);

	pausar();
	return 0;
	
}  
