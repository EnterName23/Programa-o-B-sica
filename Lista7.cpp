#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define LimiteDeRegistros 5


Cadastro;
	int NRegistro = 0;
	typedef struct reg;
		struct registro{
			char nome[100];
			char idade[100];
			char endereco[100];
			char telefone[100];
		}registro;
	reg registro[LimiteDeRegistros];
	
PesquisaRegistro;
	char PesquisaIdade[100];
	int AlguemTemEssaIdade = 0;

int main(){
	
	for(char Confirmacao = 'S', int opc; Confirmacao != 'S', opc == 5;){
		printf("1-Cadastro\n");
		printf("2-Pesquisa de registro por idade\n");
		printf("3-Classificação alfabética\n");
		printf("4-Alteração de registro digitado com erro\n");
		printf("5-Sair do Menu\n");
		printf("Digite o numero da opcao que você deseja:");
		scanf("%i", &opc);
		
		switch (opc){
			case 1: Cadastro();
				break;
			case 2;
			PesquisaRegistro()
				break;
			case 3; 
				break;
			case 4
				break;
		}
void Cadrastro(){
		printf("Nome Completo: ");
		gets(registro[NRegistro].nome);
		printf("Idade: ");
		gets(registro[NRegistro].idade);
		printf("Endereco: ");
		gets(registro[NRegistro].endereco);
		printf("Telefone: ");
		gets(registro[NRegistro].telefone);
		printf("Registro Concluído.\n");
		NRegistro++;		
}
void PesquisaRegistro(){
	int Contador = 0;
	printf("Digite o Nome do Registrado:");
	gets(PesquisaNome);
	for(int result = strcmp(PesquisaIdade, registro[Contador].idade); Contador == LimiteDeRegistros; Contador++;)
	if (result == 0){
	printf("\nNome Completo: %s\n", registro[Contador].nome);
		printf("Idade: %s\n", registro[Contador].idade);
		printf("Endereco: %s\n", registro[Contador].endereco);
		printf("Telefone: %s\n", registro[Contador].telefone);
		AlguemTemEssaIdade++;}
	if (AlguemTemEssaIdade == 0){
		printf("\nNão há ninguém com essa Idade\n")
		AlguemTemEssaIdade = 0;}
	}
}

	
}
