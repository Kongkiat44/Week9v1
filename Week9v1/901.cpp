#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main() {
	int num[10] = {}, i = 0, count = 0, round = 0, mod = 0;
	while (i < 10) {
		int k = 0, m = 0;
		char inp[100];
		scanf("%s", &inp);
		k = strlen(inp);
		for (int j = 0; j < k; j++) {
			if (isdigit(inp[j])) m++;
			else {
				printf("Enter numbers only\n");
				return 0;
			}
		}
		if (m == k) {
			int strnum = 0;
			strnum = atoi(inp);
			if (strnum > 0 && strnum < 1000) {
				num[i] = strnum % 42;
			}
			else {
				printf("Enter number between 1-999\n");
				return 0;
			}
		}
		else return 0;
		i++;
	}
	while (count < 10) {
		int dup = 0;
		for (int N = round + 1; N < 10; N++) {
			if (num[round] == num[N]) dup++;
		}
		round++;
		count += dup + 1;
		mod++;
	}
	if (count == 10) printf("%d\n", mod);
	return 0;
}