//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estructura
struct Datosalu{
    
	char nombre[30],apellido[30];
    int edad, nota1, nota2, nota3; 
	float promedio;       

};

//Funciones y Procedimientos

void pausar(){

	printf("\n\n\n\n");
	system("pause");

}

bool validedad(int ed){
    
    if(ed>0){
    	
    	return true;
    	
	}else{
		
		return false;
		
	}
    
}
    
bool validnota(int nota){
	
    if(nota>0&&nota<11){
    		
    	return true;
    		
	}else{
		
		return false;	
		
	} 
               
}

void promedionota(int n1,int n2,int n3,float &prom){
	
    prom=(n1+n2+n3)/3.0;
     
}
               
bool alumaprobados(float pro){
	
    if(pro>=4){
    	
    	return true;
    	
	}else{
		
		return false;
		
	}
   
}

bool cgomez(char go[]){
	
    bool valid;
    	
    if(strcmp("gomez",go)==0){
		
		valid=true;
		
	}
    
	return valid;
	 
}

//Main
int main(){

//Variables
	
	const int ALU=10;
	Datosalu alumnos,alum[ALU];
	char x,gome[30];
    int i,calu,gomez;
	float apro,pro;
	bool valid;
	
	calu=0;
	gomez=0;
	apro=0.0;
	valid=false;
  
//Ingreso de datos

	printf("Notas de alumnos\n\n");
	
	while(valid==false&&calu<10){
		
		printf("\n\nNombre de alumno: ");
		gets(alumnos.nombre);
		fflush(stdin);
	
		strcpy(alum[calu].nombre,alumnos.nombre);
		
		printf("\n\nApellido de alumno: ");
		gets(alumnos.apellido);
		fflush(stdin);
	
		strcpy(alum[calu].apellido,alumnos.apellido);
		
		if(cgomez(alumnos.apellido)){
			
			gomez++;
			
		}
		
		do{
			
			printf("\n\nEdad de alumno: ");
			scanf("%d",&alumnos.edad);
			fflush(stdin);
			
			if(validedad(alumnos.edad)==false){
				
				printf("\n\nEdad inv%clida, vuelva a ingresar.\n\n",160);
				
			}
			
		}while(validedad(alumnos.edad)==false);
		
		alum[calu].edad=alumnos.edad;
		
		do{
			
			printf("\n\nIngrese la nota 1: ");
			scanf("%d",&alumnos.nota1);
			fflush(stdin);
			
			if(validnota(alumnos.nota1)==false){
				
				printf("\n\nNota inv%clida, vuelva a ingresar.\n\n",160);
				
			}	
			
		}while(validnota(alumnos.nota1)==false);
		
		alum[calu].nota1=alumnos.nota1;
		
		do{
			
			printf("\n\nIngrese la nota 2: ");
			scanf("%d",&alumnos.nota2);
			fflush(stdin);
			
			if(validnota(alumnos.nota2)==false){
				
				printf("\n\nNota inv%clida, vuelva a ingresar.\n\n",160);
				
			}
			
		}while(validnota(alumnos.nota2)==false);
		
		alum[calu].nota2=alumnos.nota2;
		
		do{
			
			printf("\n\nIngrese la nota 3: ");
			scanf("%d",&alumnos.nota3);
			fflush(stdin);
			
			if(validnota(alumnos.nota3)==false){
				
				printf("\n\nNota inv%clida, vuelva a ingresar.\n\n",160);
				
			}
			
		}while(validnota(alumnos.nota3)==false);
		
		alum[calu].nota3=alumnos.nota3;
		
		promedionota(alumnos.nota1,alumnos.nota2,alumnos.nota3,alumnos.promedio);
		
		alum[calu].promedio=alumnos.promedio;
		
		calu++;
		
		printf("\n\n%cDesea ingresar otro alumno%c S/N: ",168,63);
		scanf("%c",&x);
		fflush(stdin);
		
		if(x==78||x==110){
			
			valid=true;
			
		}
		
	}
	
//Proceso
	
	for(i=0;i<calu;i++){
		
		pro=alum[i].promedio;
		
		if(pro>=4){
			
			apro++;
			
		}
		
	}
	
	pro=(apro/calu)*100;
	
//Salida de datos
	
	printf("\n\nCantidad de alumnos gomez: %d",gomez);
	printf("\n\nPorcentaje de alumnos aprobados: %c%.2f",37,pro);
	
//Pausa y fin de programa

	pausar();
	return 0;

}
