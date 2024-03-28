#include <stdio.h>

int main(){
	
	int num1;
	int num2;
	float divis;
	
	printf("Informe o primeiro numero:\n");
	scanf("%d", &num1);
	printf("Informe o segundo numero:\n");
	scanf("%d", &num2);
	if("num2!=0"){
		
    divis = num1 / num2;
    
    printf("Resultado= %.2f", divis);
		
	}else{
   
    printf("Divisão impossivel");
}	

	return 0;
	
}
