#include <stdio.h>

/*Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * dia-
gonal menor)/2*/

int main(){
	
	float area = 0;
	float diagoMaior;
	float diagoMenor;
	
	printf("Digite a diagonal maior:\n");
	scanf("%f", &diagoMaior);
	printf("Digite a diagonal menor:\n");
	scanf("%f", &diagoMenor);
	
	area = (diagoMaior * diagoMenor)/2;
	
	printf("A area do losango e: %.2f\n", area);
	
	return 0;
	
	
}
