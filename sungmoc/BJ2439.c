#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int num1 = 0, num2 = 0, i = 0, A = 0;

	scanf("%d", &num1);
	
	for (i = 0; i < num1; i++) {

		for (A = 1; A < (num1 - i); A++) {
			printf(" ");
		}

		for (num2 = 0; num2 <= i; num2++) {
			printf("*");
		}

		printf("\n");
	}
}