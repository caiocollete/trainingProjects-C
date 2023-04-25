#include <stdio.h>
#define TF 9

int main(){
	int vet[TF];
	int i,n1,nep;
	
	for(i=0;i<TF;i++){
		printf("Digite o %da. numero na pos %d: \n", i+1,i);
		scanf("%d",&vet[i]);
	}
	
	for(i=0;i<TF;i++){
		nep=0;
		for(n1=2; n1<=vet[i]/2;n1++){
			if(vet[i]%n1==0){
			nep=1;}
		}	
		if(nep==0)
		printf("%d eh primo - pos. %d\n",vet[i],i);
	}
		
}
