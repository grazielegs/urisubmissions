# include <stdio.h>

int main()
{
    double a, b, c, area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo;

    scanf("%lf %lf %lf", &a, &b, &c);

    area_triangulo = a * c / 2; // base x altura / por dois
    area_circulo = 3.14159 * (c * c); // pi * raio ao quadrado
    area_trapezio = (a + b) / 2 * c; // soma das bases (a e b) / por dois vezes altura
    area_quadrado = b * b; // lado x lado
    area_retangulo =  a * b;// base x altura

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo);

    return 0;


}
