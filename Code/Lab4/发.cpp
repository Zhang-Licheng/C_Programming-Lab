//This is a guessing game.
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
float getRand() {
	return rand() / (RAND_MAX + 1.0);
}
int guess(int a) {
	int answer, correct_answer;
	printf("Input the number you guess:");
	scanf("%d", &answer); correct_answer = a;
	if (answer == correct_answer) {
		printf("Correct!\n");
		return 1;
	}
	else if (answer < correct_answer) {
		printf("Too low.\n");
		return 0;
	}
	else {
		printf("Too high.\n");
		return 0;
	}
}
int main() {
	printf("There is number between 1 to 32.\nAnd you will have 5 chances to guess it.\n");
	srand(time(NULL));
	getRand();
	int a = getRand() * 32 + 1;
	if (guess(a) == 1) {
		printf("You win.");
	}
	else if (guess(a) == 1) {
		printf("You win.");
	}
	else if (guess(a) == 1) {
		printf("You win.");
	}
	else if (guess(a) == 1) {
		printf("You win.");
	}
	else if (guess(a) == 1) {
		printf("You win.");
	}
	else {
		printf("There is no chance\nYou lose!");
	}
	getchar();
	getchar();
}