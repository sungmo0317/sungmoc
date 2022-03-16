#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	while (1)	{
		int in = 0;

		printf("숫자를 입력하시면 1단부터 9단이 출력됩니다\n");

		scanf("%d", &in);

		for (int a = 1; a < 10; a++) {
			printf("%d * %d = %d\n", in, a, in * a);
		}

	}
}