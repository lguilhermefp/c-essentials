#include <stdio.h>		//incluir uso de biblioteca stdio.h
#include <stdlib.h>		//incluir uso de biblioteca stdlib.h
#include <math.h>		//incluir uso de biblioteca math.h
#include <locale.h>		//incluir uso de biblioteca locale.h
#define MAX 100			//definir constante para vetores

int derivadaPolinomio()		//inicio da funcao
{
	FILE *arquivo1;							//declaracao de ponteiro de arquivo
	arquivo1 = fopen("arquivo.txt","a");	//abrindo arquivo em forma de escrita a partir do ultimo caracter e armazenando-o numa variavel
	
	int numeroFatores = 0;	//declaracao de variavel que contem o numero de fatores no polinomio
	float coeficiente[MAX];	//declaracao de vetor que guarda os coeficientes do polinomio
	float expoente[MAX];	//declaracao de vetor que guarda os valores dos expoentes de x
	
	printf("insira o numero de fatores\n");	//pede insercao de numero de fatores do polinomio
	scanf("%d", &numeroFatores);		//escaneia a quantidade de fatores no polinomio
	
	int i;	//declaracao de variavel de iteracao
	for(i=0; i<numeroFatores; i++)		//inicio de laco: cada passagem do laco le um fator do polinomio
	{
		printf("insira o coeficiente %d\n", i+1);	//pede insercao do coeficiente do fator do polinomio
		scanf("%f", &coeficiente[i]);				//escaneia o coeficiente do fator do polinomio
		printf("insira o expoente %d\n", i+1);		//pede insercao do expoente de x do fator do polinomio
		scanf("%f", &expoente[i]);					//escaneia o expoente de x do fator do polinomio
	}
	int j;		//declaracao de variavel de iteracao
	for(j=0; j<numeroFatores; j++)		//inicio de laco: cada passagem do laco mostra e grava no arquivo um fator do polinomio
	{
		if(coeficiente[j]*expoente[j] >= 0){fprintf (arquivo1,"+");	printf ("+");}	//mostra no console e grava no arquivo o caracter "+" antes de cada fator positivo do polinomio
		
		if(coeficiente[j]*expoente[j] != 0 && expoente[j]!=0)	//se fator for nulo, nao e mostrado
		fprintf(arquivo1,"%.1fx^%.1f", coeficiente[j]*expoente[j], expoente[j]-1);	printf("%.1fx^%.1f", coeficiente[j]*expoente[j], expoente[j]-1); //mostra no console e grava no arquivo o fator positivo do polinomio
	}
	fprintf(arquivo1,"\n");	//pula linha no arquivo antes da proxima operacao
	fclose(arquivo1);	//fecha o arquivo
}

int integralPolinomio()
{
	FILE *arquivo2;	//declaracao de ponteiro de arquivo
	arquivo2 = fopen("arquivo.txt","a");		//abrindo arquivo em forma de escrita a partir do ultimo caracter e armazenando-o numa variavel
	
	int numeroFatores = 0;		//declaracao de variavel que contem o numero de fatores no polinomio
	float coeficiente[MAX];		//declaracao de vetor que guarda os coeficientes do polinomio
	float expoente[MAX];		//declaracao de vetor que guarda os valores dos expoentes de x no polinomio
	
	printf("insira o numero de fatores\n");
	scanf("%d", &numeroFatores);	//escaneia a quantidade de fatores no polinomio
	
	int i;	//declaracao de variavel de iteracao
	for(i=0; i<numeroFatores; i++)	//inicio de laco: cada passagem do laco le um fator do polinomio
	{
		printf("insira o coeficiente %d\n", i+1);	//pede insercao do coeficiente do fator do polinomio
		scanf("%f", &coeficiente[i]);				//escaneia o coeficiente do fator do polinomio
		printf("insira o expoente %d\n", i+1);		//pede insercao do expoente de x do fator do polinomio
		scanf("%f", &expoente[i]);					//escaneia o expoente de x do fator do polinomio
	}
	int j;	//declaracao de variavel de iteracao
	for(j=0; j<numeroFatores; j++)	//inicio de laco: cada passagem do laco mostra e grava no arquivo um fator do polinomio
	{
		if(coeficiente[j]*expoente[j] >= 0){fprintf (arquivo2,"+");}
		
		if(coeficiente[j]/(expoente[j]+1) != 0 && expoente[j]!=0)		//se fator for nulo, nao e mostrado
		fprintf(arquivo2, "%.1fx^%.1f", coeficiente[j]/(expoente[j]+1), expoente[j]+1);	//mostra no console e grava no arquivo o fator positivo do polinomio
	}
	fprintf (arquivo2,"\n");	//pula linha no arquivo antes da proxima operacao
	fclose(arquivo2);			//fecha o arquivo
}

