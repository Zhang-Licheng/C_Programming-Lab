#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
float getRand() {
	return rand() / (RAND_MAX + 1.0);
}
int rollDie(int a) {
	return getRand()*a+1 ;
}
int main() {
	srand(time(NULL)); 
	getRand(); 
	int value = 0;
	value = rollDie(6);
	printf("6-sided die: %i\n", value);
	value = rollDie(20);
	printf("20-sided die: %i\n", value);
	getchar();
}
