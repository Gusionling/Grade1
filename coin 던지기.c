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

	printf("앞(0) 또는 뒤(1)를 선택하시오(종료는 -1):");
	scanf("%d", &user);


	if (user == -1)
		exit(1);

	else if (user == r) {
		printf("사용자가 이겼습니다.\n");
		
	}
	else {
		printf("컴퓨터가 이겼습니다.\n");
	
	}
}