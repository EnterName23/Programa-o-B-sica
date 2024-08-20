//Em C, as operações com strings são realizadas usando funções da biblioteca padrão `<string.h>`. Aqui estão alguns dos comandos de string mais comuns:

#include <stdio.h>
#include <string.h>

int main() {
//### 1. **`strlen`**: Retorna o comprimento de uma string (excluindo o caractere nulo `\0`).
	printf("1-");
    char str[] = "Hello, world!";
    int len = strlen(str);
    printf("Length: %d\n", len);

//### 2. **`strcpy`**: Copia uma string para outra.
printf("2-");
    char src[] = "Hello, world!";
    char dest[50];
    strcpy(dest, src);
    printf("Copied string: %s\n", dest);


//### 3. **`strcat`**: Concatena (anexa) uma string ao final de outra.
printf("3-");
    char str1[50] = "Hello, ";
    char str2[] = "world!";
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);


/*### 4. **`strcmp`**: Compara duas strings lexicograficamente.
- Retorna 0 se as strings forem iguais.
- Retorna um valor negativo se a primeira string for menor que a segunda.
- Retorna um valor positivo se a primeira string for maior que a segunda.
```c */
printf("4-");
    char str3[] = "Hello";
    char str4[] = "World";
    int result = strcmp(str3, str4);
    if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2\n");
    } else {
        printf("String 1 is greater than String 2\n");
    }


//### 5. **`strncpy`**: Copia uma quantidade específica de caracteres de uma string para outra.
printf("5-");
    char src2[] = "Hello, world!";
    char dest2[50];
    strncpy(dest2, src2, 5); // Copia os primeiros 5 caracteres
    dest[5] = '\0'; // Adiciona o caractere nulo para terminar a string
    printf("Copied string: %s\n", dest);


//### 6. **`strstr`**: Encontra a primeira ocorrência de uma substring em uma string.
printf("6-");
    char str5[] = "Hello, world!";
    char *substr = strstr(str5, "world");
    if (substr) {
        printf("Substring found: %s\n", substr);
    } else {
        printf("Substring not found\n");
    }

//### 7. **`strchr`**: Encontra a primeira ocorrência de um caractere em uma string.
printf("7-");
    char str6[] = "Hello, world!";
    char *ptr = strchr(str6, 'w');
    if (ptr) {
        printf("Character found: %c\n", ptr[0]);
        
    } else {
        printf("Character not found\n");
    }

//### 8. **`strrev`**: Inverte uma string (Nota: `strrev` não é parte do padrão ANSI C, mas está disponível em algumas implementações, como no compilador Borland).

    char str7[] = "Hello, world!";
    strrev(str7);
    printf("8-Reversed string: %s\n", str7);


//### 9. **`sprintf`**: Formata uma string e armazena o resultado em um buffer.

    char buffer[50];
    int num = 10;
    sprintf(buffer, "The number is %d", num);
    printf("9-Formatted string: %s\n", buffer);
printf("\n");
//### 10 strtok: Quebrar String em Tokens

 printf("10-\n");
	char str8[] = "Hello, World! Welcome to C programming.";
	char *token = strtok(str8, " .");
	while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, " ,.");
}
printf("\n");

// 11 strncmp: Comparar N Caracteres de Strings
	char str9[] = "Hello";
	char str10[] = "Helium";
	int result2 = strncmp(str9, str10, 3);
	if (result2 == 0)
    	printf("11-Os primeiros 3 caracteres são iguais\n");
    	

}
//Esses comandos são essenciais para manipulação de strings em C. Lembre-se de sempre alocar memória suficiente para as strings que você pretende manipular para evitar problemas como `buffer overflow`.
