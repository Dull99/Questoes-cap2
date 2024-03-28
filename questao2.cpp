#include <stdio.h>

int main(){
	
	int n1=0;
	int n2=0;
	int n3=0;
	int mult;
	
	printf("Digite o 1 numero:\n");
	scanf("%d", &n1);
	printf("Digite o 2 numero:\n");
	scanf("%d", &n2);
	printf("Digite o 3 numero:\n");
	scanf("%d", &n3);
	
	mult = n1 * n2 * n3;
	
	printf("Resultado final:\n");
	printf("Multiplic.: %d.\n",mult);
	
	return 0;
	
}
