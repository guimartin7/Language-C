#include <stdio.h>
#include <stdlib.h>

//EXERCICIO - OK

EsperaESC(){
	
	int tecla;
	printf("\nPARA SAIR, PRESSIONE 'ESC'");
	do{
		tecla = getch();
		if(tecla != 27){
			printf("\nTECLA ERRADA!");
		}
	}
	while(tecla !=27);
}

float fpag2(float val){
	printf("\nVALOR A PAGAR:  %.2f", (val * 0.5)+val);
}
float fpag3(float val){
	float parcela, ac;
	ac = (val * 0.8) + val;
	parcela = ac / 6;
	printf("\nVALOR A PAGAR:  %.2f", ac);
	printf("\nVALOR DAS PARCELAS:  %.2f", parcela);
}
float fpag4(float val){
	float parcela, ac;
	ac = (val * 0.12) + val;
	parcela = ac / 12;
	printf("\nVALOR A PAGAR:  %.2f", ac);
	printf("\nVALOR DAS PARCELAS:  %.2f", parcela);
}

void main(){
	
	int x=0, op,i;
	float prod[3], parce=0, vpag=0;
	
	for(i=0;i<3;i++){
		printf("\nINFORME O VALOR DO PRODUTO: ");
		scanf("%f",& prod[i]);
		fflush(stdin);
		
		vpag= vpag + prod[i];
	}
	printf("\nSELECIONE UMA FORMA DE PAGAMENTO: ");
	printf("\n[1] - A VISTA");
	printf("\n[2] - A PRAZO - 5%% DE JUROS");
	printf("\n[3] - PARCELADO EM 6X - 8%% DE JUROS");
	printf("\n[4] - PARCELADO EM 12X - 12%% DE JUROS");
	printf("\nSELECIONE: ");
	scanf("%i",& op);
	fflush(stdin);
	
	if(op==1){
		printf("\nVALOR A PAGAR: %.2f", vpag);
	}
	else if(op==2){
		fpag2(vpag);
	}
	else if(op==3){
		fpag3(vpag);
	}
	else{
		fpag4(vpag);
	}
	
	EsperaESC();
	printf("\nESC PRESSIONADO!");
}
