#include <stdio.h>
#include <string.h>
#include <conio2.h>
#define TFA 5
#define TFP 4

//A= LINHA (ARMAZEM)
//P= COLUNA (PRODUTO)

int main() {
	int A,P,soma,maior=0,menor=99999;
	float matArm[TFA][TFP],custoTotal;
	
	for(A=0;A<TFA-1;A++){
		for(P=0;P<TFP;P++){
			printf("Digite a quantidade do %do. produto no %do. armazem: \n",P+1,A+1);
			scanf("%f",&matArm[A][P]);
		}
	}
	
	printf("-----------------------------\n");
	
	for(P=0;P<TFP;P++){
		printf("Qual o valor do %do. produto ?\n",P+1);
		scanf("%f",&matArm[4][P]);
	}
	
	printf("-----------------------------\n");	
	
	for(A=0;A<TFA-1;A++){
		soma=0;
		for(P=0;P<TFP;P++){
			soma=soma+matArm[A][P];
		}
		printf("A soma de produtos do %do. armazem: %d\n",A+1,soma);
	}
	
	printf("----------------------------\n");	
	
	for(A=0;A<TFA-1;A++){
		if(matArm[A][2-1]>maior)
			maior=A+1;
	}
	printf("O %do. armazem tem o maior estoque do produto 2.\n",maior);
	
	printf("-----------------------------\n");	
	
	for(A=0;A<TFA-1;A++){
		if(matArm[A][4-1]<menor)
			menor=A+1;
	}
	printf("O %do. armazem tem o menor estoque do produto 4.\n",menor);
	
	printf("-----------------------------\n");	
	
	for(A=0;A<TFA-1;A++){
		custoTotal=0;
		for(P=0;P<TFP;P++){
			custoTotal=custoTotal+(matArm[A][P]*matArm[4][P]);
		}
		printf("O custo total do %do. armazem: %.2f\n",A+1,custoTotal);
	}
	
    return 0;
}
