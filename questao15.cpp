#include <stdio.h>

/*Jo�o recebeu seu sal�rio e precisa pagar duas contas atrasadas. Em raz�o do atraso, ele dever� pagar
multa de 2% sobre cada conta. Fa�a um programa que calcule e mostre quanto restar� do sal�rio de
Jo�o.*/

int main(){
	
	float salario, conta1, conta2;
	float multa1, multa2;
	float restanteSal;
	
	printf("Digite o salario:\n ");
	scanf("%f", &salario);
	printf("Digite a primeira conta:\n ");
	scanf("%f", &conta1);
	printf("Digite a segunda conta:\n ");
	scanf("%f", &conta2);
	
	multa1 = (conta1 * 0.02) + conta1;
	multa2 = (conta2 * 0.02) + conta2;
	restanteSal = salario - multa1 - multa2;
	
	printf("O salario restante foi: %.2f\n", restanteSal);
	
	return 0;
	
	
}
