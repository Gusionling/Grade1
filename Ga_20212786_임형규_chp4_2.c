#include<stdio.h>

int main(void)
{
	int x, result;

	printf("ù ��° ������ �Է��Ͻÿ�:");
	scanf("%d", &x);

	result = x * x * x;
	printf("������ ���� %d*%d*%d=%d�Դϴ�.", x, x, x, result);

	return 0;
}