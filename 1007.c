#include <stdio.h>

int main(){

    int a, b, c, d;
    int diferenca;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    diferenca = a*b - c*d;

    printf("A DIFERENCA = %d\n" , diferenca);

    return 0;
}