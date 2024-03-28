#include <stdio.h>
/*Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.*/

int main(){
	
	float peso, novoPeso_engord, novoPeso_emagr;
	float aumentPerc = 0.15;
	float reducPerc = 0.20;

	
	printf("Digite o peso em kg:\n");
	scanf("%f", &peso);
	
	novoPeso_engord = peso + (peso * aumentPerc);
	
	novoPeso_emagr = peso - (peso * reducPerc);
	
	printf("Se engordar o novo peso sera: %.2f kg\n", novoPeso_engord);
	printf("Se emagrecer o novo peso sera: %.2f kg\n", novoPeso_emagr);
	
	
	return 0;
	
	
	
}
