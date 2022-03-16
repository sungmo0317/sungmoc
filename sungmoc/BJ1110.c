#pragma warning(disable:4996)
#include <stdio.h>
//더하기 싸이클
int main() {
	int num1 = 0, sum1 = 0, sum2 = 0, i = 0;

	scanf("%d", &num1);

	i = num1;

	while (i != num1) {
		sum1 = num1 / 10;
		
		sum2 = num1 % 10;

		num1 = sum1 + sum2;

		i = i + 1;
	}
	printf("%d", i);
}

