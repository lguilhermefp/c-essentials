#include <stdio.h>	//incluir uso de biblioteca stdio.h
#include <stdlib.h>	//incluir uso de biblioteca stdlib.h
#include <math.h>	//incluir uso de biblioteca math.h

void adicao(double a, double b, double c, double d, double e, double f)	//funcao adicao
{
//equacoes:
//	a*x + b*y = e;
//	c*x + d*y = f;
	FILE *arquivoSistemas1;	//declaracao de ponteiro para arquivo
	arquivoSistemas1 = fopen("arquivoSistemas.txt","a");	//abrindo arquivo para escrita a partir do ultimo caracter e relacionando-o a uma variavel
	
	double n = -c/a;	//declaracao de fator utilizado para multiplicar todos os fatores de uma das equacoes a fim de zerar um fator ao somar as equacoes
	a = a*n;			//multiplicacao pelo fator
	b = b*n;			//multiplicacao pelo fator
	e = e*n;			//multiplicacao pelo fator
	
//	(a+c = 0)*x + (b+d)*y = e+f;
	double y = (e+f)/(b+d);	//valor de y apos a soma
	double x = (f-d*y)/c;	//valor de x em funcao de y a partir da primeira equacao
		
//	printf("a=%f; b=%f; c=%f; x= %f; y=%f; n=%f", a, b, c, x, y, n);
	printf("pelo metodo da adicao, valor de x: %f, valor de y: %f", x, y);	//mostra valores de x e y
	fprintf(arquivoSistemas1,"\n(%.2f*x + %.2f*y = %.2f)\n", a, b, e);	//grava equacao 1 no arquivo
	fprintf(arquivoSistemas1,"(%.2f*x + %.2f*y = %.2f)\n", c, d, f);	//grava equacao 2 no arquivo
	fprintf(arquivoSistemas1, "pelo metodo da adicao, valor de x: %f, valor de y: %f\n", x, y);	//grava valores de x e y no arquivo
	fclose(arquivoSistemas1);	//fecha arquivo
}

void substituicao(double a, double b, double c, double d, double e, double f)	//inicio funcao substituicao
{
	//	a*x + b*y = e;
	//	c*x + d*y = f;
	FILE *arquivoSistemas2;	//declaracao de ponteiro para arquivo
	arquivoSistemas2 = fopen("arquivoSistemas.txt","a");	//abrindo arquivo para escrita a partir do ultimo caracter e relacionando-o a uma variavel
	
	//y = (f-(c*x))/d;
	//x = (e-(b*y))/a;

	//x = (e-(b*((f-(c*x))/d)))/a;
	//x = desenvolvendo a equacao...
	//x = (-(b*f)+(e*d))/((d*a)-(b*c));
	
	float x = (-(b*f)+(e*d))/((d*a)-(b*c));
	float y = (f-(c*x))/d;
	//float y = (f-(c*((-(b*f)+(e*d))/((d*a)-(b*c)))))/d;
	printf("\npelo metodo de substituicao, valor de x: %f, valor de y: %f", x, y);	//mostra valores de x e y
	fprintf(arquivoSistemas2,"\n(%.2f*x + %.2f*y = %.2f)\n", a, b, e);	//grava equacao 1 no arquivo
	fprintf(arquivoSistemas2,"(%.2f*x + %.2f*y = %.2f)\n", c, d, f);	//grava equacao 2 no arquivo
	fprintf(arquivoSistemas2, "pelo metodo de substituicao, valor de x: %f, valor de y: %f\n", x, y);	//grava valores de x e y no arquivo
	fclose(arquivoSistemas2);	//fecha arquivo
}

