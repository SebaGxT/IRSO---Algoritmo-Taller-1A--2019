//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones y procedimientos
void pausar(){
	
	printf("\n\n\n\n");
	system("pause");
	
}


//Main
int main(void){

//Variables

	const int PART=7;
	int i,partidos[PART],partgan[PART],conttotal,voto,mayor,cont,pos;
	char x;
	bool valid,valid2;
	
	valid=false;
	conttotal=0;
	cont=0;
	mayor=0;
	
	for(int i=0;i<PART;i++){
		
		partidos[i]=0;
		partgan[i]=0;
		
	}
	
//Ingreso de datos
	
	while(valid==false){
		
		valid2=false;
		
		do{
			
			//Carga de datos
			printf("\n\nVoto n%cmero %d",163,conttotal+1);
			printf("\nIngrese el partido a votar: ");
			scanf("%d",&voto);	
			fflush(stdin);
				
			//Suma de votos	
			switch(voto){
			
				case 1:{
					
					partidos[0]+=1;
					valid2=true;
					break;
					
				}
				
				case 2:{
						
					partidos[1]+=1;
					valid2=true;
					break;
					
				}
				
				case 3:{
						
					partidos[2]+=1;
					valid2=true;
					break;
					
				}
				
				case 4:{
						
					partidos[3]+=1;
					valid2=true;
					break;
					
				} 
				
				case 5:{
						
					partidos[4]+=1;
					valid2=true;
					break;
					
				}
				
				case 6:{
					
					partidos[5]+=1;
					valid2=true;
					break;
					
				}
				
				case 7:{
						
					partidos[6]+=1;
					valid2=true;
					break;
					
				}	
				
				default: 
					
					printf("\n\nPartido ingresar incorrecto, vuelva a ingresar.\n\n");
					
			}
			
		}while(valid2==false);
			
		//Contador de total de votos			
		conttotal++;
	
		//Validación para continuar la carga de datos	
		printf("\n\n%cDesea contabilizar un voto%c S/N: ",168,63);
		scanf("%c",&x);
		fflush(stdin);
	
		if(x==78||x==110){
			
			valid=true;
			
		}
			
	}	

//Proceso
	
	//Conseguir el mayor voto
	for(i=0;i<7;i++){
		
		if(partidos[i]>=mayor){
			
			mayor=partidos[i];
			pos=i;
			
		}
				
	}
	
	//Identifica si hay empate
	for(i=0;i<7;i++){

		if(partidos[i]==mayor){
			
			switch(i+1){
				
				case 1:{
					
					partgan[0]=1;
					cont++;
					break;
					
				}
				
				case 2:{
						
					partgan[1]=1;
					cont++;
					break;
					
				}
				
				case 3:{
						
					partgan[2]=1;
					cont++;
					break;
					
				}
				
				case 4:{
						
					partgan[3]=1;
					cont++;
					break;
					
				} 
				
				case 5:{
						
					partgan[4]=1;
					cont++;
					break;
					
				}
				
				case 6:{
					
					partgan[5]=1;
					cont++;
					break;
					
				}
				
				case 7:{
						
					partgan[6]=1;
					cont++;
					break;
					
				}
				
			}
			
		}
		
	}
	
//Salida de datos

	for(i=0;i<7;i++){
		
		//Votos por partido
		printf("\nEl partido %d recibio: %d votos\n",i+1,partidos[i]);
		
	}
	
	//Votos totales
	printf("\n\nLa cantidad de votos contabilizados fueron: %d",conttotal);
	
	//Ganador o empate
	if(cont==1){
		
		printf("\n\nEl partido ganador es: %d",pos+1);
		
	}else{
		
		printf("\n\nLos partidos que empataron son: \n\n");
		
		for(i=0;i<7;i++){
			
			if(partgan[i]==1){
				
				printf("\nEl partido %d\n",i+1);
				
			}
			
		}
		
		printf("\n\nVan a segunda vuelta.\n\n");
		
	}

//Pausa y fin de programa

	pausar();
	return 0;
}