void derivadaFuncaoTrigonometrica(int a, float x)	//inicio da funcao para calculo de derivada trigonometrica
{
	FILE *arquivo;						//declaracao de ponteiro de arquivo
	arquivo = fopen("arquivo.txt","a");	//abrindo arquivo em forma de escrita a partir do ultimo caracter e armazenando-o numa variavel
	
	float c;	//declaracao de variavel para armazenar resultado do calculo de funcao
	float d;	//declaracao de variavel para auxiliar no calculo de funcao
	char funcao[1] = "";	//declaracao de variavel para armazenar funcao a ser derivada
	
	switch(a)	//funcao switch para executar codigo dependendo do valor de a da chamada da funcao
	{
		case 1:	//caso variavel seja "a" 1, é executado case 1
//			b=sin(x);
			printf("derivada de sen(%.2f): %.2f", x, cos(x));				//mostra expressao no console
			fprintf(arquivo, "derivada de sen(%.2f): %.2f,", x, cos(x));		//grava expressao no arquivo

			printf("\ninsira uma funcao de x\n");	//pede insersao de funcao de x para derivar
			scanf("%s", &funcao);
			printf("\npara seno de funcao %s: cos(%s) * d(%s)/dx", funcao, funcao, funcao);						//mostra expressao no console
			fprintf(arquivo, "	para seno de funcao (%s): cos(%s) * d(%s)/dx\n", funcao, funcao, funcao);		//grava expressao no arquivo
			break;//encerra case 1
		case 2://caso variavel seja "a" 2, é executado case 2
//			b=cos(x);
			printf("derivada de cos(%.2f): %.2f", x, -sin(x));					//mostra expressao no console
			fprintf(arquivo, "derivada de cos(%.2f): %.2f,", x, -sin(x));		//grava expressao no arquivo
			printf("\ninsira uma funcao de x\n");		//pede insersao de funcao de x para derivar
			scanf("%s", &funcao);
			printf("para cosseno de funcao %s: -sen(%s) * d(%s)/dx", funcao, funcao, funcao);						//mostra expressao no console
			fprintf(arquivo, "	para cosseno de funcao (%s): -sen(%s) * d(%s)/dx\n", funcao, funcao, funcao);		//grava expressao no arquivo
			break;//encerra case 2
		case 3: //caso variavel seja "a" 3, é executado case 3
//			b=tan(x);
			c=1/(pow(cos(x),2));	//calculo de derivada da funcao
			printf("derivada de tan(%.2f): %.2f", x, c);//mostra expressao no console
			fprintf(arquivo, "derivada de tan(%.2f): %.2f,", x, c);		//grava expressao no arquivo
			printf("\ninsira uma funcao de x\n");//pede insercao de funcao de x para derivar
			scanf("%s", &funcao);		//escaneia funcao de x
			printf("1/cos^2(%s) * d(%s)/dx", funcao, funcao);		//mostra expressao no console
			fprintf(arquivo, "	para tangente de funcao (%s): 1/cos^2(%s) * d(%s)/dx\n", funcao, funcao, funcao);		//grava expressao no arquivo
			break;//encerra case 3
		case 4: //caso variavel seja "a" 4, é executado case 4
//			b=1/tan(x);
			c=-1/(pow(sin(x),2));	//calculo de derivada da funcao
			printf("derivada de cot(%.2f): %.2f", x, c);//mostra expressao no console
			fprintf(arquivo, "derivada de cot(%.2f): %.2f,", x, c);		//grava expressao no arquivo
			printf("\ninsira uma funcao de x\n");//pede insercao de funcao de x para derivar
			scanf("%s", &funcao);//escaneia funcao de x
			printf("1/sen^2(%s) * d(%s)/dx", funcao, funcao);		//mostra expressao no console
			fprintf(arquivo, "	para cot de funcao (%s): 1/sen^2(%s) * d(%s)/dx\n", funcao, funcao, funcao);		//grava expressao no arquivo
			break;//encerra case 4
		case 5: //caso variavel seja "a" 5, é executado case 5
//			b=1/cos(x);
			c=tan(x)/cos(x);	//calculo de derivada da funcao
			printf("derivada de sec(%.2f): %.2f,", x, c);//mostra expressao no console
			fprintf(arquivo, "derivada de sec(%.2f): %.2f,", x, c);		//grava expressao no arquivo
			printf("\ninsira uma funcao de x\n");//pede insercao de funcao de x para derivar
			scanf("%s", &funcao);//escaneia funcao de x
			printf("tan(%s)/cos(%s)d(%s) * /dx", funcao, funcao, funcao);//mostra expressao no console
			fprintf(arquivo,"	para sec de funcao (%s): tan(%s)/cos(%s)d(%s) * /dx\n", funcao, funcao, funcao, funcao);	//grava expressao no arquivo
			break;//encerra case 5
		case 6: //caso variavel seja "a" 6, é executado case 6
//			b=1/sin(x);
			c=-1/(sin(x)*tan(x));	//calculo de derivada da funcao
			printf("derivada de cossec(%.2f): %.2f,", x, c);//mostra expressao no console
			fprintf(arquivo, "derivada de cossec(%.2f): %.2f,", x, c);		//grava expressao no arquivo
			printf("\ninsira uma funcao de x\n");//pede insercao de funcao de x para derivar
			scanf("%s", &funcao);//escaneia funcao de x
			printf("-1/(sen(%s)tan(%s)) * d(%s)/dx", funcao, funcao, funcao);//mostra expressao no console
			fprintf(arquivo, "	 para cossec de funcao (%s): -1/(sen(%s)tan(%s)) * d(%s)/dx\n", funcao, funcao, funcao, funcao);	//grava expressao no arquivo
			break;//encerra case 6
		case 7: //caso variavel seja "a" 7, é executado case 7
//			b=sin^-1(x);
			d = 1-pow(x,2);		//calculo de parte da derivada da funcao
			c = 1/(sqrt(1/d));//calculo de derivada da funcao
			printf("derivada de arc sen(%.2f): %.2f,", x, c);//mostra expressao no console
			fprintf(arquivo, "derivada de arc sen(%.2f): %.2f,", x, c);		//grava expressao no arquivo
			printf("\ninsira uma funcao de x\n");//pede insercao de funcao de x para derivar
			scanf("%s", &funcao);//escaneia funcao de x
			printf("1/(r(1/1-(%s)2)) * d(%s)/dx", funcao, funcao);//mostra expressao no console
			fprintf(arquivo, "	para arc sen de funcao (%s): 1/(r(1/1-(%s)2)) * d(%s)/dx\n", funcao, funcao, funcao);	//grava expressao no arquivo
			break;	//encerra case 7
		case 8: //caso variavel seja "a" 8, é executado case 8
//			b=cos^-1(x);
			c = -1/sqrt(1/(1-(x*x)));//calculo de derivada da funcao
			printf("derivada de arc cos(%.2f): %.2f,", x, c);//mostra expressao no console
			fprintf(arquivo, "derivada de arc cos(%.2f): %.2f,", x, c);	//grava expressao no arquivo
			printf("\ninsira uma funcao de x\n");//pede insercao de funcao de x para derivar
			scanf("%s", &funcao);//escaneia funcao de x
			printf("-1/(r(1/1-^2)) * d(%s)/dx", funcao, funcao);//mostra expressao no console
			fprintf(arquivo, "	para arc cos de funcao (%s): -1/(r(1/1-^2)) * d(%s)/dx\n", funcao, funcao, funcao);		//grava expressao no arquivo
			break;//encerra case 8
		case 9: //caso variavel seja "a" 9, é executado case 9
//			b=tan^-1(x);
			c = 1/(1+(x*x));//calculo de derivada da funcao
			printf("derivada de arc tan(%.2f): %.2f,", x, c);//mostra expressao no console
			fprintf(arquivo, "derivada de arc tan(%.2f): %.2f,", x, c);			//grava expressao no arquivo
			printf("\ninsira uma funcao de x\n");//pede insercao de funcao de x para derivar
			scanf("%s", &funcao);//escaneia funcao de x
			printf("1/(1+(%s)^2) * d(%s)/dx", funcao, funcao);
			printf("	para arc tan de funcao (%s): 1/(1+(%s)^2) * d(%s)/dx\n", funcao, funcao, funcao);//mostra expressao no console
			fprintf(arquivo, "	para arc tan de funcao (%s): 1/(1+(%s)^2) * d(%s)/dx\n", funcao, funcao, funcao);				//grava expressao no arquivo
			break;//encerra case 9
		case 10: //caso variavel seja "a" 10, é executado case 10
//			b=1/tan^-1(x);
			c = -1/(1+(x*x));	//calculo de derivada da funcao
			printf("derivada de arc cotan(%.2f): %.2f,", x, c);//mostra expressao no console
			fprintf(arquivo, "derivada de arc cotan(%.2f): %.2f,", x, c);	//grava expressao no arquivo
			printf("\ninsira uma funcao de x\n");//pede insercao de funcao de x para derivar
			scanf("%s", &funcao);//escaneia funcao de x
			printf("	para arc cotan de funcao (%s): -1/(1+(%s)^2) * d(%s)/dx\n", funcao, funcao, funcao);//mostra expressao no console
			fprintf(arquivo, "	para arc cotan de funcao (%s): -1/(1+(%s)^2) * d(%s)/dx\n", funcao, funcao, funcao);	//grava expressao no arquivo
			break;//encerra case 10
		case 11: //caso variavel seja "a" 11, é executado case 11
//			b=1/cos^-1(x);
			c = 1/(x*sqrt((x*x)-1));//calculo de derivada da funcao
			if(c<0){c = c*(-1);}
			printf("derivada de arc sec(%.2f): %.2f,", x, c);//mostra expressao no console
			fprintf(arquivo, "derivada de arc sec(%.2f): %.2f,", x, c);		//grava expressao no arquivo
			printf("\ninsira uma funcao de x\n");//pede insercao de funcao de x para derivar
			scanf("%s", &funcao);//escaneia funcao de x
			printf("1/(|%s|*r(x^2 -1)) * (%s)/dx", funcao, funcao);//mostra expressao no console
			fprintf(arquivo, "	para arc sen de (%s): 1/(|%s|*r(x^2 -1)) * (%s)/dx\n", funcao, funcao, funcao);	//grava expressao no arquivo
			break;//encerra case 11
		case 12: //caso variavel seja "a" 12, é executado case 12
//			b=1/sen^-1(x);
			c = 1/(x*sqrt((x*x)-1));//calculo de derivada da funcao
			if(c>0){c = c*(-1);}
			printf("derivada de arc cossec(%.2f): %.2f,", x, c);//mostra expressao no console
			fprintf(arquivo, "derivada de arc cossec(%.2f): %.2f,", x, c);			//grava expressao no arquivo	
			printf("\ninsira uma funcao de x\n");//pede insercao de funcao de x para derivar
			scanf("%s", &funcao);//escaneia funcao de x
			printf("-1/(|%s|*r(x^2 -1)) * (%s)/dx", funcao, funcao);//mostra expressao no console
			fprintf(arquivo, "	para arc cossec de (%s): -1/(|%s|*r(x^2 -1)) * (%s)/dx\n", funcao, funcao, funcao);	//grava expressao no arquivo
			break;//encerra case 12
	}
	fclose(arquivo);	//fecha arquivo
}

