//Encuesta - Sacar total de la encuesta de los productos a y b. Sacar el porcentaje de los que les gusta a, los que les gusta b, solo a, solo b, ambos y ninguno
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
    
//Variables
    
    int enc,totalprod,prod1,prod2,proda1,proda2,prodb1,prodb2,prodn;
    float porcea, porceb, psoloa, psolob, porcenin, porceamb;
    
//Iniciación de variables en 0

	proda1=0;
	proda2=0;
	prodb1=0;
	prodb2=0;
	prodn=0;
    
//Ingreso de datos
    
    printf("Desea encuestar?: ");
    scanf("%d",&enc);
    fflush(stdin);
    
    while(enc!=0){
		
		printf("\nLe gusta el producto A?: ");
        scanf("%d",&prod1);
        fflush(stdin);
              
    	printf("\nLe gusta el producto B?: ");
        scanf("%d",&prod2);
        fflush(stdin);
              
        if(prod1==1&&prod2==1){
			
			proda1++;
            prodb1++;
            
			}else if(prod1==1&&prod2==0){
				
				proda2++;
				
				}else if(prod1==0&&prod2==1){
				
					prodb2++;
					
					}else{
					
						prodn++;
					   	
					   }           
              
        printf("Desea encuestar?: ");
        scanf("%d",&enc);
        fflush(stdin);
        
    }

//Proceso
    
    totalprod= proda1+proda2+prodb1+prodb2+prodn;
    porcea= totalprod*100/(proda1+proda2);
    porceb= totalprod*100/(prodb1+prodb2);
    porceamb= porcea+porceb;
    psoloa= totalprod*100/proda2;
    psolob= totalprod*100/prodb2;
    porcenin= totalprod*100/prodn;

//Salida de datos
              
    printf("\nEl total de productos es: %d", totalprod);
    printf("\nEl Porcentaje de los que les gusta ambos productos: %2.f", porceamb);
    printf("\nEl Porcentaje de los que les gusta el producto A: %2.f", porcea);
    printf("\nEl Porcentaje de los que les gusta el producto B: %2.f", porceb);
    printf("\nEl Porcentaje de los que les gusta solo el producto A: %2.f", psoloa);
    printf("\nEl Porcentaje de los que les gusta solo el producto B: %2.f", psolob);
    printf("\nEl Porcentaje de los que no les gusta ningun producto: %2.f", porcenin);
    
//Pausa y fin de programa
  
    printf("\n\n\n\n");
    system("pause");
    return 0;
    
}
