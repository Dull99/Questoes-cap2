#include <stdio.h>
/*Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela
vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. Sabe-
-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. O
programa deve fazer as conversões e mostrá-las.*/
int main(){
	
	float valorRe;
	float conv_dolar;
	float conv_marcoAlemao;
	float conv_libra;
	
	printf("Receba o valor em reais:\n");
	scanf("%f", &valorRe);
	
	conv_dolar = valorRe / 1.80;
	conv_marcoAlemao = valorRe / 2.00;
	conv_libra = valorRe / 3.57;
	
	printf("O valor de reais em dolar e: %.2f\n", conv_dolar);
	printf("O valor de reais em marco alemao e: %.2f\n", conv_marcoAlemao);
	printf("O valor de reais em libras e: %.2f\n", conv_libra);
	
	
	return 0;
}