void integralFuncaoTrigonometrica(int a)	//inicio de escrita da funcao para resolucao de integral trigonometrica
{
	FILE *arquivo;						//declaracao de ponteiro de arquivo
	arquivo = fopen("arquivo.txt","a");	//abrindo arquivo em forma de escrita a partir do ultimo caracter e armazenando-o numa variavel
	
	float expoente;						//declaracao de variavel que guarda o expoente usado na funcao trigonometrica
	switch(a)		//funcao switch para executar codigo dependendo do valor de a da chamada da funcao
	{
		case 1:	//caso variavel seja "a" 1, é executado case 1
//			b=sen^2(x)dx
			printf("integral indefinida de sen^2(x)dx: x/2 - sen(x)cos(x)/2 + c");				//mostra expressao no console
			fprintf(arquivo, "integral indefinida de sen^2(x)dx: x/2 - sen(x)cos(x)/2 + c\n");	//grava expressao no arquivo
			break;			//encerra case 1
		case 2:	//caso variavel seja "a" 2, é executado case 2
//			b=cos^2(x)dx
			printf("integral indefinida de cos^2(x)dx: x/2 + sen(x)cos(x)/2 + c");//mostra expressao no console
			fprintf(arquivo, "integral indefinida de cos^2(x)dx: x/2 + sen(x)cos(x)/2 + c\n");	//grava expressao no arquivo
			break;			//encerra case 2
		case 3:	//caso variavel seja "a" 3, é executado case 3
//			b = tg^2(x)dx
			printf("integral indefinida de tg^2(x)dx: tg(x) - x + c");//mostra expressao no console
			fprintf(arquivo, "integral indefinida de tg^2(x)dx: tg(x) - x + c\n");	//grava expressao no arquivo
			break;			//encerra case 3
		case 4:	//caso variavel seja "a" 4, é executado case 4
//			b = sec^2(x)dx
			printf("integral indefinida de sec^2(x)dx: tg(x) + c");//mostra expressao no console
			fprintf(arquivo, "integral indefinida de sec^2(x)dx: tg(x) + c\n");	//grava expressao no arquivo
			break;			//encerra case 4
		case 5:	//caso variavel seja "a" 5, é executado case 5
//			b=sen(x)dx
			printf("integral indefinida de sen(x)dx = -cos(x) + c");//mostra expressao no console
			fprintf(arquivo, "integral indefinida de sen(x)dx = -cos(x) + c\n");	//grava expressao no arquivo
			break;			//encerra case 5
		case 6:	//caso variavel seja "a" 6, é executado case 6
//			b=cos(x)
			printf("integral indefinida de cos(x)dx = sen(x) + c");//mostra expressao no console
			fprintf(arquivo, "integral indefinida de cos(x)dx = sen(x) + c\n");	//grava expressao no arquivo
			break;			//encerra case 6
		case 7:	//caso variavel seja "a" 7, é executado case 7
//			b=tg(x)dx
			printf("integral indefinida de tg(x)dx = ln|sec(x)|dx + c");//mostra expressao no console
			fprintf(arquivo, "integral indefinida de tg(x)dx = ln|sec(x)|dx + c\n");	//grava expressao no arquivo
			break;			//encerra case 7
		case 8:	//caso variavel seja "a" 8, é executado case 8
//			b=sec(x)dx
			printf("integral indefinida de sec(x)dx = ln|sec x + tg x| + c");//mostra expressao no console
			fprintf(arquivo, "integral indefinida de sec(x)dx = ln|sec x + tg x| + c\n");	//grava expressao no arquivo
			break;			//encerra case 8
		case 9:	//caso variavel seja "a" 9, é executado case 9
//			b = sen^n(x)dx
			printf("insira um expoente\n");	//pede entrada de expoente da funcao
			scanf("%f", &expoente);	//escaneia expoente da funcao
			printf("integral de sen^%.2f(x) dx = (%.2f)*sen^(%.2f)x*cos(x)+((%.2f)/n)*integral(sen^%.2f(x)dx)", expoente, 1/expoente, expoente-1, expoente-1, expoente-2);//mostra expressao no console
			fprintf(arquivo, "integral de sen^%.2f(x) dx = (%.2f)*sen^(%.2f)x*cos(x)+((%.2f)/n)*integral(sen^%.2f(x)dx)\n", expoente, 1/expoente, expoente-1, expoente-1, expoente-2);	//grava expressao no arquivo
			break;			//encerra case 9
		case 10: //caso variavel seja "a" 10, é executado case 10
//			b = cos^n(x)dx
			printf("insira um expoente\n");	//pede entrada de expoente da funcao
			scanf("%f", &expoente);	//escaneia expoente da funcao
			printf("integral de cos^%.2f(x) dx = (%.2f)*cos^(%.2f)x*sen(x)+((%.2f)/n)*integral(cos^%.2f(x)dx)", expoente, 1/expoente, expoente-1, expoente-1, expoente-2);//mostra expressao no console
			fprintf(arquivo, "integral de cos^%.2f(x) dx = (%.2f)*cos^(%.2f)x*sen(x)+((%.2f)/n)*integral(cos^%.2f(x)dx)\n", expoente, 1/expoente, expoente-1, expoente-1, expoente-2);	//grava expressao no arquivo
			break;			//encerra case 10
		case 11: //caso variavel seja "a" 11, é executado case 11
//			b = tan^n(x)dx
			printf("insira um expoente\n");	//pede entrada de expoente da funcao
			scanf("%f", &expoente);	//escaneia expoente da funcao
			printf("integral de cos^%.2f(x) dx = tg^%.2f(x)/%.2f - integral(tg^%.2f(x))", expoente, expoente-1, expoente-1, expoente-2);//mostra expressao no console
			fprintf(arquivo, "integral de cos^%.2f(x) dx = tg^%.2f(x)/%.2f - integral(tg^%.2f(x)\n)", expoente, expoente-1, expoente-1, expoente-2);	//grava expressao no arquivo
			break;			//encerra case 11
	}
	fclose(arquivo);		//fecha arquivo
}

