//This is a program that calculates the Coleman-Liau Index of some text.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int CLI(char text[]) {
	int i;
	int characters, letters = 0, words, spaces = 0, sentences = 0;
	characters = strlen(text);
	for (i = 0; i<characters; i++) {
		if (text[i] == ' ')
		{
			spaces++;
		}
		if (text[i] == '.')
		{
			sentences++;
		}
		if ((text[i] >= 'A'&&text[i] <= 'Z') || (text[i] >= 'a'&&text[i] <= 'z'))
		{
			letters++;
		}
	}
	words = spaces + 1;
	float cli = 5.89 * ((float)letters / words) - 29.5 * ((float)sentences / words) - 15.8;
	//float cli = £¨ 5.89 *£¨£¨float£©letters / words) -  29.5*( (float)sentences / words)£© - 15.8;

	if (cli <= 1) {
		cli = 1;
	}
	printf("%s\n", text);
	printf(" There are %d letters, %d words,  %d sentences.\n", letters, words, sentences);
	printf("CLI = %.1f\n", cli);
	return 0;
}

int main() {
	char text1[100] = "I like cats. Cats like me. Miao miao miao. Dogs are bad. Bad dogs bad.";
	char text2[500] = "Tomorrow, and tomorrow, and tomorrow, Creeps in this petty pace from day to day, To the last syllable of recorded time; And all our yesterdays have lighted fools The way to dusty death. Out, out, brief candle. Life's but a walking shadow, a poor player That struts and frets his hour upon the stage And then is heard no more. It is a tale Told by an idiot, full of sound and fury Signifying nothing.";
	char text3[1000] = "Existing computer programs that measure readability are based largely upon subroutines which estimate number of syllables, usually by counting vowels. The shortcoming in estimating syllables is that it necessitates keypunching the prose into the computer. There is no need to estimate syllables since word length in letters is a better predictor of readability than word length in syllables. Therefore, a new readability formula was computed that has for its predictors letters per hundred words and sentences per hundred words. Both predictors can be counted by an optical scanning device, and thus the formula makes it economically feasible for an organization such as the US Office of Education to calibrate the readability of all textbooks for the public school system.";
	CLI(text1);
	CLI(text2);
	CLI(text3);
	getchar();
}