//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones y Procedimientos

void pausar(){

	printf("\n\n\n\n");
	system("pause");

}


void buscarnro(int vec[],int cant,int n){
	
	bool valid=false;
	int i=0,c;
	                                        
    while(i<cant&&valid==false){
    	
    	if(n==vec[i]){
		
			valid=true;
			c=i;
			
		}
		
		i++;
    	
	}
	
	if(valid){
	
		printf("\nEl n%cmero %d se encuentra en la casilla %d ",163,n ,c);
		
	}else{
	
		printf("\nEl n%cmero no se encuentra\n\n",163);
	
	}
	
}

bool buscanro(int vec[],int cant,int n){
	
	bool valid=false;
	int i=0;
	                                        
    while(i<cant&&valid==false){
    	
    	if(n==vec[i]){
		
			valid=true;
				
		}
		
		i++;
    	
	}
	
	return valid;
	
}

void CNE(char cade[], int &n){
	
	printf("\n%s",cade);
	fflush(stdin);
	scanf("%d",&n);
	
}

//Main
int main(){

//Variables
	
	const int N=10;
	int vec[N],num,i;
	bool val;

//Ingreso de datos
	
	for(i=0;i<N;i++){
		
		vec[i]=11-i;
		
	}
	
    CNE("Ingrese un valor entero: ",num);
    
//Proceso y salida de datos
	 
	buscarnro(vec,N,num);
	
	if(val=buscanro(vec,N,num)){
	
		printf("\nEl n%cmero %d se encuentra en el vector ",163);
		
	}else{
	
		printf("\nEl n%cmero no se encuentra en el vector\n\n",163);
	
	}

//Pausa y fin de programa

	pausar();
	return 0;

}

