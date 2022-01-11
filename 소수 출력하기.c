#include<stdio.h>

void prime(int a)
{
	int sum = 0;
	int i;
	for (i = 2; i < a; i++)
		if (a % i== 0)
			sum = sum + 1;
	if (sum == 0)
		printf("%d\n", a);
}

int main()
{
	int k = 0;
	
	for (k = 2; k <= 100; k++)
		prime(k);

	return 0;
}