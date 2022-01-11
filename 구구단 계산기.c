#include<stdio.h>

int main(void)
{
	int gugu[9][9];
	int i, k;
	for (i = 0; i < 9; i++)
	{
		for (k = 0; k < 9; k++)
		{
			gugu[i][k] = (i + 1) * (k + 1);
		}
	}
    printf("알고싶은 구구단을 입력하시오(예: 9 3):");
	scanf("%d %d", &i, &k);
	printf("%dx%d=%d", i, k, gugu[i - 1][k - 1]);

}