#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int prcComprada, prcCard, comicaoEA, recebe, lucro;
	char resp, resp1;
	
	lab1:
		printf("Calculadora de Lucro FUT 23\n");
		printf("Insira o valor da carta quando comprada: ");
		scanf("%d", &prcComprada);		
		printf("Insira o valor da carta a ser listada: ");
		scanf("%d", &prcCard);
		
		comicaoEA= prcCard*0.05;
		recebe= prcCard-comicaoEA;
		lucro= recebe-prcComprada;
		
		printf("\nCOMICAO EA: %d coins\n", comicaoEA);
		printf("RECEBERA: %d coins\n", recebe);
		printf("LUCRO DE: %d coins", lucro);
		
		printf("\n\n\nDeseja fazer outra conta? (S/N)");
		scanf(" %c", &resp);
		
		system("cls");
		
		if(resp=='S' || resp=='s'){
			system("cls");
			goto lab1;
		}
		else{
			printf("\n\n\nDeseja fechar?(S/N)");
			scanf(" %c", &resp1);
			
			if(resp1=='S' || resp1=='s'){
				system("exit");
			}
			else{
				system("cls");
				goto lab1;
			}
		}
}
