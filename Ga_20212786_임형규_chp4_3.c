#include<stdio.h>

int main(void)
{
	int x, y, z, result;

	printf("������ 3�� �Է��Ͻÿ�:");
	scanf("%d %d %d", &x, &y, &z);

	result = x * y - z;
	printf("%d*%d-%d=%d\n", x, y, z, result);

	return 0;
}