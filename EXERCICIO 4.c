#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//EXERCICIO - OK

void main(){
	
	int i=0;
	float prod[10], euro=0, dolar=0, vdol[10], veur[10];
	float valores=0;
	
	printf("\nINFORME O VALOR DO EURO: ");
	scanf("%f",& euro);
	fflush(stdin);
	
	printf("INFORME O VALOR DO DOLAR: ");
	scanf("%f",& dolar);
	fflush(stdin);
	
	system("pause");
	system("cls");
	
	for(i=0;i<10;i++){
		printf("INFORME O PRECO DO PRODUTO: ");
		scanf("%f",& prod[i]);
		fflush(stdin);
		
		vdol[i] = prod[i] / dolar; 
		veur[i] = prod[i] / euro;
	}
	
	for(i=0;i<10;i++){
		printf("\nPRECOS LIDOS:  %.2f", prod[i]);
	}
	for(i=0;i<10;i++){
		printf("\nPRECOS EM DOLAR:  %.2f", vdol[i]);
	}
	for(i=0;i<10;i++){
		printf("\nPRECOS EM EURO:  %.2f", veur[i]);
	}
	
	getchar();

}
