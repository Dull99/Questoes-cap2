#include <stdio.h>

int main(){
	
	float n1, n2, mepo;
	
	printf("Recebe duas notas, calcula e mostra a média ponderada dessas notas.\n");
	printf("Considerando peso 2 para a primeira nota e peso 3 para a segunda nota. \n");
	printf("Digite a primeira nota:\n");
	scanf("%f", &n1);
	printf("Digite a segunda nota:\n");
	scanf("%f", &n2);
	
	printf("A primeira nota tem peso igual a 2\n");
	printf("A segunda nota tem peso igual a 3\n");
	
	mepo = (n1 * 2) + (n2 * 3)/5;
	
	printf("A media ponderada e:\n");
	printf("media pond: %.2f.\n", mepo);
	

	
	return 0;
	
}
