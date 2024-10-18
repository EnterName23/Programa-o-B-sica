
#include <stdio.h>
#include <stdlib.h>

// Variáveis Globais
int *lista = NULL;
int CapacidadeBaseDaLista = 2;
int valor;
int InicioDaLista = 0;
int FinalDaLista = 0;

// Declaração das Funções
void AumentoDaCapacidade();
void InsercaoDeElementosNaLista();
void InsercaoDeElementosNaListaInicio();
void InsercaoDeElementosNaListaFinal();
void InsercaoDeElementosNaListaOutro();
void DesejaContinuar();
void RemocaoDeElementosNaLista();
void ExibicaoDosElementos();
void VerificacaoLista();
void LocalizacaoDeElementosNaLista();
void ElementoNoTopo();

int main() {
    int Menu;

    // Alocação da Capacidade Base da lista
    lista = (int *)malloc(CapacidadeBaseDaLista * sizeof(int));
    if (lista == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    while (1) {
        printf("\nO que voce deseja fazer? (Escreva o numero da opcao)\n");
        printf("1 - Inserir Elementos na lista\n");
        printf("2 - Remover o primeiro elemento da lista\n");
        printf("3 - Exibir os elementos da lista\n");
        printf("4 - Verificar quantos elementos ha na lista\n");
        printf("5 - Localizar um elemento\n");
        printf("6 - Elemento no topo\n");
        printf("7 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &Menu);
        system("CLS");

        switch (Menu) {
            case 1:
                InsercaoDeElementosNaLista();
                break;
            case 2:
                RemocaoDeElementosNaLista();
                break;
            case 3:
                ExibicaoDosElementos();
                break;
            case 4:
                VerificacaoLista();
                break;
            case 5:
                LocalizacaoDeElementosNaLista();
                break;
            case 6:
                ElementoNoTopo();
                break;
            case 7:
                free(lista);
                return 0;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    }
}

void InsercaoDeElementosNaLista() {
    int Menu;
    printf("\nOnde voce deseja inserir o valor?\n");
    printf("1 - No final da Lista\n");
    printf("2 - No comeco da Lista\n");
    printf("3 - Outro\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &Menu);
	printf("\n\n\n\n");
    printf("Digite o valor que deseja inserir na lista: ");
    scanf("%d", &valor);

    switch (Menu) {
        case 1:
            InsercaoDeElementosNaListaFinal();
            break;
        case 2:
            InsercaoDeElementosNaListaInicio();
            break;
        case 3:
            InsercaoDeElementosNaListaOutro();
            break;
        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
    }
}

void AumentoDaCapacidade() {
    if (FinalDaLista == CapacidadeBaseDaLista) {
        if (InicioDaLista != 0) {
            // Move os elementos para o início
            for (int j = 0, i = InicioDaLista; i < FinalDaLista; i++, j++) {
                lista[j] = lista[i];
            }
            FinalDaLista -= InicioDaLista;
            InicioDaLista = 0;
        } else {
            // Dobra a capacidade da lista
            CapacidadeBaseDaLista *= 2;
            int *temp = (int *)realloc(lista, CapacidadeBaseDaLista * sizeof(int));
            if (temp == NULL) {
                printf("Erro ao realocar a memoria.\n");
                free(lista);
                exit(1);
            }
            lista = temp;
        }
    }
}

void InsercaoDeElementosNaListaFinal() {
    AumentoDaCapacidade();
    lista[FinalDaLista] = valor;
    FinalDaLista++;
    printf("O numero %d foi inserido na lista!\n\n", valor);
    DesejaContinuar();
}

void InsercaoDeElementosNaListaInicio() {
    AumentoDaCapacidade();
    if (InicioDaLista != 0) {
        InicioDaLista--;
        lista[InicioDaLista] = valor;
    } else {
        for (int j = FinalDaLista; j > 0; j--) {
            lista[j] = lista[j - 1]; // Move as casas para cima
        }
        lista[0] = valor;
        FinalDaLista++;
    }
    printf("O numero %d foi inserido na lista!\n\n", valor);
    DesejaContinuar();
}

void InsercaoDeElementosNaListaOutro() {
    int local;
    printf("Com o inicio da lista na casa '1' ");
    printf("Digite a casa que deseja inserir o valor (EX: 3): ");
    scanf("%d", &local);
    local = local - 1 + InicioDaLista;

    if (local <= InicioDaLista) {
        InsercaoDeElementosNaListaInicio();
    } else if (local >= FinalDaLista) {
        InsercaoDeElementosNaListaFinal();
    } else {
        AumentoDaCapacidade();
        for (int j = FinalDaLista; j > local; j--) {
            lista[j] = lista[j - 1]; // Move as casas para cima
        }
        lista[local] = valor;
        FinalDaLista++;
        printf("O numero %d foi inserido na lista na posicao %d!\n\n", valor, local - InicioDaLista + 1);
        DesejaContinuar();
    }
}

void DesejaContinuar() {
    char continuar;
    printf("Deseja continuar inserindo? (S/N): ");
    scanf(" %c", &continuar);

    if (continuar == 'S' || continuar == 's') {
        InsercaoDeElementosNaLista();
    }
    system("CLS");
}

void RemocaoDeElementosNaLista() {
    if (FinalDaLista == InicioDaLista) {
        printf("Erro: nao ha valores na lista.\n");
    } else {
        printf("Removendo o elemento: %d\n", lista[InicioDaLista]);
        InicioDaLista++;}}
