#include <stdio.h>
/*Fa�a um programa que receba o n�mero de horas trabalhadas, o valor do sal�rio m�nimo e o n�mero
de horas extras trabalhadas, calcule e mostre o sal�rio a receber, de acordo com as regras a seguir:
a) a hora trabalhada vale 1/8 do sal�rio m�nimo;
b) a hora extra vale 1/4 do sal�rio m�nimo;
c) o sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada;
d) a quantia a receber pelas horas extras equivale ao n�mero de horas extras trabalhadas multiplicado pelo valor
da hora extra;
e) o sal�rio a receber equivale ao sal�rio bruto mais a quantia a receber pelas horas extras.*/
int main (){
	
	float horasTrab, valorSalario, horasExtr, salario_extra, salarioBruto,totalHorasExtr, salarioRec;
	
	printf("Digite o numero de horas trabalhadas:\n ");
	scanf("%f", &horasTrab);
	printf("Digite o valor do salario minimo:\n ");
	scanf("%f", &valorSalario);
	printf("Digite a quantidade de horas extras:\n ");
	scanf("%f", &horasExtr);
	
  salarioBruto = horasTrab * (valorSalario / 8);
   salario_extra = horasExtr * (valorSalario / 4);
   salarioRec = salarioBruto + salario_extra;
   
	printf("O valor do salario a receber e: %.2f\n ", salarioRec);
	
	
	
	return 0;
	
}
