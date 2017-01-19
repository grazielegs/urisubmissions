# include <stdio.h>
# include <stdlib.h>

int main()
{
    int a, b, c, d, maiorab;

    scanf("%d %d %d", &a, &b, &c);

    maiorab = (a + b + abs(a - b)) / 2;
    d = (maiorab + c + abs (maiorab - c)) / 2;

    printf("%d eh o maior\n", d);

    return 0;
}
