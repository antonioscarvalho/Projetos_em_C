#include <stdio.h>

int main() {

    int numero, numero1, *ptr;

    numero = 79417;
    //Valor de 'numero'
    printf("Valor: %d\n\n", numero);
    //Endereço de 'numero'
    printf("Endereço: %p\n\n", &numero);

    numero1 = 79418;
    ptr = NULL;
    printf("%d\n\n", numero1);
    printf("%p\n\n", ptr);

    return 0;
}