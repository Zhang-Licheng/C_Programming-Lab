//����һ�����ҽ���//
#include<stdio.h>
int main()
{
	char name[100];
	int age,age2;
	float weight;
	char university[100];
	printf("�����������:\n");
	scanf_s("%s",name,10);
	printf("�����������:\n");
	scanf_s("%d", &age);
	age2 = age + 1;
	printf("�����������:\n");
	scanf_s("%f",&weight);
	printf("������Ĵ�ѧУ��:\n");
	scanf_s("%s",university,10);
	printf("�ҽ�%s,����%d��,����%d�꣬������%f����,����%s.\n",name,age,age2,weight,university);
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
}