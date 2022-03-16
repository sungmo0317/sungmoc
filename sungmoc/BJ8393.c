#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int num = 0, i=0, sum=0;

	scanf("%d", &num);

	for (i = 0; i <= num; i++) {
		sum = sum + i;
	}

	printf("%d", sum);
}