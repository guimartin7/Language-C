#include <stdio.h>
#include <stdlib.h>

//EXERCICIO - OK

void main(){
	
	int i=0;
	float temp[10], md=0, ac=0;
	
	for(i=0;i<10;i++){
		printf("INFORME A TEMPERATURA: ");
		scanf("%f",& temp[i]);
		fflush(stdin);
		
		ac = ac + temp[i];
	}
	md = ac / 10;
	
	printf("\nTEMPERATURA MEDIA NOS ULTIMOS DIAS:  %.1f", md);
	
}
