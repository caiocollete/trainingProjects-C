#include<stdio.h>
#include<math.h>

int main(){
int cod=0,nV=0,nCm=0,nCf=0,qntdCand=0,candpV,maior=0,maiorC=0,total;
float porc;

printf("Qual o codigo?\n");
scanf("%d",&cod);

while(cod!=0){
	printf("Numero de vagas?\n");
	scanf("%d",&nV);
	printf("Numero de candidatos do sexo masculino?\n");
	scanf("%d",&nCm);
	printf("Numero de candidatos do sexo feminino?\n");
	scanf("%d",&nCf);
	
	qntdCand=nCm+nCf;
	candpV=qntdCand/nV;
	
	porc=(float)nCf*100/qntdCand;
	
	printf("Curso: %d \nCandidato por vaga: %d \nPorcentagem de candidato do sexo feminino: %.2f\n", cod, candpV, porc);
	
	if(maior=0){
		maior= candpV;
		maiorC= cod;
	}
	else{
		if(candpV>maior){
			maior=candpV;
			maiorC=cod;
		}
	}
	
	total=qntdCand+total;
	
	printf("\n\nQual o codigo?\n");
	scanf("%d",&cod);
	}
	
	
	printf("Maior numero de candidatos por vaga: %d (cod: %d)\n", maior,maiorC);
	printf("Total de candidatos: %d",total);
}
