#include <stdio.h>

/*Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um programa
que receba o sal�rio fixo do funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e seu
sal�rio final.8*/

int main(){
	
	float salarioFixo, vendas, comiss, salarioFinal;
	
	printf("Informe o salario e as vendas :\n");
	printf("Salario:\n");
	scanf("%f", &salarioFixo);
	
	printf("Vendas:\n");
	scanf("%f", &vendas);
	
	/*calculo da comiss�o*/
	comiss = 0.04 * vendas;
	
	/*calculo salario final*/
	salarioFinal = salarioFixo + comiss;

	
	printf("Valor da comissao: R$ %.2f\n", comiss);
	printf("Salario final e: %.2f\n", salarioFinal);
	
	return 0;
	
	
}
