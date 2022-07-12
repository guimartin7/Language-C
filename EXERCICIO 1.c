#include <stdio.h>
#include <stdlib.h>

//OK - SÓ ESQUECI DE ARRUMAR O PRINTF

void main(){
	
	float peso[10], altura[10], mda=0, mdp=0;
	float totp=0, tota=0, toti=0;
	int i=0, mdi=0, idade[10];
	
	for(i=0;i<10;i++){
		printf("\nINFORME O PESO: ");
		scanf("%f",& peso[i]);
		fflush(stdin);
		
		if(peso[i]<=0){
			break;
		}
		else{
			totp = totp + peso[i];
		}
		
		printf("\nINFORME A ALTURA: ");
		scanf("%f",& altura[i]);
		fflush(stdin);
		
		if(altura[i]<=0){
			break;	
		}
		else{
			tota = tota + altura[i];
		}
		
		printf("\nINFORME SUA IDADE: ");
		scanf("%i",& idade[i]);
		fflush(stdin);
		
		if(idade[i]<=0){
			break;
		}
		else{
			toti = toti = idade[i];
		}
	}
	
	for(i=0;i<10;i++){
		if(peso[i]>0){
			printf("\nPESOS LIDOS:  %.1f", peso[i]);
		}
	}
	
	for(i=0;i<10;i++){
		if(altura[i]>0){
			printf("\nALTURAS LIDAS:  %.2f", altura[i]);
		}
	}
	
	for(i=0;i<10;i++){
		if(idade[i]>0){
			printf("\nIDADES LIDAS:  %i", idade[i]);
		}
	}
	
	mdp = totp / 10;
	mdi = toti / 10;
	mda = tota / 10;
	
	printf("\nMEDIA PESO:  %.1f", mdp);
	printf("\nMEDIA ALTURA:  %.2f", mda);
	printf("\nMEDIA IDADE:  %i", mdi);
	
}
