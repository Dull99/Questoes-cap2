#include <stdio.h>
/*Fa�a um programa que receba a medida de dois �ngulos de um tri�ngulo, calcule e mostre a medida do
terceiro �ngulo. Sabe-se que a soma dos �ngulos de um tri�ngulo � 180 graus.*/
int main(){
	
	float medida1, medida2, medida3;
	
	printf("Digite a primeira medida\n");
	scanf("%f", &medida1);
	printf("Digite a segunda medida\n");
	scanf("%f", &medida2);
	
	medida3 = 180 - (medida1 + medida2);
	
	printf("A medida do terceiro angulo e: %.2f\n", medida3);
	
	return 0;
}
