// int and float in C.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int i;
	int meatballs[5];
	int totalBalls = 0;

	for (i = 0; i < 5; i++) {
		printf_s("How many meatballs did you eat %d\n", i+1);
		scanf_s(" %d", &meatballs[i]);
	}

	for (i = 0; i < 5; i++) {
		totalBalls += meatballs[i];
	}
	int avg = totalBalls / 5;
	printf_s("you ate %d meatballs total, thats an average %d per day\n", totalBalls, avg);
    return 0;
}

