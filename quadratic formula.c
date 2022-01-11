#include<stdio.h>
#include<math.h>

void quad_eqn(double a, double b, double c);

int main()
{
	double a, b, c;

	printf("2차 방정식의 계수를 입력하시오:\n");
	printf("a: ");
	scanf("%lf", &a);
	printf("b: ");
	scanf("%lf", &b);
	printf("c: ");
	scanf("%lf", &c);

	quad_eqn(a, b, c);

	return 0;
}

void quad_eqn(double a, double b, double c)
{
	double d, x1, x2;

	d = pow(b, 2.0) - (4 * a * c);

	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("%lf\n", x1);
		printf("%lf\n", x2);
	}

	else if (d == 0)
	{
		x1 = -b / (2 * a);
		printf("%lf\n", x1);
	}

	else
	{
		printf("근 없음");
	}

}