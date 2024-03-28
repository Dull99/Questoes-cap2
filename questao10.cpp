#include <stdio.h>

/*Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado.*/

int main(){
	
	float area = 0;
	float lado1;
	float lado2;
	
	printf("Digite o valor dos lados:\n");
	scanf("%f %f", &lado1, &lado2);
	
	area = (lado1 * lado2);
	
	printf("A area do quadrado e: %.2f\n", area);
	
	return 0;
}