void comparacao(double a, double b, double c, double d, double e, double f)	//inicio funcao comparacao
{
	//	a*x + b*y = e;
	//	c*x + d*y = f;
	FILE *arquivoSistemas3;				//declaracao de ponteiro para arquivo
	arquivoSistemas3 = fopen("arquivoSistemas.txt","a");	//abrindo arquivo para escrita a partir do ultimo caracter e relacionando-o a uma variavel
	//y = (f-(c*x))/d;
	//x = (e-(b*y))/a;
	//x = (f-(d*y))/c;
	
	//(e-(b*y))/a = (f-(d*y))/c
	//desenvolvendo a equacao:
	float y = ((a*f)-(e*c))/((a*d)-(b*c));	//declaracao e calculo de y a aprtir da equacao de primeiro grau acima
	float x = (f-(d*y))/c;	//declaracao e calculo de x em funcao de y
	
	printf("\npelo metodo de comparacao, valor de x: %f, valor de y: %f", x, y);	//mostra valores de x e y
	fprintf(arquivoSistemas3,"\n(%.2f*x + %.2f*y = %.2f)\n", a, b, e);		//grava equacao 1 no arquivo
	fprintf(arquivoSistemas3,"(%.2f*x + %.2f*y = %.2f)\n", c, d, f);		//grava equacao 2 no arquivo
	fprintf(arquivoSistemas3, "pelo metodo de comparacao, valor de x: %f, valor de y: %f\n", x, y);	//grava valores de x e y no arquivo
	fclose(arquivoSistemas3);	//fecha arquivo
}

void cramer(double a, double b, double c, double d, double e, double f)	//inicio funcao cramer
{
	FILE *arquivoSistemas4;	//declaracao de ponteiro para arquivo
	arquivoSistemas4 = fopen("arquivoSistemas.txt","a");	//abrindo arquivo para escrita a partir do ultimo caracter e relacionando-o a uma variavel
	double x, y;	//declaracao de resolucoes x e y do sistema
	x = ((e*d) - (b*f)) / ((a*d) - (b*c));	//formula do metodo de cramer para x
	y = ((a*f) - (e*c)) / ((a*d) - (b*c));	//formula do metodo de cramer para y
	printf("\npelo metodo de cramer, valor de x: %f, valor de y: %f", x, y);	//mostra valores de x e y
	fprintf(arquivoSistemas4,"\n(%.2f*x + %.2f*y = %.2f)\n", a, b, e);		//grava equacao 1 no arquivo
	fprintf(arquivoSistemas4,"(%.2f*x + %.2f*y = %.2f)\n", c, d, f);		//grava equacao 2 no arquivo
	fprintf(arquivoSistemas4, "pelo metodo de cramer, valor de x: %f, valor de y: %f\n", x, y);	//grava valores de x e y no arquivo
	fclose(arquivoSistemas4);	//fecha arquivo
}

void main()
{
	FILE *arquivoSistemas;	//declaracao de ponteiro para arquivo
	arquivoSistemas = fopen("arquivoSistemas.txt","w");	//abrindo arquivo para escrita a partir do zero e relacionando-o a uma variavel
	int metodo;	//declaracao da variavel que escolhe o metodo a ser utilizado
	
	while(1)
	{
		printf("\nescolha o metodo. 1: adicao, 2: cramer, 3: substituicao, 4: comparacao\n");
		scanf("%d", &metodo);	//escaneamento da variavel que escolhe o metodo a ser utilizado
		float a, b, c, d, e, f;		//declaracao dos fatores do sistema
		printf("\ninsira os valores dos coeficientes a, b, c, d, e, f do sistema linear\n");	//pede entrada dos fatores do sistema
		printf("(a*x + b*y = e)\n");	//mostra modelo da equacao 1
		printf("(c*x + d*y = f)\n");	//mostra modelo da equacao 2
		scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);	//escaneia os fatores do sistema
		
		if(metodo==1)adicao(a, b, c, d, e, f);			//se a variavel inserida for 1, executa a funcao adicao
		else if(metodo==2)cramer(a, b, c, d, e, f);		//se a variavel inserida for 2, executa a funcao adicao
		else if(metodo==3)substituicao(a, b, c, d, e, f);//se a variavel inserida for 3, executa a funcao adicao
		else if(metodo==4)comparacao(a, b, c, d, e, f);	//se a variavel inserida for 4, executa a funcao adicao
		else{printf("metodo invalido");}				//se a variavel inserida for outra, mostra que o metodo escolhido e invalido
		
	}
	fclose(arquivoSistemas);	//fecha arquivo
	return;	//fim do programa
}
