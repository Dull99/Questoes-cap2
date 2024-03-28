#include <stdio.h>

int main(){
	int A;
	int B;
	int subtr;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d", &A);
	printf("Digite o segundo numero:\n");
	scanf("%d", &B);
	
	subtr = A - B;
	
	printf("Resultado e:\n");
	printf("Subtracao.:%d.\n", subtr);
	
	return 0;
}
