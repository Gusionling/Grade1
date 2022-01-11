#include<stdio.h>
#include<math.h>

void ipower(int a, int b);

int main()
{
	int n, k;
	
	printf("정수 n을 입력하시오:"); // 밑 입력
	scanf("%d", &n);

	printf("정수 k를 입력하시오:"); // 몇 제곱 까지 할 것인지를 입력
	scanf("%d", &k);

	ipower(n, k);
	return 0;
}


void ipower(int n, int k)
{
	
	int i, result;
	for (i = 0; i <= k; i++) {
		result = pow(n, i);
		printf("%d\n", result);
	}
}