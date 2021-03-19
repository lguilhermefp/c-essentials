#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void parametricaGeral(float a, float b, float c, float d)//inicio funcao que transforma equacao parametrica em geral
{
	//x = a*t + b;
	//y = c*t + d;
	
	//	t = (x-b)/a
	//	0 = c(x-b)/a + d - y
	//desenvolvendo a equacao, chega-se no valor abaixo
	
	printf("equacao geral da reta: - y + %.2f*x + %.2f", c/a, d-(b*c)/a);	//mostra equacao geral da reta
}


void main()
{
	printf("insira valores a, b, c e d para preencher a seguinte equacao parametrica:\nx = a*t + b\ny = c*t + d\n");	//pede entrada de fatores da equacao parametrica
	scanf("%f %f %f %f", &a, &b, &c, &d);	//escaneia fatores da equacao parametrica
	parametricaGeral(a, b, c, d);	//chama funcao para transformar equacao parametrica em geral
}
