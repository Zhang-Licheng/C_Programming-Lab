//This is a program about bit manipulation
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Decrypt(int former[], char decryption[]) {
	int i;
	int latter[20];
	for (i = 0; i < 20; i++) {
		latter[i] = former[i] ^ 31337;
		decryption[2 * i] = latter[i] >> 8;
		decryption[2 * i + 1] = latter[i];
	}
}
void Text(char text[]) {
	int i;
	for (i = 0; i<40; i++)
		printf("%c", text[i]);
}
int main() {
	int secret[20] = {15643,6913,6916,23040,2377,6985,6408,3657,5638,3084,2119,15910,23079,13629,23101,10300,10557,23073,13092,23369};
	char decryption[100];
	Decrypt(secret, decryption);
	Text(decryption);
	getchar();
}
