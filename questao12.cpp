#include <stdio.h>

/*Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
e mostre a quantidade de salários mínimos que esse funcionário ganha.*/
int main(){
	
	float salarioMin, salarioFun, quantiSal;
	
	printf("Digite o valor do salario minimo:\n");
	scanf("%f", &salarioMin);
	printf("Digite o salrio do funcionario:\n");
	scanf("%f", &salarioFun);
	
	quantiSal = salarioMin / salarioFun;
	
	printf("A quantidade de salario minimo e: %.2f \n", quantiSal);
	
	
	return 0;
	
}
