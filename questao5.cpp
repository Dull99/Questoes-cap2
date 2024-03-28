#include <stdio.h>

/*Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%.*/

int main(){
	
	float preco, novoPreco;
	
	printf("Digite o preco:\n");
	scanf("%f", &preco);
	
	novoPreco = preco - (preco * 10 )/ 100;
	
	printf("Preco com desconto: R$ %.2f\n", novoPreco);
	
	return 0;
	
	
}
