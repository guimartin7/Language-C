#include <stdio.h>
#include <stdlib.h>

//INCOMPLETO - DIFICULDADE PRA FAZER

int idades(int i){
	int idade[12];
	for(i=0;i<12;i++){
		printf("\nIDADES:  %i", idade[i]);
	}
}

int media(int id){
	int md=0;
	md = id / 12;
	printf("\nA MEDIA E:  %i", md);
}	
	

void main(){
	
	int x, op, idd[12], toti;
	
	for(x=0;x<12;x++){
		printf("\nINFORME A IDADE: ");
		scanf("%i",& idd[x]);
		fflush(stdin);
		
		toti = toti + idd[x];
	}
	printf("\nSELECIONE UMA OPCAO:  ");
	printf("\n[1] - MOSTRAR TODAS AS IDADES");
	printf("\n[2] - MEDIA DAS IDADES");
	printf("\nSELECIONE: ");
	scanf("%i",& op);
	fflush(stdin);
	
	if(op==1){
		idades(idd[x]);
	}
	else if(op==2){
		media(idd[x]);
	}
	
}
