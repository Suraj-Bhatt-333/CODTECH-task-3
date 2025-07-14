#include <stdio.h>
#include <string.h>
#include <ctype.h>

char keywords[][10] = {"int", "float", "if", "else", "while", "for", "return", "char", "double"};
char operators[] = "+-*/=<>";

int isKeyword(char *word) {
    for (int i = 0; i < 9; i++) {
        if (strcmp(keywords[i], word) == 0)
            return 1;
    }
    return 0;
}

int isOperator(char ch) {
    for (int i = 0; i < strlen(operators); i++) {
        if (ch == operators[i])
            return 1;
    }
    return 0;
}

int main() {
    FILE *file = fopen("input.txt", "r");
    if (!file) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    char ch, word[20];
    int i = 0;

    printf("Lexical Analysis:\n\n");

    while ((ch = fgetc(file)) != EOF) {
        if (isalnum(ch)) {
            word[i++] = ch;
        } else {
            word[i] = '\0';
            i = 0;

            if (strlen(word) > 0) {
                if (isKeyword(word))
                    printf("[Keyword]: %s\n", word);
                else
                    printf("[Identifier]: %s\n", word);
            }

            if (isOperator(ch)) {
                printf("[Operator]: %c\n", ch);
            }
        }
    }

    fclose(file);
    return 0;
}