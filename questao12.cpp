#include <stdio.h>

/*Fa�a um programa que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule
e mostre a quantidade de sal�rios m�nimos que esse funcion�rio ganha.*/
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
