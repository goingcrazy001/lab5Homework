#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	const double a = 1.0;
	double x, y,f;
	printf("Введите число x:");
	scanf("%lf", &x);
	printf("Введите число y:");
	scanf("%lf", &y);
	f = (3.0 + exp(y - 1)) / (1 + pow(x, 2) * fabs(y - tan(a)));
	printf("Результат: %lf", f);
	return 0;
}
