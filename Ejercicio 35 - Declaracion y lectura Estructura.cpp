//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estructuras
struct Tferreteria{
	
    char nombreprod[20];
    int codart,stock; 
    float precio;
    char descripcion[50];

};

//Funciones y Procedimientos

void pausar(){

	printf("\n\n\n\n");
	system("pause");

}

//Main
int main(){

//Variables

	struct Tferreteria ferreteria;
	char cad[20],cad2[50];
	int codart,stock;
	float precio;

//Ingreso de datos
	
	printf("Ingrese codigo del articulo: "); 
    scanf("%d",&codart);
    fflush(stdin);
    ferreteria.codart=codart;
    
	printf("\n Ingrese nombre del producto: ");
	gets(cad);
    fflush(stdin);
    strcpy(ferreteria.nombreprod,cad);
           
	printf("\n Ingrese descripcion del producto: ");
    gets(cad2);
    fflush(stdin);
    strcpy(ferreteria.descripcion,cad2);
    
    do{
    	
    	printf("\n Ingrese precio del articulo: ");
		scanf("%f",&precio);
		fflush(stdin);
    	
    	if(precio<0){
    		
    		printf("\nIngrese un valor positivo por favor.\n");
    		
		}
    	
	}while(precio<0);
    
    ferreteria.precio=precio;
    
	do{
		
		printf("\n Ingrese el stock disponible: ");
    	scanf("%d",&stock);
   		fflush(stdin);
		
		if(stock<0){
			
			printf("\nIngrese un valor positivo por favor.\n");
			
		}
		
	}while(stock<0);
	
	ferreteria.stock=stock;
	
//Proceso //Salida de datos
	
	codart=ferreteria.codart;
	strcpy(cad,ferreteria.nombreprod);
	strcpy(cad2,ferreteria.descripcion);
	precio=ferreteria.precio;
	stock=ferreteria.stock;
	
	printf("\n El codigo es: %d ",codart);
    printf("\n El articulo es: %s ",cad);
    printf("\n Descripcion:  %s ",cad2);
    printf("\n El precio del articulo es: %.2f",precio);
    printf("\n La cantidad de unidades es: %d ",stock);

//Pausa y fin de programa

	pausar();
	return 0;

}   
