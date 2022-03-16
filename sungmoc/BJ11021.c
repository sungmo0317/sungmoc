#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int T = 0, i = 0, num1=0, num2=0, sum=0;

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		scanf("%d %d", &num1, &num2);

		sum = num1 + num2;

		printf("Case #%d: %d\n", i+1, sum);
	}
}
