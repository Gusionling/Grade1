#include<stdio.h>
#include<math.h>

void dist(double x1, double y1, double x2, double y2);

int main()
{
	double x1, y1, x2, y2;
	printf("ù���� ���� ��ǥ�� �Է��Ͻÿ�:");
	scanf("%lf %lf", &x1, &y1);

	printf("�ι��� ���� ��ǥ�� �Է��Ͻÿ�:");
	scanf("%lf %lf", &x2, &y2);

	dist(x1, y1, x2, y2);
	return 0;
}

void dist(double x1, double y1, double x2, double y2)
{
	double d = 0;
	d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	printf("���� ������ �Ÿ��� %lf�Դϴ�.", d);
}