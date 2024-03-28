#include <stdio.h>
#include <math.h>
/*Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a dis-
tância em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar

sua ponta.*/

int main(){
	
	float altura, anguloBase, anguloAltura, base, hipotenusa;
	
	printf("Receba a medidado angulo:\n");
	scanf("%f", &anguloBase);
	
	printf("Receba a distancia:\n");
	scanf("%f", &base);
	
	hipotenusa = base / cos(anguloBase);
	if (hipotenusa < 0){
	hipotenusa = hipotenusa * (-1);
	}
	altura = sqrt (pow(hipotenusa, 2) - pow (base, 2));
	anguloAltura = 180 - (90 + anguloBase);
	
	printf("A medida da escada e: %.2f\n", hipotenusa);
	printf("A altura da escada e: %.2f\n", altura);
	printf("Os angulos do traingulo sao: 90, %.2f e %.2f graus. \n\n",anguloBase, anguloAltura);
	
	return 0;
	
}
