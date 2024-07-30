# Programacao-Basica
Algoritmos
#include <stdio.h> 
#include <locale.h> 
#define L 3
#define C 7

int main (){
int matriz1[L+1], matriz2[L+1];
int i, h, j;

	for (i=1; i<L+1; i++){
	//	printf("Digite um número:");
	//	scanf("%i", &matriz1[i]);
	matriz1[1] = 1;
	matriz1[2] = 2;
	matriz1[3] = 3;
	}
	
	//Atribui a M2[0] o menor valor
	for (i=1; i<L+1; i++){
		if(i == 1)
			matriz2[0] = matriz1[i];
		else
		if (matriz2[0] > matriz1[i])
			matriz2[0] = matriz1[i];}
			
	//Atribui a M2[<0] o maior valor
	for (j=1; j<L+1; j++){
		for (i=1; i<L+1; i++){
			if(i == 1)
				matriz2[j] = matriz1[i];
			else
			if (matriz2[j] < matriz1[i])
				matriz2[j] = matriz1[i];
		}
	}
/*	for (j=1; j<L+1; j++){
		for (i=1; i<L+1; i++){
			if(matriz2[j] > matriz1[i]){;}
			if(matriz2[j-1] <= matriz2[j] && matriz2[j] >= matriz1[i])
				matriz2[j] = matriz1[i];
		}
	} */
	for (j=1; j<L+1; j++){
		for (i=1; i<L+1; i++){
			if (matriz2[j] >= matriz1[i] && matriz2[j-1] <= matriz2[j])
				matriz2[j] = matriz1[i];}}
				
	for (i=1; i<L+1; i++)
		printf("%d ",matriz2[i]);
