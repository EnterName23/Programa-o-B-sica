#include <stdio.h>
#include <string.h>

int main() {
    // String original
    const char *hexString = "00 FF A2";
    struct {
        char txt[100];
    } TextoGerado[257];
    int i;
    
    // Cópia da string original para manipulação
    char strCopy[50];
    strncpy(strCopy, hexString, sizeof(strCopy) - 1);
    strCopy[sizeof(strCopy) - 1] = '\0';  // Garantir que a string está terminada

    // Usar strtok para separar a string
    char *token = strtok(strCopy, " ");
    i=0;
    while (token != NULL) {
        strcpy(TextoGerado[i].txt, token);
        token = strtok(NULL, " ");
        printf("Parte: %s\n" , TextoGerado[i].txt);
    }

    
    return 0;}
