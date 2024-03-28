#include <stdio.h>
#include <math.h>
/*Faça um programa que receba o raio, calcule e mostre:
a) o comprimento de uma esfera; sabe-se que C = 2 * p R;
b) a área de uma esfera; sabe-se que A = p R2
;
c) o volume de uma esfera; sabe-se que V = 3/4 * p R3*/

int main(){
float pi, raio, comprimento, area, volume;

printf("Receba o valor do raio: \n");
scanf("%f", &raio);
pi = 3,14159;
comprimento = 2.0 * pi * raio;
area = pi * pow (raio, 2);
volume = 3.0/4 * pi * pow(raio, 3);

printf(" O comprimento é: %.2f\n", comprimento);
printf("A area é: %.2f\n", area );
printf("O volume e: %.2f\n", volume);


 return 0;
}
