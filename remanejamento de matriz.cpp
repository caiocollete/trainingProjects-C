#include <stdio.h>
#include <string.h>
#include <conio2.h>
#define TF 5

// LER UM VETOR DE STRING DE MANEIRA ORDENADA > EXIBIR > FAZER A EXCLUSAO DO VALOR SOLICITADO > EXIBIR
 
int main() {
	char vetNome[TF][30],nome[30];
	int vetID[TF],id,pos,i,TL=0;

	//LEITURA DO VETOR DE FORMA ORDENADA COM BASE NO vetID
	printf("Digite o id da cidade:\n");
	scanf("%d",&id);
	while(TL<TF && id>0){
		printf("Digite o nome da cidade %d:\n",TL+1);
		fflush(stdin);
		gets(nome);
		
		//busca pos
		pos=0;
		while(pos<TL && vetID[pos]<id)
			pos++;
			
		//remanejamento dos vetores char && int
		for(i=TL;i>pos;i--){
			vetID[i]=vetID[i-1];
			strcpy(vetNome[i],vetNome[i-1]);
		}
		
		//inserir
		vetID[pos]=id;
		strcpy(vetNome[pos],nome);	
		TL++;
		
		if(TL<TF){
			printf("Digite o id da cidade:\n");
			scanf("%d",&id);
		}
		
	}
	clrscr();
	
	for(i=0;i<TL;i++){
		printf("vetID[%d]= ",vetID[i]);
		puts(vetNome[i]);
	}

	while(id>0 && TL>0){
		printf("Digite o id da cidade a ser excluido:\n");
		scanf("%d",&id);
		
		//busca pos do numero a ser excluido
		pos=0;
		while(pos<TL && vetID[pos]!=id)
			pos++;
		
		//exclusao - remanejamento para excluir
		for(i=pos;i<TL;i++){
			vetID[i]=vetID[i+1];
			strcpy(vetNome[i],vetNome[i+1]);
		}
		TL--;
		if(TL>0){
			for(i=0;i<TL;i++){
				printf("vetID[%d]= ",vetID[i]);
				puts(vetNome[i]);
			}
		
		}
	
	}

	


    return 0;
}
