//这是一个故事
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char name[100];
	char place[100];
	int number;
	float b;
	printf("输入人名:\n");
	scanf("%99s", name);
	printf("输入人数:\n");
	scanf("%d", &number);
	printf("输入地点:\n");
	scanf("%99s", place);
	printf("输入数字:\n");
	scanf("%f", &b);
	printf("现在，%d位%s，来到%s,给我打了%f分,哈哈\n", number, name, place, b);
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
}
