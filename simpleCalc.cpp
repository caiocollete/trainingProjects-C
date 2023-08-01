#include <stdio.h>

int soma(float a, float b){
    return(printf("Resultado: %.2f",a+b));
}
int sub(float a, float b){
    return(printf("Resultado: %.2f",a-b));    
}
int mul(float a, float b){
    return(printf("Resultado: %.2f",a*b));    
}
int div(float a, float b){
    return(printf("Resultado: %.2f",a/b));    
}


int main(){
    int esc;
    float a, b;
do{
    printf("Escolha a operecao que deseja:\n1- Soma\n2- Subtracao\n3- Multiplicacao\n4- Divisao:\n0- Sair\n->");
    scanf("%d",&esc);

    switch (esc)
    {
    case 1:
         printf("Digite o primeiro numero a ser somado: ");
         scanf("%f",&a);
         printf("Digite o segundo numero a ser somado: ");
         scanf("%f",&b);
        soma(a,b);
        break;

    case 2:
         printf("Digite o primeiro numero a ser subtraido: ");
         scanf("%f",&a);
         printf("Digite o segundo numero a ser subtraido: ");
         scanf("%f",&b);
        sub(a,b);
        break;
    
    case 3:
         printf("Digite o primeiro numero a ser multiplicado: ");
         scanf("%f",&a);
         printf("Digite o segundo numero a ser multiplicado: ");
         scanf("%f",&b);
        mul(a,b);
        break;
    
    case 4:
         printf("Digite o primeiro numero a ser dividido: ");
         scanf("%f",&a);
         printf("Digite o segundo numero a ser dividido: ");
         scanf("%f",&b);
        div(a,b);
        break;

    default:
        break;
    }
printf("\n\n");
}while(esc!=0);
}