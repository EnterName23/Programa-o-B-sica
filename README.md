#include <stdio.h> 
#include <locale.h> 
#define L 12 

int main (){
int matriz1[L], matriz2[L], i, j;

for (i=0; i<L; i++){
	printf("Digite um numero:");
	scanf("%i", &matriz1[i]);
}
	for (i=0; i<L; i++){
	if(i == 0)
		matriz2[0] = matriz1[i];
	else
	if (matriz2[0] > matriz1[i])
		matriz2[0] = matriz1[i];}
	for (j=1; j<L; j++){
		for (i=0; i<L; i++){
			if(i == 0)
				matriz2[j] = matriz1[i];
			else
			if (matriz2[j] < matriz1[i])
				matriz2[j] = matriz1[i];
		}
		for (i=0; i<L; i++){
			if (matriz2[j] > matriz1[i] && matriz1[i] > matriz2[j-1])
				matriz2[j] = matriz1[i];
		}
	}
	for (i=L-1; i>-1; i--)
		printf("%d ",matriz2[i]);
	}

