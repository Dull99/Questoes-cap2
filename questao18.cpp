#include <stdio.h>

/*Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
Fahrenheit. Sabe-se que F = 180*(C + 32)/100.*/

int main(){
	
	float celsius, tempFah;
	
	printf("Digite a temperatura em celsius:\n ");
	scanf("%f", &celsius);
	
	tempFah = 180 * (celsius + 32)/100;
	
	printf("A temperatura em fahrenheit e:\n %.2f", tempFah);
	
	return 0;
	
}
