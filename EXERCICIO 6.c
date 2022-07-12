#include <stdio.h>
#include <stdlib.h>

//EXERCICIO - OK
//TRABALHAR MAIS COM TRATATIVAS DE ERRO


float idealm(float num){
	return((72.7 * num) - 58);
}
float idealf(float num){
	return((62.1 * num) - 44.7);
}

void main(){
	
	int sexo;
	float aideal=0;
	
	printf("\nINFORME SEU GENERO: ");
	printf("\n[1] - MASCULINO - [2] - FEMININO: ");
	scanf("%i",& sexo);
	fflush(stdin);
	
	if(sexo==1){
		printf("\nINFORME SUA ALTURA: ");
		scanf("%f",& aideal);
		fflush(stdin);
		
		printf("\nO PESO IDEAL SERIA:  %.1f", idealm(aideal));
	}
	else{
		printf("\nINFORME SUA ALTURA: ");
		scanf("%f",& aideal);
		fflush(stdin);
		
		printf("\nO PESO IDEAL SERIA:  %.1f", idealf(aideal));
		
	}
	
}
