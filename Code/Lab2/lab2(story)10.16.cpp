//����һ������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char name[100];
	char place[100];
	int number;
	float b;
	printf("��������:\n");
	scanf("%99s", name);
	printf("��������:\n");
	scanf("%d", &number);
	printf("����ص�:\n");
	scanf("%99s", place);
	printf("��������:\n");
	scanf("%f", &b);
	printf("���ڣ�%dλ%s������%s,���Ҵ���%f��,����\n", number, name, place, b);
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
}
