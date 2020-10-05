//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Funciones y Procedimientos

void pausar(){

	printf("\n\n\n\n");
	system("pause");

}

void CNE(char cade[], int &n){
	
	printf("\n%s",cade);
	fflush(stdin);
	scanf("%d",&n);
	
}

//Main
int main(){

//Variables

	int vec1[10], vec2[10],vec3[10],vec4[20],n, i,spar,simpar;
	
	spar=0;
	simpar=0;
	
	srand(time(NULL));
	
//Ingreso de datos
	
	CNE("Ingrese un valor entero: ",n);

//Proceso
	
	//Imprime valor ingresado de positivo a negativo
	for (i=0;i<=10;i++){
    
		vec1[i]=n;
		printf("%d  ",vec1[i]);
		n-=1;
	    
	}
	
	printf("\n\n");
	
	//Imprime valor ingresado de negativo a positivo
	for(i=0;i<=10;i++){
	    
		vec2[i]=vec1[10-i];    
		printf("%d  ",vec2[i]);
	
	}
	
	printf("\n\n");
	
	//Suma de pares e impares valores en vector
	for (i=1;i<=10;i++){
	    
		vec3[i]=rand()%200+1;
		printf("\n%d",vec3[i]);
	
		if(i%2==0){
		
			spar+=vec3[i];
		
		}else{
		
			simpar+=vec3[i];
		
		}
	 
	}
	    
	printf("\n\n la suma de los pares es %d",spar);
	printf("\n\n la suma de los impares es %d",simpar);
	
	printf("\n\n");
	
	for(i=1;i<=20;i++){
	    
		if(i%2==0){
			
			vec4[i]=i/2;
			
		}else{
			
			vec4[i]=0;
			
		} 
		
		printf("%d  ",vec4[i]);
	
	}

//Salida de datos

//Pausa y fin de programa

	pausar();
	return 0;

}
