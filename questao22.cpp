#include <stdio.h>
/*Fa�a um programa que receba o n�mero de lados de um pol�gono convexo, calcule e mostre o n�mero
de diagonais desse pol�gono. Sabe-se que ND = N * (N - 3)/2, em que N � o n�mero de lados do
pol�gono.*/

int main(){
	
	float numLados, numDiag;
	
	printf("Digite o numero de lados:\n ");
	scanf("%f", &numLados);
	
	numDiag = numLados * (numLados - 3)/2;
	
	printf("O numero de diagonais do poligno e:%2.f\n", numDiag);
	
	return 0;
}
