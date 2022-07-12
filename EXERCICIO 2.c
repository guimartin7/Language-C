#include <stdio.h>
#include <stdlib.h>

//EXERCICIO - OK

void main(){
	
	int x=0;
	float qkmpercorrida[6], consumo[6];
	float litros[6];
	
	for(x=0;x<6;x++){
		printf("\nINFORME A QUANTIDADE DE KM A SER PERCORRIDA:  ");
		scanf("%f",& qkmpercorrida[x]);
		fflush(stdin);
		
		if(qkmpercorrida[x]<=0){
			break;
		}
		
		printf("INFORME O KM MEDIO DE 1 LITRO DE COMBUSTIVEL: ");
		scanf("%f",& consumo[x]);
		fflush(stdin);
		
		litros[x] = qkmpercorrida[x]/consumo[x];
	}
	
	for(x=0;x<6;x++){
		if(litros[x]>0){
			printf("\nLITROS DE COMBUSTIVEL NECESSARIO:  %.2f", litros[x]);
		}
		
	}
	getchar();
	
	
}
