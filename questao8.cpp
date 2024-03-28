#include <stdio.h>
/*Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.*/

int main(){
	
	float pesokg;
	float gramas = 1000;
	float pesoGramas;
	
	printf("Digite o peso em kg:\n");
	scanf("%f", &pesokg);
	
	pesoGramas = pesokg * gramas;
	
	printf("O peso em gramas equivale a: %.2f\n", pesoGramas);
	
	return 0;
	
}
