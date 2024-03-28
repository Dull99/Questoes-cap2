#include <stdio.h>
#include <math.h>
/*Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipo-
tenusa.*/

int main(){
	
	float aux, cat1, cat2;
	
	printf("Digite cateto 1:\n");
	scanf("%f", &cat1);
	printf("Digite cateto 2:\n");
	scanf("%f", &cat2);
	
	aux = pow (cat1, 2) + pow(cat2, 2);
	
	printf("A Hipotenusa e: %f", sqrt(aux));
	
	return 0;
}
