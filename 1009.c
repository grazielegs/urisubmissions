# include <stdio.h>

int main(){

	double salario_fixo, vendas_mes, bonus_vendas, total;
	char nome;

    scanf("%s", &nome);
    scanf("%lf %lf", &salario_fixo, &vendas_mes);

    bonus_vendas = (vendas_mes * 15) / 100;
    total = salario_fixo + bonus_vendas;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
