#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double exponencialViaMcLaurin(float x, int quantidadeDeLoops) {
    float Pn = 1;
    int fatorialAtual = 1;
    for(int i=1; i<quantidadeDeLoops; i++){
        Pn = Pn + (pow(x, i)/fatorialAtual);
        fatorialAtual = fatorialAtual*(fatorialAtual+1);
    }
    return Pn;
}

int numeroMinimoDeTermosParaCalcularExpComTalErroMaximo(float x, float erroDeCalculoMaximo) {
    float Pn = 0;
    float erroDeCalculoAtual = 10000000;
    int i = 1;
    
    while(erroDeCalculoAtual > erroDeCalculoMaximo){
        i++;
        Pn = exponencialViaMcLaurin(x, i);
        erroDeCalculoAtual = fabs(exp(x)-Pn);
    }
    return i;
}

int main() {
    float termoXDaFuncao = 0, quantidadeDeTermos = 0, erroDeCalculoMaximo = 0;
    
    printf("valor de x:\n");
    scanf("%f", &termoXDaFuncao);
    printf("quantidade de termos:\n");
    scanf("%f", &quantidadeDeTermos);
    printf("erro maximo:\n");
    scanf("%f", &erroDeCalculoMaximo);
    
	float exponencialDeX = exponencialViaMcLaurin(termoXDaFuncao, quantidadeDeTermos);
	printf("\nexp = %f\n", exponencialDeX);
	
	float erroDeCalculo = fabs(exp(termoXDaFuncao)-exponencialDeX);
    printf("erro = %f\n", erroDeCalculo);
	
	int quantidadeDeTermosParaErroMaximo = numeroMinimoDeTermosParaCalcularExpComTalErroMaximo(termoXDaFuncao, erroDeCalculoMaximo);
	printf("quantidade de termos mínima para tal erro maximo = %d", quantidadeDeTermosParaErroMaximo);
	return 0;
}
