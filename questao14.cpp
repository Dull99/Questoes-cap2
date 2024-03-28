#include <stdio.h>

/*Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas.*/
int main(){
	
	int anoNasc, anoAtual;
	int idadeAno, idadeMes, idadeDias, idadeSem;
	
	printf("Digite o ano do nasciemnto:\n");
	scanf("%d", &anoNasc);
	printf("Digite o ano atual:\n");
	scanf("%d", &anoAtual);
	
	idadeAno = anoAtual - anoNasc;
	idadeMes = idadeAno * 12;
	idadeDias = idadeAno * 365;
	idadeSem = idadeAno * 48;
	
	printf("A idade em anos e: %d\n", idadeAno);
	printf("A idade em meses e: %d\n", idadeMes);
	printf("A idade em Dias e: %d\n", idadeDias);
	printf("A idade em semanas e: %d\n", idadeSem);
	
	return 0;
}


