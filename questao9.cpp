#include <stdio.h>

/*Fa�a um programa que calcule e mostre a �rea de um trap�zio.
Sabe-se que: A = ((base maior + base menor) * altura)/2*/

int main(){
	
	float area = 0;
	float baseMaior;
	float baseMenor;
	float altura;
	
	printf("Digite as bases\n");
	scanf("%f %f", &baseMaior, &baseMenor);
	printf("Digite a altura:\n");
	scanf("%f", &altura);
	
	area = ((baseMaior + baseMenor) * altura)/ 2;
	
	printf("A area do trapezio e: %f", area);
	
	return 0;
	
}
