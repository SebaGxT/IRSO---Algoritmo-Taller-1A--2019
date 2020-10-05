//Librerias
#include<stdio.h>
#include<stdlib.h>

//Funciones y procedimientos

void pausar(){
	
	printf("\n\n\n\n");
	system("pause");
	
}

void vec0(int vec[],int tamanio){
	
	int i;
	
	for(i=0;i<=tamanio;i++){
          
        vec[i]= 0;            
   
    }
	
}

void vecf0(float vec[],int tamanio){
	
	int i;
	
	for(i=0;i<=tamanio;i++){
          
        vec[i]= 0;            
   
    }
	
}

float divis_func(int n1, int n2){
	
	float nf1,nf2,res;
	
	nf1=abs(n1);
	nf2=abs(n2);
		
	res=nf1/nf2;

	if((n1<0)&&(n2>0)||(n1>0)&&(n2<0)){
		
		res=res*(-1);
		
	}
	
	return res;
	
}

//Main
int main(void){

//Variables
	const int N=2;
    int i,nvec[N],cont;
	float res;
	
	cont=0;
	
//Proceso
	
	//Asignacion e impresion de vectores
	
	//Asignacion de i
    for(i=0;i<N;i++){
          
        nvec[i]= i;
        printf("\n%3d", nvec[i]);  
		            
    }
    printf("\n---------------------------------");
    
    //Asignacion de 0 e impresion
    for(i=0;i<N;i++){
          
        nvec[i]= 0;
        printf("\n%3d", nvec[i]);            
   
    }
    printf("\n---------------------------------");
    
    //Asignacion de 1
    for(i=0;i<N;i++){
          
        nvec[i]= 1;
        printf("\n%3d", nvec[i]);            
    
	}
	printf("\n---------------------------------");
	
    //I * 2
    for(i=0;i<N;i++){
          
        nvec[i]= i*2;
        printf("\n%3d", nvec[i]);            
    
	}
	printf("\n---------------------------------");
	
    //Multiplicación y resta
    for(i=0;i<N;i++){
          
        nvec[i]= i*2-1;
        printf("\n%3d", nvec[i]);            
    
	}
	printf("\n---------------------------------");
	
	//Multiplicación 10
	for(i=0;i<N;i++){
          
        nvec[i]= i*10;
        printf("\n%3d", nvec[i]);            
    
	}
	printf("\n---------------------------------");
	
	//Resta
	for(i=0;i<N;i++){
          
        nvec[i]= i-5;
        printf("\n%3d", nvec[i]);            
    
	}
	printf("\n---------------------------------");
	
	//vector en 0
	vec0(nvec,N);
	
	//Lectura en vector, acumulación e impresión
	for(i=0;i<N;i++){
        
        printf("\n\nIngrese un numero: ");
        fflush(stdin);
        scanf("%d",&nvec[i]);
        printf("\n\n El numero es: %d ", nvec[i]);
        printf("\n---------------------------------");
        nvec[N]+=nvec[i];            
    
	}
    
	printf("\n\nLa suma total es: %d", nvec[N]);
	printf("\n---------------------------------");
	
	//vector en 0
	vec0(nvec,N);
	
	//Lectura en vector, acumulación, promedio e impresión
	for(i=0;i<N;i++){
          
        printf("\n\nIngrese un numero: ");
        fflush(stdin);
        scanf("%d",&nvec[i]);
        printf("\n\nEl numero es: %d\n\n", nvec[i]);
        printf("\n---------------------------------");
        
		if (nvec[i]%2!=0){
            
			cont++;
            nvec[N]=nvec[i]+nvec[N];
            
        }
                         
    }
    
    res=nvec[N];
    
    if(cont>0){
    	
    	printf("\n\nEl promedio de impares es: %.2f\n\n", res/cont);
    	printf("\n---------------------------------");
    	
	}else{
		
		printf("\n\nNo ingresaron impares\n\n");
		printf("\n---------------------------------");
		
	}
		
	//vector en 0
	vec0(nvec,N);
	cont=0;
	
	//Lectura en vector y porcentaje de impares
	for(i=0;i<N;i++){
          
        printf("\n\nIngrese un numero: ");
        fflush(stdin);
        scanf("%d",&nvec[i]);
        printf("\n\nEl numero es: %d\n\n", nvec[i]);
        printf("\n---------------------------------");
        if (nvec[i]%2==1){
        	
        	cont++;
        	
		}
              
    }
    
    if(cont>0){
    	
    	printf("\n\nEl porcentaje de impares es: %d\n\n",cont*100/N );
    	printf("\n---------------------------------");
    	
	}else{
		
		printf("\n\nNo ingresaron impares\n\n");
		printf("\n---------------------------------");
		
	}
	
	//vector en 0
	vec0(nvec,N);
	
	//Lectura en vector, acumulación, impresión de suma y division de ultimas dos posiciones de vector
	for(i=0;i<=N;i++){
          
        printf("\n\nIngrese un numero %d:  ", i);
        fflush(stdin);
        scanf("%d",&nvec[i]);
        printf("\n\nEl numero es: %d", nvec[i]);
        printf("\n---------------------------------");
                         
    }
    
    printf("\n\nLa suma del ante%cltimo y %cltimo es: %d",163,163,nvec[N-1]+nvec[N]);
    res=divis_func(nvec[N-1],nvec[N]);
	printf("\n\nLa division es: %.2f",res);
   

//Pausa y fin de programa
   
	pausar();
    return 0;

}
