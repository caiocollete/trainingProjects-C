#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){
	lab1:
	int a;
	char resp;
	float r1,r2,result;
	printf(("\n---\nEscolha\n1)SOMA\n2)Subtracao\n3)Multiplicacao\n4)Divisao\n"),a);
	scanf("%d", &a);
	if(a==1){
		printf(("Digite o primeiro valor:"), r1);
		scanf("%f",&r1);
		printf(("Digite o segundo valor:"), r2);
		scanf("%f",&r2);
		result = r1+r2;
		printf("resultado= %.2f", result);
	}
	else{
		if(a==2){
			printf(("Digite o primeiro valor:"), r1);
			scanf("%f",&r1);
			printf(("Digite o segundo valor:"), r2);
			scanf("%f",&r2);
			result = r1-r2;
			printf("resultado= %.2f", result);
		}
		else{
			if(a==3){
				printf(("Digite o primeiro valor:"), r1);
				scanf("%f",&r1);
				printf(("Digite o segundo valor:"), r2);
				scanf("%f",&r2);
				result = r1*r2;
				printf("resultado= %.2f", result);
				}
			else{
				if(a==4){
				printf(("Digite o primeiro valor:"), r1);
				scanf("%f",&r1);
				printf(("Digite o segundo valor:"), r2);
				scanf("%f",&r2);
				result = r1/r2;
				printf("resultado= %.2f", result);
				}
				else{
					printf("Escolha invalida");
				}
				
				
			}
		}
	}
	printf("\n\n\nDeseja fazer outra conta? (S/N)");
	scanf(" %c", &resp);
		if(resp=='S' || resp=='s'){
			system("cls");
			goto lab1;
		}
		else{
			system("exit");
		}
}

