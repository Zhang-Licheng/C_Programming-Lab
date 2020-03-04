//这是一个自我介绍//
#include<stdio.h>
int main()
{
	char name[100];
	int age,age2;
	float weight;
	char university[100];
	printf("输入你的名字:\n");
	scanf_s("%s",name,10);
	printf("输入你的年龄:\n");
	scanf_s("%d", &age);
	age2 = age + 1;
	printf("输入你的体重:\n");
	scanf_s("%f",&weight);
	printf("输入你的大学校名:\n");
	scanf_s("%s",university,10);
	printf("我叫%s,今年%d岁,明年%d岁，体重是%f公斤,来自%s.\n",name,age,age2,weight,university);
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
}