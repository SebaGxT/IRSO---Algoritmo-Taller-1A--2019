//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones y Procedimientos

void pausar(){

	printf("\n\n\n\n");
	system("pause");

}

void Vecsum(int vvec, int& sum) {
     
    sum=sum+vvec;
     
}

//Main
int main(){

//Variables

	int i,vecnum[5],suma;
	
	suma=0;

//Ingreso de datos //Proceso

	for(i=1; i<=5;i++){
		
		printf("Ingrese el numero %d: ",i);
		scanf("%d",&vecnum[i]);
        fflush(stdin);
        
        Vecsum(vecnum[i],suma);     
    }

//Salida de datos

	printf("\nLa suma es: %d",suma);

//Pausa y fin de programa

	pausar();
	return 0;

}
