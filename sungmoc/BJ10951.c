#pragma warning(disable:4996)
#include <stdio.h>
//���� �ܰ躰Ǯ��� While�� 2������

int main() {
	int num1 = 0, num2 = 0;

	scanf("%d %d", &num1, &num2);

	while (num1 > 0 || num2<10) {
		printf("%d", num1 + num2);
		scanf("%d %d", &num1, &num2);
	}
}