#include <stdio.h>

/*Fa�a um programa que receba o pre�o de um produto, calcule e mostre o novo pre�o, sabendo-se
que este sofreu um desconto de 10%.*/

int main(){
	
	float preco, novoPreco;
	
	printf("Digite o preco:\n");
	scanf("%f", &preco);
	
	novoPreco = preco - (preco * 10 )/ 100;
	
	printf("Preco com desconto: R$ %.2f\n", novoPreco);
	
	return 0;
	
	
}
