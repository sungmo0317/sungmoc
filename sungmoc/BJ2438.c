#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int n = 0, i = 0, st=0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		
		for (int A = 0; A <= i; A++) {
			printf("*");
		}
		printf("\n");
	}
}