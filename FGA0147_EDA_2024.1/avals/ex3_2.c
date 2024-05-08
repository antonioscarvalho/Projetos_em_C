#include <stdio.h>

char *Q3 (int *M, char *NC) {
    int n;
    char *code = (char*)malloc(9 * sizeof(chat));
    for (int i = 0; i < 9; i++) {
        code[i] = NC[M[i]];
        if (code[i] == ' ') code[i] = '';
    }
    return code;
}

int Verifica(char c) {
    return (c>='a' && c <='z' && c != 'a' && c!= 'e' && c!='i' && c!='o' && c!='u');
}

int main () {
    
}