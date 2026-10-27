#include <stdio.h>

int main(void) {
    int a, b, i, cont = 0;

    printf("inserisci il primo estremo:");
    scanf("%d", &a);

    printf("inserisci il secondo estremo:");
    scanf("%d", &b);
    i = a;
    while (i <= b) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            cont++;
        }
        i++;
    }

    printf("i numeri pari sono:%d\n", cont);
    return 0;
}