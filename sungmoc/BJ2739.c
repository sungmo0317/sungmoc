#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	while (1)	{
		int in = 0;

		printf("���ڸ� �Է��Ͻø� 1�ܺ��� 9���� ��µ˴ϴ�\n");

		scanf("%d", &in);

		for (int a = 1; a < 10; a++) {
			printf("%d * %d = %d\n", in, a, in * a);
		}

	}
}