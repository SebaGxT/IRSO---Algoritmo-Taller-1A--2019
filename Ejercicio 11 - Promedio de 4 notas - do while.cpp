//Promedio de 4 notas
//Librerias
#include<stdio.h>
#include<stdlib.h>

//Main
int main(void){

//Variables
    
 int nota1,nota2,nota3,nota4;
 float prom;

//Ingreso de datos
	
	do{
		
		printf("\nIngrese su primera nota(0-100): ");   
		fflush(stdin);
		scanf("%d",&nota1);
		
		if(nota1<0||nota1>100){
			
			printf("\nValor ingresado no v%clido.\n",160)
			
		}
		
	}while((nota1<0)||(nota1>100));

	do{
		
		printf("\nIngrese su segunda nota(0-100): ");   
		fflush(stdin);
		scanf("%d",&nota2);
		
		if(nota2<0||nota2>100){
			
			printf("\nValor ingresado no v%clido.\n",160)
			
		}
		
	}while((nota2<0)||(nota2>100));
	
	do{
		
		printf("\nIngrese su tercer nota(0-100): ");   
		fflush(stdin);
		scanf("%d",&nota3);
		
		if(nota3<0||nota3>100){
			
			printf("\nValor ingresado no v%clido.\n",160)
			
		}
		
	}while((nota3<0)||(nota3>100));
	
	do{
		
		printf("\nIngrese su cuarta nota(0-100): ");   
		fflush(stdin);
		scanf("%d",&nota4);
		
		if(nota4<0||nota4>100){
			
			printf("\nValor ingresado no v%clido.\n",160)
			
		}
		
	}while((nota4<0)||(nota4>100));
	
//Proceso

	prom=(nota1+nota2+nota3+nota4)/4;

//Salida de datos

	if(prom>=91){
	
		printf("\nSu promedio es %.2f, tiene una A",prom);
	
	}else if(prom>=71){
		
		printf("\n su promedio es %.2f, tiene una B",prom);
		
	}else if(prom>=51){
		
		printf("\n su promedio es %.2f, tiene una C",prom);
		
	}else if(prom>=31){
		
		printf("\n su promedio es %.2f, tiene una D",prom);
		
	}else if(prom>=0){
		
		printf("\n su promedio es %.2f, tiene una E",prom);
		
	} 

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;

}                           
