#include<stdio.h>

int main(void)
{
	int a, i;
	int p = 0;
	int f = 0;
	int l = 1;

	printf("�� ��° �ױ��� ���ұ��?:");
	scanf("%d", &a);


	printf("0, 1, ");
	for (i = 1; i < a; i++)
	{
		p = f + l;
		f = l;
		l = p;
		
		printf("%d, ", p);
	}
	return 0;

}