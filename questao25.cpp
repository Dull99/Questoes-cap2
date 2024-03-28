#include <stdio.h>
/*Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e
mostre:
a) a hora digitada convertida em minutos;
b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
c) o total dos minutos convertidos em segundos.*/
int main(){
	
	float hora, minuto, horaMin, totalMinutos, segundos;
	
	printf("Didite a hora:\n ");
	scanf("%f", &hora);
	printf("Didite os minutos:\n ");
	scanf("%f", &minuto);
	
	horaMin = hora * 60;
	totalMinutos = horaMin + minuto;
	segundos = totalMinutos * 60;
	
	printf("A hora em minutos e: %.2f\n", horaMin);
	printf("O total dos minutos sao: %.2f\n", totalMinutos);
	printf("O total de minutos em segundos sao: %.2f\n", segundos);
	
	return 0;
	
	
}
