#include <stdio.h>
#include <math.h>
/*Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2

, deve-se usar 18 W
de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre
a sua área (em m2

) e a potência de iluminação que deverá ser utilizada.*/


int main(){
	
	float dimensao1, dimensao2;
	float areaM2, potIlum;
	
	printf("Digite a primeira dimensao:\n ");
	scanf("%f", &dimensao1);
	printf("Digite a segunda dimensao:\n ");
	scanf("%f", &dimensao2);
	
	areaM2 = dimensao1 * dimensao2;
	potIlum = areaM2 * 18;

	printf("A area em metros quadrados  e: %.2f\n ", areaM2);
	printf("A potencia de iluminacao deve ser: %.2f\n ", potIlum);
	
	return 0;
}
