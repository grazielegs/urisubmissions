# include <stdio.h>

int main()
{
    int distkm;
    double gasy, consumolitro;

    scanf("%d %lf", &distkm, &gasy);

    consumolitro = distkm / gasy;

    printf("%.3lf km/l\n", consumolitro);

    return 0;
}