int main(void)
{
	setlocale(LC_ALL, "Portuguese");	//funcao para leitura de caracteres especiais (com acento)
	FILE *arquivo;				//declaracao de ponteiro de arquivo
	
	arquivo = fopen("C:\\Users\\Usuário\\Desktop\\projetos pc1\\arquivo.txt","w");	//abrindo arquivo em forma de escrita a partir do zero armazenando-o numa variavel
	if(arquivo == NULL)			//caso programa nao exista
	{printf("arquivo nao encontrado"); return 3;}	//se arquivo não existir, mostra mensagem e encerra o programa
	
	while(1){
		int operacao;	//declaracao de variavel para escolha de operacao
		printf("\nescolha a operacao:\n1: integral de um polinomio, 2: derivada de um polinomio, 3: derivada de uma funcao trigonometrica, ");	//pede entrada de numero para escolha de operacao
		printf("4: integral de uma funcao trigonometrica, 5: sair\n");																			//pede entrada de numero para escolha de operacao
		scanf("%d", &operacao);	//escaneia operacao
		if(operacao == 1)		//para escolher opcao derivada de polinomio
		{
			derivadaPolinomio();	//chamada da funcao
			printf("\n");			//pula linha depois da chamada da funcao
		}
		else if(operacao == 2)		//para escolher opcao integral de polinomio
		{
			integralPolinomio();	//chamada da funcao
			printf("\n");			//pula linha depois da chamada da funcao
		}
		else if(operacao == 3)	//para escolher operacao derivada de funcao trigonometrica
		{
			int escolha;		//declaracao de variavel para escolha de funcao	
			float escolha2;		//declaracao de variavel para funcao sem x
			printf("escolha a funcao trigonometrica para derivar:\n1: seno, 2: cosseno, 3: tangente, 4: cotangente, 5: secante, 6: cossecante,");	//pedido de numero para escolher a funcao trigonometrica
			printf("7: arcsen, 8: arccos, 9: arctg, 10: arccotan, 11: arcsec, 12: arccossec\n");	//pedido de numero para escolher a funcao trigonometrica
			scanf("%d", &escolha);														//escaneia qual funcao trigonometrica sera usada na chamada da funcao
			printf("determine um numero racional:\n");									//mostra pedido de insercao de numero para ser usado na funcao trigonometrica sem x
			scanf("%f", &escolha2);														//escaneia numero para ser usado na funcao trigonometrica sem x
			if(escolha > 12 || escolha < 1){printf("opcao invalida"); return 1;}		//se opcao for invalida, retorna 1 e encerra o programa
			derivadaFuncaoTrigonometrica(escolha, escolha2);							//chama funcao
		}
		else if(operacao == 4)	//para escolher operacao integral trigonometrica
		{
			printf("escolha a funcao trigonometrica para integrar:\n1: sen^2(x)dx, 2: cos^2(x)dx, 3: tg^2(x)dx, 4: sec^2(x)dx, 5: sen(x)dx, 6:cos(x),");	//pedido de numero para escolher a funcao trigonometrica
			printf("7: tg(x)dx, 8: sec(x)dx, 9: sen^n(x)dx, 10: cos^n(x)dx, 11: tan^n(x)dx\n");			//pedido de numero para escolher a funcao trigonometrica
			int escolha3;							//declaracao de variavel para determinar qual funcao trigonometrica acima sera chamada na funcao
			scanf("%d", &escolha3);					//escaneia qual funcao trigonometrica sera usada na chamada da funcao
			if(escolha3 > 11 || escolha3 < 1){printf("opcao invalida"); return 1;}		//se opcao for invalida, retorna 1 e encerra o programa
			integralFuncaoTrigonometrica(escolha3);		//chama funcao
		}
		else if(operacao == 5){		//para encerrar o programa
			fclose(arquivo);		//fecha arquivo
			return 2;				//retorna 2, finalizando o programa
		}
		else
			printf("opcao invalida"); //mostra que a opcao e invalida caso a operacao nao seja uma das opcoes dadas
	}
	fclose(arquivo);	//fecha arquivo
	return 0;			//retorna, finalizando o programa
}
