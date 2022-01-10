#include<stdio.h>

int main(void)
{
	int x, result;

	printf("첫 번째 정수를 입력하시오:");
	scanf("%d", &x);

	result = x * x * x;
	printf("세제곱 값은 %d*%d*%d=%d입니다.", x, x, x, result);

	return 0;
}