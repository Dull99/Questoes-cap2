#include <stdio.h>

/*Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final.8*/

int main(){
	
	float salarioFixo, vendas, comiss, salarioFinal;
	
	printf("Informe o salario e as vendas :\n");
	printf("Salario:\n");
	scanf("%f", &salarioFixo);
	
	printf("Vendas:\n");
	scanf("%f", &vendas);
	
	/*calculo da comissão*/
	comiss = 0.04 * vendas;
	
	/*calculo salario final*/
	salarioFinal = salarioFixo + comiss;

	
	printf("Valor da comissao: R$ %.2f\n", comiss);
	printf("Salario final e: %.2f\n", salarioFinal);
	
	return 0;
	
	
}
