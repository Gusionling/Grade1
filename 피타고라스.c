#include<stdio.h>
//내가 손봄
int main()
{
	int a, b, c;
	for (a = 1; a <= 100; a++)
		for (b = a+1; b <= 100; b++)
			for (c = b+1; c <= 100; c++)
				if (a*a + b*b == c*c)
					printf("%d %d %d\n", a, b, c);

	printf("\n");
	printf("\n");
	return 0;
}

//원래;;
#include<stdio.h>

int main()
{
	int a, b, c;
	for (a = 1; a <= 100; a++)
		for (b = 1; b <= 100; b++)
			for (c = 1; c <= 100; c++)
				if (a * a + b * b == c * c)
					printf("%d %d %d\n", a, b, c);
	return 0;
}