#include<stdio.h>
int main(){
	int canal, c4=0,c5=0,c7=0,c12=0,qntdP=0,qntd=0;
	float porc;
	
	printf("Qual o numero do canal?\n");
	scanf("%d",&canal);
	while(canal!=0){
		printf("Qual a qntd de pessoas na casa?\n");
		scanf("%d",&qntd);
		switch(canal){
			case 4: c4=c4+qntd;
					qntdP=qntdP+qntd; 
					break;
			case 5: c5=c5+qntd;
					qntdP=qntdP+qntd;
					break;
			case 7: c7=c7+qntd;
					qntdP=qntdP+qntd;
					break;
			case 12: c12=c12+qntd;
					 qntdP=qntdP+qntd; 
					 break;
		}
		printf("Qual o numero do canal?");
		scanf("%d",&canal);
	}
	
	porc=c4*100.00/qntdP;
	printf("Canal 4 tem %.2f porcento de audiencia\n",porc);
	
	porc=c5*100.00/qntdP;
	printf("Canal 5 tem %.2f porcento de audiencia\n",porc);
	
	porc=c7*100.00/qntdP;
	printf("Canal 7 tem %.2f porcento de audiencia\n",porc);
	
	porc=c12*100.00/qntdP;
	printf("Canal 12 tem %.2f porcento de audiencia\n",porc);
}
