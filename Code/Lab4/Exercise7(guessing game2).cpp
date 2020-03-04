//This is a guessing game.
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
float getRand() {
	return rand() / (RAND_MAX + 1.0);
}
int guess(int correct_answer) {
	int answer;
	printf("Please input the number you guess:");
	scanf("%d", &answer);
	if (answer == correct_answer) {
		printf("Correct.\n");
		return 1;
	}
	else if (correct_answer< answer)
	{
		printf("Too high.\n");
		return 0;
	}
	else {
		printf("Too low.\n");
		return 0;
	}
}
int number() {
	srand(time(NULL));
	getRand();
	int number = getRand() * 32 + 1;
	return number;
}
int main() {
	int a2; 	int a4 = 0;
	do {
		a4 = a4++;
		int a = 0;
		int a5 = number();
		int a3;
		do {
			a3 = guess(a5);
			a = a++;
			printf("You have tried %d times.\n", a);
		} while (a3 != 1);
		if (a4 == 1) {
			a2 = a;
			printf("You have tried %d times.\n", a);
		}
		else if (a4 == 2) {
			a2 = a;
			printf("You have tried %d times.\n", a);
			printf("The best is %d times.\n", a2);
		}
		else if (a <= a2) {
			a2 = a;
			printf("You have tried %d times.\n", a);
			printf("The best score is %d times.\n", a2);
		}
		else {
			printf("You have tried %d times.\n", a);
			printf("The best score is %d times.\n", a2);
		}
	} while (a2>4);
	getchar();
	getchar();
}