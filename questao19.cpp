#include <stdio.h>
#include <math.h>
/*Sabe-se que, para iluminar de maneira correta os c�modos de uma casa, para cada m2

, deve-se usar 18 W
de pot�ncia. Fa�a um programa que receba as duas dimens�es de um c�modo (em metros), calcule e mostre
a sua �rea (em m2

) e a pot�ncia de ilumina��o que dever� ser utilizada.*/


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
