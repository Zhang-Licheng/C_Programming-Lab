#include <stdio.h>
#include <stdlib.h> 

struct Change {
	int total_pences;
	int pence1;
	int pence2;
	int pence5;
	int pence10;
	int pence20;
	int pence50;
	int pence100;
	int pence200;
};

struct Change getChange(int pences1, int pences2)
{
	struct Change coins;
	int change;
	change = pences2 - pences1;
	coins.pence1 = 0;
	coins.pence2 = 0;
	coins.pence5 = 0;
	coins.pence10 = 0;
	coins.pence20 = 0;
	coins.pence50 = 0;
	coins.pence100 = 0;
	coins.pence200 = 0;

	if (change >= 200)
	{
		coins.pence200 = change / 200;
		change = change - coins.pence200 * 200;
	}
	if (change >= 100)
	{
		coins.pence100 = change / 100;
		change = change - coins.pence100 * 100;
	}
	if (change >= 50)
	{
		coins.pence50 = change / 50;
		change = change - coins.pence50 * 50;
	}
	if (change >= 20)
	{
		coins.pence20 = change / 20;
		change = change - coins.pence20 * 20;
	}
	if (change >= 10)
	{
		coins.pence10 = change / 10;
		change = change - coins.pence10 * 10;
	}
	if (change >= 5)
	{
		coins.pence5 = change / 5;
		change = change - coins.pence5 * 5;
	}
	if (change >= 2)
	{
		coins.pence2 = change / 2;
		change = change - coins.pence2 * 2;
	}
	if (change == 1) 
	{
		coins.pence1 = change / 1;
		change = change - coins.pence1 * 1;
	}
	return coins;
}

void printChange(struct Change coins)
{
	printf("p200\tp100\tp50\tp20\tp10\tp5\tp2\tp1\n");
	printf("%i\t%i\t%i\t%i\t%i\t%i\t%i\t%i\n", coins.pence200, coins.pence100, coins.pence50, coins.pence20, coins.pence10, coins.pence5, coins.pence2, coins.pence1);

}


int main() {
	struct Change coins;
	coins = getChange(7, 10);
	printChange(coins);
	coins = getChange(56, 70);
	printChange(coins);
	coins = getChange(124, 200);
	printChange(coins);
	coins = getChange(1232, 2000);
	printChange(coins);
	getchar();
}
