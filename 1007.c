# include <stdio.h>

int main(){

	int a, b, c, d, diferenca, prodab, prodcd;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    prodab = a * b;
    prodcd = c * d;
    diferenca = prodab - prodcd;

    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}
