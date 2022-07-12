#include <stdio.h>
#include <stdlib.h>

//EXERCICIO - OK

void main(){
	
	int i=0;
	char nome[5][10];
	float p1[5], p2[5], p3[5], md=0, medias[5];
	
	for(i=0;i<5;i++){
		printf("\nINFORME O NOME DO ALUNO: ");
		scanf("%s",& nome[i]);
		fflush(stdin);
		
		printf("INFORME A NOTA DA P1: ");
		scanf("%f",& p1[i]);
		fflush(stdin);
		
		printf("INFORME A NOTA DA P2: ");
		scanf("%f",& p2[i]);
		fflush(stdin);
		
		printf("INFORME A NOTA DA P3: ");
		scanf("%f",& p3[i]);
		fflush(stdin);
		
		md = (p1[i] + p2[i] + p3[i])/3;
		medias[i]=md;
		
		printf("\nMEDIA FINAL:  %.2f", md);
		
		if(md>=7){
			printf("\nALUNO APROVADO!");
		}
		else if(md<7 && md>=4){
			printf("\nALUNO EM RECUPERACAO!");
		}
		else{
			printf("\nALUNO REPROVADO! \n");
		}
		system("pause");
		system("cls");
	}
	
	for(i=0;i<5;i++){
		printf("\nMEDIAS:  %s  %.2f",&nome[i], medias[i]);
	}
	
	
	getchar();
	
}
