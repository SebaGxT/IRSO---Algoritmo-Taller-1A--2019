#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Rango de edad y peso
//Edad 0-5 6-10 11-25 26-50 50+
//Peso 0-15 16-30 31-50 51-80 80+

//Estructura principal

int main(void){
	
//Declaracion de variables
	const int FIL=5,COL=5;
	int matriz[FIL][COL], edad, peso, conttotal=0,contcol2=0,contfil3=0,contaux=0,f=0,c=0;
	float porcentaje;
	char x;
	bool valid;
	
	valid=false;
	
//Matriz en cero

	for(f=0;f<FIL;f++){
		for(c=0;c<COL;c++)
		matriz[f][c]=0;
	}
	
//Validación para iniciar la carga	
	printf("%cDesea cargar una persona%c S/N: ",168,63);
	scanf("%c",&x);
	fflush(stdin);
				
	if(x=='N'||x=='n'){
			
		valid=true;
			
	}
	
	if(valid==false){
		
		while(valid==false){
						
//Carga de datos
			printf("\nIngrese la edad:");
			scanf("%d",&edad);
			fflush(stdin);
			printf("\nIngrese el peso:");
			scanf("%d",&peso);
			fflush(stdin);
				
//Suma 1 persona al contador total
			conttotal++;
			
		
// Suma de persona en rango de edad	
			if(edad>=50){
				
				c=4;
				
			}else if(edad>=26 && edad<50){
				
				c=3;
				
			}else if(edad>=11 && edad<26){
				
				c=2;
				
			}else if(edad>=6 && edad<11){
				
				c=1;
				
			}else{
				
				c=0;
					
			} 
		
// Suma de persona en rango de peso
			if(peso>=80){
				
				f=4;
					
			}else if(peso>=51 && peso<80){
				
				f=3;
				
			}else if(peso>=31 && peso<51){
				
				f=2;
				
			}else if(peso>=16 && peso<31){
				
				f=1;
				
			}else{
				
				f=0;
				
			} 
							
			matriz[f][c]++;				
	
//Validación para continuar		
			printf("%cDesea cargar una persona%c S/N: ",168,63);
			scanf("%c",&x);
			fflush(stdin);
				
		if(x=='N'||x=='n'){
			
			valid=true;
			
		}
	
	}
	
	printf("\n\n");
	
//Mensajes de salida

//Matriz
		for(f=0;f<FIL;f++){
			
			for(c=0;c<COL;c++){
				printf("%3d",matriz[f][c]);
			}
			
			printf("\n");
			
		}

//Porcentaje de personas entre 6 y 10 años
		for(f=0;f<FIL;f++){
			
			contcol2=contcol2+matriz[f][1];
			
		}
			porcentaje=contcol2*100/conttotal;
			printf("\n El porcentaje de personas entre 6 y 10 a%cos es: %.2f",164,porcentaje);
		
//Porcentaje de personas entre 31 y 50 kilos
		for(c=0;c<COL;c++){
			
			contfil3=contfil3+matriz[2][c];
			
		}
			porcentaje=contfil3*100/conttotal;
			printf("\n El porcentaje de personas entre 31 y 50 kilos es: %.2f",porcentaje);
			
//Porcentaje de personas entre 16 y 30 kilos que tengan entre 11 y 25 años
		porcentaje=matriz[1][2]*100/conttotal;
		printf("\n El porcentaje de personas entre 16 y 30 kilos que tienen entre 11 y 25 a%cos es: %.2f",164,porcentaje);
	
//Porcentaje de personas entre 16 y 80 kilos que tengan entre 6 y 50 años
		for(f=1;f<FIL;f++){
			
			for(c=1;c<COL;c++){
				
				contaux=contaux+matriz[f][c];
				
			}
			
		}
		
		porcentaje=contaux*100/conttotal;
		printf("\n El porcentaje de personas entre 16 y 80 kilos que tienen entre 6 y 50 a%cos es: %.2f",164,porcentaje);
	
		printf("\n\nLa cantidad de personas ingresadas es: %d",conttotal);
							
	}else{
		
		printf("\n\nSe finalizo el programa sin carga de datos.\n\n");
		
	}
				
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
