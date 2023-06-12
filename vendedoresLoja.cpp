#include<stdio.h>
#define TFV 5
#define TFS 4

int main(){
	int matVendasMes[TFV][TFS],V,S,vendasMensais,vendasSemanais,totalVendas;
	
	for(V=0;V<TFV;V++){
		for(S=0;S<TFS;S++){
			printf("Digite o numero de vendas da %da. semana do %do. vendedor:\n",S+1,V+1);
			scanf("%d",&matVendasMes[V][S]);
		}
	}
	
	for(V=0;V<TFV;V++){
		vendasMensais=0;
		for(S=0;S<TFS;S++){
		vendasMensais+=matVendasMes[V][S];
		}
		printf("O total de vendas mensais do %do. vendedor: %d\n",V+1,vendasMensais);
	}
	
	for(S=0;S<TFS;S++){
		vendasSemanais=0;
		for(V=0;V<TFV;V++){
		vendasSemanais+=matVendasMes[V][S];
		}
		printf("O total de vendas da %da. semana: %d\n",S+1,vendasSemanais);
	}
	
	totalVendas=0;
	for(V=0;V<TFV;V++){
		for(S=0;S<TFS;S++){
		totalVendas+=matVendasMes[V][S];
		}
	}	
	printf("O total de vendas do mes: %d\n", totalVendas);	
	
	
}
