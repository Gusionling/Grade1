#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i = 1;

void Monte(int a);

int main(main) {
	int coin;

	srand((unsigned int)time(NULL));

	while (1 == 1) {
		coin = rand() % 2;

		Monte(coin);
	}

	return 0;
}

void Monte(int r) {
	int user;

	printf("��(0) �Ǵ� ��(1)�� �����Ͻÿ�(����� -1):");
	scanf("%d", &user);


	if (user == -1)
		exit(1);

	else if (user == r) {
		printf("����ڰ� �̰���ϴ�.\n");
		
	}
	else {
		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
	
	}
}