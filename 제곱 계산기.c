#include<stdio.h>
#include<math.h>

void ipower(int a, int b);

int main()
{
	int n, k;
	
	printf("���� n�� �Է��Ͻÿ�:"); // �� �Է�
	scanf("%d", &n);

	printf("���� k�� �Է��Ͻÿ�:"); // �� ���� ���� �� �������� �Է�
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