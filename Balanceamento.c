#include <stdio.h>	//incluir uso de biblioteca stdio.h
#include <stdlib.h>	//incluir uso de biblioteca stdlib.h
#include <string.h>	//incluir uso de biblioteca string.h

void analiseMolecula()
{
	int coeficienteMolecula1;				//declaracao do primeiro coeficiente estequiometrico
	printf("Coeficiente estequimetrico do reagente 1: ");	//pedido de insercao de coeficiente estequimetrico
	scanf("%d",&coeficienteMolecula1);		//leitura do primeiro coeficiente estequiometrico
	
	//molecula 1
	char atomo1[2];							//declaracao da representacao do primeiro atomo
	printf("para cada atomo a seguir, digite um caracter ou mais caracteres que o represente\n" );//pede entrada da representacao dos atomos
	printf("reagente 1, atomo 1:" );		//pede entrada da representacao do primeiro atomo do primeiro reagente
	scanf("%s", &atomo1);					//leitura da representacao do primeiro atomo
	int quantidadeAtomo1;					//declaracao variavel quantidade do atomo 1
	printf("quantidade: ");					//pede entrada da quantidade do primeiro atomo do primeiro reagente
	scanf("%d", &quantidadeAtomo1);			//leitura da quantidade do primeiro atomo
	
	
	char atomo2[2];							//declaracao da representacao do segundo atomo
	printf("reagente 1, atomo 2: ");		//pede entrada da representacao do segundo atomo do primeiro reagente
	scanf("%s", &atomo2);					//leitura da representacao do segundo atomo
	int quantidadeAtomo2;					//declaracao variavel quantidade do atomo 2
	printf("quantidade: ");					//pede entrada da quantidade do segundo atomo do primeiro reagente
	scanf("%d", &quantidadeAtomo2);			//leitura da quantidade do segundo atomo
	
	char atomo3[2];							//declaracao da representacao do terceiro atomo
	printf("reagente 1, atomo 3: ");		//pede entrada da representacao do terceiro atomo do primeiro reagente
	scanf("%s", &atomo3);					//leitura da representacao do terceiro atomo
	int quantidadeAtomo3;					//declaracao variavel quantidade do atomo 3
	printf("quantidade: ");					//pede entrada da quantidade do terceiro atomo do primeiro reagente
	scanf("%d", &quantidadeAtomo3);			//leitura da quantidade do terceiro atomo
	
	//molecula 2
	int coeficienteMolecula2;				//declaracao do segundo coeficiente estequiometrico
	printf("Coeficiente estequimetrico do reagente 2: ");	//pedido de insercao de coeficiente estequimetrico
	scanf("%d",&coeficienteMolecula2);		//leitura do segundo coeficiente estequiometrico
	
	char atomo1_2[2];						//declaracao da representacao do quarto atomo
	printf("reagente 2, atomo 1: ");		//pede entrada da representacao do primeiro atomo do segundo reagente
	scanf("%s", &atomo1_2);					//leitura da representacao do quarto atomo
	int quantidadeAtomo1_2;					//declaracao variavel quantidade do atomo 4
	printf("quantidade: ");					//pede entrada da quantidade
	scanf("%d", &quantidadeAtomo1_2);		//leitura da quantidade do quarto atomo
	
	char atomo2_2[2];						//declaracao da representacao do quinto atomo
	printf("reagente 2, atomo 2: ");		//pede entrada da representacao do segundo atomo do segundo reagente
	scanf("%s", &atomo2_2);					//leitura da representacao do quinto atomo
	int quantidadeAtomo2_2;					//declaracao variavel quantidade do atomo 5
	printf("quantidade: ");					//pede entrada da quantidade
	scanf("%d", &quantidadeAtomo2_2);		//leitura da quantidade do quinto atomo
	
	char atomo3_2[2];						//declaracao da representacao do sexto atomo
	printf("reagente 2, atomo 3: ");		//pede entrada da representacao do terceiro atomo do segundo reagente
	scanf("%s", &atomo3_2);					//leitura da representacao do sexto atomo
	int quantidadeAtomo3_2;					//declaracao variavel quantidade do atomo 6
	printf("quantidade: ");					//pede entrada da quantidade
	scanf("%d", &quantidadeAtomo3_2);		//leitura da quantidade do sexto atomo
	
	//molécula 3
	int coeficienteMolecula1_P;				//declaracao do terceiro coeficiente estequiometrico
	printf("Coeficiente estequimetrico do produto 1: ");//pede entrada da representacao do primeiro atomo do primeiro produto
	scanf("%d",&coeficienteMolecula1_P);	//leitura do terceiro coeficiente estequiometrico
	
	char atomo1_P[2];						//declaracao da representacao do primeiro atomo dos produtos
	printf("produto 1, atomo 1: ");			//pede entrada da representacao do atomo
	scanf("%s", &atomo1_P);					//leitura da representacao do primeiro atomo dos produtos
	int quantidadeAtomo1_P;					//declaracao variavel quantidade do atomo
	printf("quantidade: ");					//pede entrada da quantidade
	scanf("%d", &quantidadeAtomo1_P);		//leitura da representacao do primeiro atomo dos produtos
	
	char atomo2_P[2];						//declaracao da representacao do segundo atomo dos produtos
	printf("produto 1, atomo 2: ");			//pede entrada da representacao do segundo atomo do primeiro produto
	scanf("%s", &atomo2_P);					//leitura da representacao do segundo atomo dos produtos
	int quantidadeAtomo2_P;					//declaracao variavel quantidade do atomo
	printf("quantidade: ");					//pede entrada da quantidade
	scanf("%d", &quantidadeAtomo2_P);		//leitura da representacao do segundo atomo dos produtos
	
	char atomo3_P[2];						//declaracao da representacao do terceiro atomo dos produtos
	printf("produto 1, atomo 3: ");			//pede entrada da representacao do terceiro atomo do primeiro produto
	scanf("%s", &atomo3_P);					//leitura da representacao do terceiro atomo dos produtos
	int quantidadeAtomo3_P;					//declaracao variavel quantidade do atomo
	printf("quantidade: ");					//pede entrada da quantidade
	scanf("%d", &quantidadeAtomo3_P);		//leitura da quantidade do terceiro atomo dos produtos
	
	//molecula 4
	int coeficienteMolecula2_P;			//declaracao do quarto coeficiente estequiometrico
	printf("Coeficiente estequimetrico do produto 2: ");	//pede entrada da representacao do primeiro atomo do primeiro produto
	scanf("%d",&coeficienteMolecula2_P);	//leitura do primeiro coeficiente estequiometrico
	
	char atomo1_P2[2];						//declaracao da representacao do quarto atomo dos produtos
	printf("produto 2, atomo 1: ");			//pede entrada da representacao do primeiro atomo do segundo produto
	scanf("%s", &atomo1_P2);				//leitura da representacao do quarto atomo dos produtos
	int quantidadeAtomo1_P2;				//declaracao variavel quantidade do atomo
	printf("quantidade: ");					//pede entrada da quantidade
	scanf("%d", &quantidadeAtomo1_P2);		//leitura da quantidade do quarto atomo dos produtos
	
	char atomo2_P2[2];						//declaracao da representacao do quinto atomo dos produtos
	printf("produto 2, atomo 2: ");			//pede entrada da representacao do segundo atomo do segundo produto
	scanf("%s", &atomo2_P2);				//leitura da representacao do quinto atomo dos produtos
	int quantidadeAtomo2_P2;				//declaracao variavel quantidade do atomo
	printf("quantidade: ");					//pede entrada da quantidade
	scanf("%d", &quantidadeAtomo2_P2);		//leitura da quantidade do quinto atomo dos produtos
	
	char atomo3_P2[2];						//declaracao da representacao do sexto atomo dos produtos
	printf("produto 2, atomo 3: ");			//pede entrada da representacao do terceiro atomo do segundo produto
	scanf("%s", &atomo3_P2);				//leitura da representacao do sexto atomo dos produtos
	int quantidadeAtomo3_P2;				//declaracao variavel quantidade do atomo
	printf("quantidade: ");					//pede entrada da quantidade
	scanf("%d", &quantidadeAtomo3_P2);		//leitura da quantidade do sexto atomo dos produtos
	
	printf("%d %s%d%s%d%s%d + %d %s%d%s%d%s%d <=> %d %s%d%s%d%s%d + %d %s%d%s%d%s%d",				//mostra equacao completa
		coeficienteMolecula1, atomo1, quantidadeAtomo1, atomo2, quantidadeAtomo2, atomo3, quantidadeAtomo3,
		coeficienteMolecula2, atomo1_2, quantidadeAtomo1_2, atomo2_2, quantidadeAtomo2_2, atomo3_2, quantidadeAtomo3_2,
		coeficienteMolecula1_P, atomo1_P, quantidadeAtomo1_P, atomo2_P, quantidadeAtomo2_P, atomo3_P, quantidadeAtomo3_P,
		coeficienteMolecula2_P, atomo1_P2, quantidadeAtomo1_P2, atomo2_P2, quantidadeAtomo2_P2, atomo3_P2, quantidadeAtomo3_P2
															);
	
	
	int totalAtomo1 = quantidadeAtomo1 * coeficienteMolecula1;	//declaracao da quantidade total do atomo 1 dos reagentes
	int totalAtomo2 = quantidadeAtomo2 * coeficienteMolecula1;	//declaracao da quantidade total do atomo 2 dos reagentes
	int totalAtomo3 = quantidadeAtomo3 * coeficienteMolecula1;	//declaracao da quantidade total do atomo 3 dos reagentes
	
	int quantidadeAtomo1_2G, quantidadeAtomo2_2G, quantidadeAtomo3_2G;	//declaracao de variavel pra gravar a quantidade de cada atomo da segunda molecula dos reagentes para zerar a variavel
	int quantidadeAtomo1_P2G, quantidadeAtomo2_P2G, quantidadeAtomo3_P2G;	//declaracao de variavel pra gravar a quantidade de cada atomo da segunda molecula dos produtos para zerar a variavel
															
	//contagem do atomo 1 dos reagentes
	if(strcmp(atomo1, atomo1_2)==0){totalAtomo1 += quantidadeAtomo1_2*coeficienteMolecula2;		quantidadeAtomo1_2G = quantidadeAtomo1_2; quantidadeAtomo1_2=0;}//condicional para encontrar na segunda molecula dos reagentes um atomo com representacao igual ao primeiro atomo do reagente, comparando o primeiro atomo do reagente com o primeiro do segundo
	if(strcmp(atomo1, atomo2_2)==0){totalAtomo2 += quantidadeAtomo2_2*coeficienteMolecula2;		quantidadeAtomo2_2G = quantidadeAtomo2_2; quantidadeAtomo2_2=0;}//condicional para encontrar na segunda molecula dos reagentes um atomo com representacao igual ao primeiro atomo do reagente, comparando o primeiro atomo do reagente com o segundo do segundo
	if(strcmp(atomo1, atomo3_2)==0){totalAtomo3 += quantidadeAtomo3_2*coeficienteMolecula2;		quantidadeAtomo3_2G = quantidadeAtomo3_2; quantidadeAtomo3_2=0;}//condicional para encontrar na segunda molecula dos reagentes um atomo com representacao igual ao primeiro atomo do reagente, comparando o primeiro atomo do reagente com o terceiro do segundo
	
	//contagem do atomo 2 dos reagentes
	if(strcmp(atomo2, atomo1_2)==0){totalAtomo1 += quantidadeAtomo1_2*coeficienteMolecula2;		quantidadeAtomo1_2G = quantidadeAtomo1_2; quantidadeAtomo1_2=0;}//condicional para encontrar na segunda molecula dos reagentes um atomo com representacao igual ao segundo atomo do reagente, comparando o segundo atomo do reagente com o primeiro do segundo
	if(strcmp(atomo2, atomo2_2)==0){totalAtomo2 += quantidadeAtomo2_2*coeficienteMolecula2;		quantidadeAtomo2_2G = quantidadeAtomo2_2; quantidadeAtomo2_2=0;}//condicional para encontrar na segunda molecula dos reagentes um atomo com representacao igual ao segundo atomo do reagente, comparando o segundo atomo do reagente com o segundo do segundo
	if(strcmp(atomo2, atomo3_2)==0){totalAtomo3 += quantidadeAtomo3_2*coeficienteMolecula2;		quantidadeAtomo3_2G = quantidadeAtomo3_2; quantidadeAtomo3_2=0;}//condicional para encontrar na segunda molecula dos reagentes um atomo com representacao igual ao segundo atomo do reagente, comparando o segundo atomo do reagente com o terceiro do segundo
	
	//contagem do atomo 3 dos reagentes
	if(strcmp(atomo3, atomo1_2)==0){totalAtomo1 += quantidadeAtomo1_2*coeficienteMolecula2;		quantidadeAtomo1_2G = quantidadeAtomo1_2; quantidadeAtomo1_2=0;}//condicional para encontrar na segunda molecula dos reagentes um atomo com representacao igual ao terceiro atomo do reagente, comparando o terceiro atomo do reagente com o primeiro do segundo
	if(strcmp(atomo3, atomo2_2)==0){totalAtomo2 += quantidadeAtomo2_2*coeficienteMolecula2;		quantidadeAtomo2_2G = quantidadeAtomo2_2; quantidadeAtomo2_2=0;}//condicional para encontrar na segunda molecula dos reagentes um atomo com representacao igual ao terceiro atomo do reagente, comparando o terceiro atomo do reagente com o segundo do segundo
	if(strcmp(atomo3, atomo3_2)==0){totalAtomo3 += quantidadeAtomo3_2*coeficienteMolecula2;		quantidadeAtomo3_2G = quantidadeAtomo3_2; quantidadeAtomo3_2=0;}//condicional para encontrar na segunda molecula dos reagentes um atomo com representacao igual ao terceiro atomo do reagente, comparando o terceiro atomo do reagente com o terceiro do segundo
	
	printf("\nReagentes:\ntotal de %s: %d", atomo1, totalAtomo1);	//mostra a quantidade de cada atomo 1 dos reagentes
	printf("\ntotal de %s: %d", atomo2, totalAtomo2);				//mostra a quantidade de cada atomo 2 dos reagentes
	printf("\ntotal de %s: %d", atomo3, totalAtomo3);				//mostra a quantidade de cada atomo 3 dos reagentes
	if(quantidadeAtomo1_2!=0){printf("\ntotal de %s: %d", atomo1_2, quantidadeAtomo1_2*coeficienteMolecula2);}		//mostra a quantidade do atomo 4 dos reagentes. se a variavel no if for zero, e porque ele e igual a um dos anteriores e ja foi mostrado.
	if(quantidadeAtomo2_2!=0){printf("\ntotal de %s: %d", atomo2_2, quantidadeAtomo2_2*coeficienteMolecula2);}		//mostra a quantidade do atomo 5 dos reagentes. se a variavel no if for zero, e porque ele e igual a um dos anteriores e ja foi mostrado.
	if(quantidadeAtomo3_2!=0){printf("\ntotal de %s: %d", atomo3_2, quantidadeAtomo3_2*coeficienteMolecula2);}		//mostra a quantidade do atomo 6 dos reagentes. se a variavel no if for zero, e porque ele e igual a um dos anteriores e ja foi mostrado.
	
	int totalAtomo1_P = quantidadeAtomo1_P * coeficienteMolecula1_P;	//declaracao do total do atomo 1 do produto
	int totalAtomo2_P = quantidadeAtomo2_P * coeficienteMolecula1_P;	//declaracao do total do atomo 2 do produto
	int totalAtomo3_P = quantidadeAtomo3_P * coeficienteMolecula1_P;	//declaracao do total do atomo 3 do produto
															
	//contagem do atomo 1 dos produtos
	if(strcmp(atomo1_P, atomo1_P2)==0){totalAtomo1_P += quantidadeAtomo1_P2*coeficienteMolecula2_P;		quantidadeAtomo1_P2G = quantidadeAtomo1_P2; quantidadeAtomo1_P2=0;}		//se o primeiro atomo do primeiro produto foi igual ao primeiro do segundo produto, o valor deles e somado e guardado numa variavel nova. a quantidade antiga do atomo do segundo produto e zerada
	if(strcmp(atomo1_P, atomo2_P2)==0){totalAtomo2_P += quantidadeAtomo2_P2*coeficienteMolecula2_P;		quantidadeAtomo2_P2G = quantidadeAtomo2_P2; quantidadeAtomo2_P2=0;}		//se o primeiro atomo do primeiro produto foi igual ao segundo do segundo produto, o valor deles e somado e guardado numa variavel nova. a quantidade antiga do atomo do segundo produto e zerada
	if(strcmp(atomo1_P, atomo3_P2)==0){totalAtomo3_P += quantidadeAtomo3_P2*coeficienteMolecula2_P;		quantidadeAtomo3_P2G = quantidadeAtomo3_P2; quantidadeAtomo3_P2=0;}		//se o primeiro atomo do primeiro produto foi igual ao terceiro do segundo produto, o valor deles e somado e guardado numa variavel nova. a quantidade antiga do atomo do segundo produto e zerada
	
	//contagem do atomo 2 dos produtos
	if(strcmp(atomo2_P, atomo1_P2)==0){totalAtomo1_P += quantidadeAtomo1_P2*coeficienteMolecula2_P;		quantidadeAtomo1_P2G = quantidadeAtomo1_P2; quantidadeAtomo1_P2=0;}		//se o segundo atomo do primeiro produto foi igual ao primeiro do segundo produto, o valor deles e somado e guardado numa variavel nova. a quantidade antiga do atomo do segundo produto e zerada
	if(strcmp(atomo2_P, atomo2_P2)==0){totalAtomo2_P += quantidadeAtomo2_P2*coeficienteMolecula2_P;		quantidadeAtomo2_P2G = quantidadeAtomo2_P2; quantidadeAtomo2_P2=0;}		//se o segundo atomo do primeiro produto foi igual ao segundo do segundo produto, o valor deles e somado e guardado numa variavel nova. a quantidade antiga do atomo do segundo produto e zerada
	if(strcmp(atomo2_P, atomo3_P2)==0){totalAtomo3_P += quantidadeAtomo3_P2*coeficienteMolecula2_P;		quantidadeAtomo3_P2G = quantidadeAtomo3_P2; quantidadeAtomo3_P2=0;}		//se o segundo atomo do primeiro produto foi igual ao terceiro do segundo produto, o valor deles e somado e guardado numa variavel nova. a quantidade antiga do atomo do segundo produto e zerada
	
	//contagem do atomo 3 dos produtos
	if(strcmp(atomo3_P, atomo1_P2)==0){totalAtomo1_P += quantidadeAtomo1_P2*coeficienteMolecula2_P;		quantidadeAtomo1_P2G = quantidadeAtomo1_P2; quantidadeAtomo1_P2 = 0;}	//se o terceiro atomo do primeiro produto foi igual ao primeiro do segundo produto, o valor deles e somado e guardado numa variavel nova. a quantidade antiga do atomo do segundo produto e zerada
	if(strcmp(atomo3_P, atomo2_P2)==0){totalAtomo2_P += quantidadeAtomo2_P2*coeficienteMolecula2_P;		quantidadeAtomo2_P2G = quantidadeAtomo2_P2; quantidadeAtomo2_P2 = 0;}	//se o terceiro atomo do primeiro produto foi igual ao segundo do segundo produto, o valor deles e somado e guardado numa variavel nova. a quantidade antiga do atomo do segundo produto e zerada
	if(strcmp(atomo3_P, atomo3_P2)==0){totalAtomo3_P += quantidadeAtomo3_P2*coeficienteMolecula2_P;		quantidadeAtomo3_P2G = quantidadeAtomo3_P2; quantidadeAtomo3_P2 = 0;}	//se o terceiro atomo do primeiro produto foi igual ao terceiro do segundo produto, o valor deles e somado e guardado numa variavel nova. a quantidade antiga do atomo do segundo produto e zerada
	
	printf("\nProdutos:\ntotal de %s: %d", atomo1_P, totalAtomo1_P);	//mostra a quantidade do atomo1  dos produtos
	printf("\ntotal de %s: %d", atomo2_P, totalAtomo2_P);				//mostra a quantidade do atomo2  dos produtos
	printf("\ntotal de %s: %d", atomo3_P, totalAtomo3_P);				//mostra a quantidade do atomo3  dos produtos
	if(quantidadeAtomo1_2!=0){printf("\ntotal de %s: %d", atomo1_P2, quantidadeAtomo1_P2*coeficienteMolecula2_P);}	//mostra a quantidade do atomo 4 do produto. se a variavel no if for zero, e porque ele e igual a um dos anteriores e ja foi mostrado.
	if(quantidadeAtomo2_2!=0){printf("\ntotal de %s: %d", atomo2_P2, quantidadeAtomo2_P2*coeficienteMolecula2_P);}	//mostra a quantidade do atomo 5 do produto. se a variavel no if for zero, e porque ele e igual a um dos anteriores e ja foi mostrado.
	if(quantidadeAtomo3_2!=0){printf("\ntotal de %s: %d", atomo3_P2, quantidadeAtomo3_P2*coeficienteMolecula2_P);}	//mostra a quantidade do atomo 6 do produto. se a variavel no if for zero, e porque ele e igual a um dos anteriores e ja foi mostrado.
	
	//declaracao de variaveis que relacionam representacao e valores dos atomos dos reagentes aos dos produtos
	char atomoGeral1[2] = "", atomoGeral2[2] = "", atomoGeral3[2] = "";
	int totalGeral1 = totalAtomo1, totalGeral2 = totalAtomo2, totalGeral3 = totalAtomo3;
	
	//contagem do atomo 1 da equacao
	if(atomo1[0] == atomo1_P[0]){atomoGeral1[0] = atomo1_P[0]; totalGeral1 = totalGeral1  + quantidadeAtomo1_P;}//condicional para encontrar nos produtos um atomo com representacao igual ao primeiro atomo do reagente, comparando o primeiro atomo do reagente com os do produto
	if(atomo1[0] == atomo2_P[0]){atomoGeral1[0] = atomo2_P[0]; totalGeral1 = totalGeral1 + quantidadeAtomo2_P;}//condicional para encontrar nos produtos um atomo com representacao igual ao primeiro atomo do reagente, comparando o primeiro atomo do reagente com os do produto
	if(atomo1[0] == atomo3_P[0]){atomoGeral1[0] = atomo3_P[0]; totalGeral1 = totalGeral1  + quantidadeAtomo3_P;}//condicional para encontrar nos produtos um atomo com representacao igual ao primeiro atomo do reagente, comparando o primeiro atomo do reagente com os do produto
	if(atomo1[0] == atomo1_P2[0]){atomoGeral1[0] = atomo1_P2[0]; totalGeral1 = totalGeral1 +  quantidadeAtomo1_P2G;}//condicional para encontrar nos produtos um atomo com representacao igual ao primeiro atomo do reagente, comparando o primeiro atomo do reagente com os do produto
	if(atomo1[0] == atomo2_P2[0]){atomoGeral1[0] = atomo2_P2[0]; totalGeral1 = totalGeral1 + quantidadeAtomo2_P2G;}//condicional para encontrar nos produtos um atomo com representacao igual ao primeiro atomo do reagente, comparando o primeiro atomo do reagente com os do produto
	if(atomo1[0] == atomo3_P2[0]){atomoGeral1[0] = atomo3_P2[0]; totalGeral1 = totalGeral1 + quantidadeAtomo3_P2G;}//condicional para encontrar nos produtos um atomo com representacao igual ao primeiro atomo do reagente, comparando o primeiro atomo do reagente com os do produto
	
	//contagem do atomo 2 da equacao
	if(atomo2[0] == atomo1_P[0]){atomoGeral2[0] = atomo1_P[0]; totalGeral2 = totalGeral2 + quantidadeAtomo1_P;}//condicional para encontrar nos produtos um atomo com representacao igual ao segundo atomo do reagente, comparando o segundo atomo do reagente com os do produto
	if(atomo2[0] == atomo2_P[0]){atomoGeral2[0] = atomo2_P[0]; totalGeral2 = totalGeral2 + quantidadeAtomo2_P;}//condicional para encontrar nos produtos um atomo com representacao igual ao segundo atomo do reagente, comparando o segundo atomo do reagente com os do produto
	if(atomo2[0] == atomo3_P[0]){atomoGeral2[0] = atomo3_P[0]; totalGeral2 = totalGeral2 + quantidadeAtomo3_P;}//condicional para encontrar nos produtos um atomo com representacao igual ao segundo atomo do reagente, comparando o segundo atomo do reagente com os do produto
	if(atomo2[0] == atomo1_P2[0]){atomoGeral2[0] = atomo1_P2[0]; totalGeral2 = totalGeral2 + quantidadeAtomo1_P2G;}//condicional para encontrar nos produtos um atomo com representacao igual ao segundo atomo do reagente, comparando o segundo atomo do reagente com os do produto
	if(atomo2[0] == atomo2_P2[0]){atomoGeral2[0] = atomo2_P2[0]; totalGeral2 = totalGeral2 + quantidadeAtomo2_P2G;}//condicional para encontrar nos produtos um atomo com representacao igual ao segundo atomo do reagente, comparando o segundo atomo do reagente com os do produto
	if(atomo2[0] == atomo3_P2[0]){atomoGeral2[0] = atomo3_P2[0]; totalGeral2 = totalGeral2 + quantidadeAtomo3_P2G;}//condicional para encontrar nos produtos um atomo com representacao igual ao segundo atomo do reagente, comparando o segundo atomo do reagente com os do produto
	
	//contagem do atomo 3 da equacao
	if(atomo3[0] == atomo1_P[0]){atomoGeral3[0] = atomo1_P[0]; totalGeral3 = totalGeral3 + quantidadeAtomo1_P;}		//condicional para encontrar nos produtos um atomo com representacao igual ao terceiro atomo do reagente, comparando o terceiro atomo do reagente com os do produto
	if(atomo3[0] == atomo2_P[0]){atomoGeral3[0] = atomo2_P[0]; totalGeral3 = totalGeral3 + quantidadeAtomo2_P;}//condicional para encontrar nos produtos um atomo com representacao igual ao terceiro atomo do reagente, comparando o terceiro atomo do reagente com os do produto
	if(atomo3[0] == atomo3_P[0]){atomoGeral3[0] = atomo3_P[0]; totalGeral3 = totalGeral3 + quantidadeAtomo3_P;}//condicional para encontrar nos produtos um atomo com representacao igual ao terceiro atomo do reagente, comparando o terceiro atomo do reagente com os do produto
	if(atomo3[0] == atomo1_P2[0]){atomoGeral3[0] = atomo1_P2[0]; totalGeral3 = totalGeral3 + quantidadeAtomo1_P2G;}//condicional para encontrar nos produtos um atomo com representacao igual ao terceiro atomo do reagente, comparando o terceiro atomo do reagente com os do produto
	if(atomo3[0] == atomo2_P2[0]){atomoGeral3[0] = atomo2_P2[0]; totalGeral3 = totalGeral3 + quantidadeAtomo2_P2G;}//condicional para encontrar nos produtos um atomo com representacao igual ao terceiro atomo do reagente, comparando o terceiro atomo do reagente com os do produto
	if(atomo3[0] == atomo3_P2[0]){atomoGeral3[0] = atomo3_P2[0]; totalGeral3 = totalGeral3 + quantidadeAtomo3_P2G;}//condicional para encontrar nos produtos um atomo com representacao igual ao terceiro atomo do reagente, comparando o terceiro atomo do reagente com os do produto
	
	printf("\natomo: %s %s %s", atomoGeral1, atomoGeral2, atomoGeral3);		//mostra cada atomo presente na equacao
	printf("\ntotal: %d %d %d", totalGeral1, totalGeral2, totalGeral3);		//mostra a quantidade total de cada atomo presente na equacao
}


void main()
{	
	//chamado da funcao que analisa uma molecula
	analiseMolecula();
	
	//encerra o programa
	return;
}
