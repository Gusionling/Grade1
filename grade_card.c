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

	printf("������ %d��� �Դϴ�.\n", grade);
}


int main()
{
	
	int a, b, c, d, e, f, g, h;
	
	printf("���� ��� ���� �Դϴ�.\n");

	printf(" ���� ������ �Է��Ͻʽÿ�: ");
	scanf("%d", &a);

	printf(" ����2 ������ �Է��Ͻʽÿ�: ");
	scanf("%d", &b);

	printf(" Ȯ�� ������ �Է��Ͻʽÿ�: ");
	scanf("%d", &c);

	printf(" ���� ������ �Է��Ͻʽÿ�: ");
	scanf("%d", &d);

	printf(" �繮 ������ �Է��Ͻʽÿ�: ");
	scanf("%d", &e);

	printf(" ���� ������ �Է��Ͻʽÿ�: ");
	scanf("%d", &f);

	printf(" ���� ������ �Է��Ͻʽÿ�: ");
	scanf("%d", &g);

	printf(" ���� ������ �Է��Ͻʽÿ�: ");
	scanf("%d", &h);


	printf("\n");
	printf("\n");
	printf("*****������ ���� ����ǥ*****\n");
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
	
	printf("����");
	get_grade(j);
	printf("����2");
	get_grade(k);
	printf("Ȯ��");
	get_grade(l);
	printf("����");
	get_grade(m);
	printf("�繮");
	get_grade(n);
	printf("����");
	get_grade(o);
	printf("����");
	get_grade(p);
	printf("����");
	get_grade(q);


	return 0;
}
