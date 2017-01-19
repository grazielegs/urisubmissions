# include <stdio.h>

int main(){
    double cod_pecaum, num_pecaum, valor_pecaum, cod_pecadois, num_pecadois, valor_pecadois, totalum, totaldois, total;

    scanf("%lf %lf %lf", &cod_pecaum, &num_pecaum, &valor_pecaum);
    scanf("%lf %lf %lf", &cod_pecadois, &num_pecadois, &valor_pecadois);

    totalum = num_pecaum * valor_pecaum;
    totaldois = num_pecadois * valor_pecadois;

    total = totalum + totaldois;

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
