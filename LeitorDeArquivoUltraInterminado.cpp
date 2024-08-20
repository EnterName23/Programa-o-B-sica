#include <stdio.h>
#include <string.h>

VetorString;
int main(){
    FILE *arqL;
    FILE *arcG;
    char nomeArqL[100], nomeArqG[100], Instrucoes[3];
    char textoLido[30];
	int NumeroDaLinha;
    
    printf("Digite o nome do arquivo que deseja ler: ");					
	scanf("%s", &nomeArqL);
	printf("Digite o nome do arquivo que deseja gerar: ");					
	scanf("%s", &nomeArqG);

    arqL = fopen(nomeArqL, "r");
    if (arqL == NULL){
    	printf("Não foi possível abrir o arquivo.");
    }else{
        for (NumeroDaLinha = 1; !feof(arqL); NumeroDaLinha++){
        fgets(textoLido, 30, arqL);
        fgets(Instrucoes, 3, arqL);
        	
        if (strcmp(Instrucoes, "NOP") == 0)
       		sprintf(textoGerado, "00 00 %c%c 00", textoLido[4], textoLido[5]);
      	else if (strcmp(Instrucoes, "STA") == 0)
       		sprintf(textoGerado, "10 00 %c%c 00", textoLido[4], textoLido[5]);
      	else if (strcmp(Instrucoes, "LDA") == 0)
            sprintf(textoGerado, "20 00 %c%c 00", textoLido[4], textoLido[5]);
       	else if (strcmp(Instrucoes, "ADD") == 0)
            sprintf(textoGerado, "30 00 %c%c 00", textoLido[4], textoLido[5]);
        else if (strcmp(Instrucoes, "OR") == 0)
            sprintf(textoGerado, "40 00 %c%c 00", textoLido[3], textoLido[4]);
        else if (strcmp(Instrucoes, "AND") == 0)
            sprintf(textoGerado, "50 00 %c%c 00", textoLido[4], textoLido[5]);
        else if (strcmp(Instrucoes, "NOT") == 0)
            sprintf(textoGerado, "60 00 %c%c 00", textoLido[4], textoLido[5]);
        else if (strcmp(Instrucoes, "JMP") == 0)
            sprintf(textoGerado, "80 00 %c%c 00", textoLido[4], textoLido[5]);
        else if (strcmp(Instrucoes, "JN") == 0)
            sprintf(textoGerado, "90 00 %c%c 00", textoLido[3], textoLido[4]);
        else if (strcmp(Instrucoes, "JZ") == 0)
            sprintf(textoGerado, "A0 00 %c%c 00", textoLido[3], textoLido[4]);
        else if (strcmp(Instrucoes, "HLT") == 0)
            sprintf(textoGerado, "F0 00 %c%c 00", textoLido[4], textoLido[5]);
        		
        }
    }

    fclose(arqL);

    return 0;
}
