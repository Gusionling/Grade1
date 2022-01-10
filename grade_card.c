#include <stdio.h>
#include <inttypes.h>


int get_percent1(int x)
{
	int percent;

	percent = x*100/368;

	return percent;
}


int get_percent2(int x)
{
	int percent;

	percent = (x * 100)/189;

	return percent;
}

void get_grade(int y)
{
	int grade;

	if (y <= 4)
		grade = 1;
	else if (y <= 11)
		grade = 2;
	else if (y <= 23)
		grade = 3;
	else if (y <= 40)
		grade = 4;
	else if (y <= 60)
		grade = 5;
	else if (y <= 77)
		grade = 6;
	else if (y <= 89)
		grade = 7;
	else if (y <= 96)
		grade = 8;
	else
		grade = 9;

	printf("성적은 %d등급 입니다.\n", grade);
}


int main()
{
	
	int a, b, c, d, e, f, g, h;
	
	printf("내신 등급 계산기 입니다.\n");

	printf(" 국어 성적을 입력하십시오: ");
	scanf("%d", &a);

	printf(" 수학2 성적을 입력하십시오: ");
	scanf("%d", &b);

	printf(" 확통 성적을 입력하십시오: ");
	scanf("%d", &c);

	printf(" 영어 성적을 입력하십시오: ");
	scanf("%d", &d);

	printf(" 사문 성적을 입력하십시오: ");
	scanf("%d", &e);

	printf(" 생윤 성적을 입력하십시오: ");
	scanf("%d", &f);

	printf(" 생물 성적을 입력하십시오: ");
	scanf("%d", &g);

	printf(" 지과 성적을 입력하십시오: ");
	scanf("%d", &h);


	printf("\n");
	printf("\n");
	printf("*****임형권 성적 통지표*****\n");
	printf("\n");
	int j, k, l, m, n, o, p, q;
	j = get_percent1(a);
	k = get_percent1(b);
	l = get_percent1(c);
	m = get_percent1(d);
	n = get_percent2(e);
	o = get_percent2(f);
	p = get_percent2(g);
	q = get_percent2(h);
	
	printf("국어");
	get_grade(j);
	printf("수학2");
	get_grade(k);
	printf("확통");
	get_grade(l);
	printf("영어");
	get_grade(m);
	printf("사문");
	get_grade(n);
	printf("생윤");
	get_grade(o);
	printf("생명");
	get_grade(p);
	printf("지과");
	get_grade(q);


	return 0;
}
