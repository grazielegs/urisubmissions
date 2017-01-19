# include <stdio.h>
# include <math.h>

int main()
{
    double xum, xdois, yum, ydois, distancia, raiz;

    scanf("%lf %lf %lf %lf", &xum, &yum, &xdois, &ydois);

    distancia = pow(xdois - xum, 2) + pow(ydois - yum, 2);
    raiz = sqrt(distancia, 1/2);

    printf("%.4lf\n", distancia);

    return 0;
}
