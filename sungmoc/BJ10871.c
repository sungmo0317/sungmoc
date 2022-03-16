#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int N = 0, X = 0, i = 0, num1 = 0, num2 = 0,  arr1[10000000] = { 0, };

	scanf("%d %d", &N, &X);

	for (i = 0; i < N; i++) {
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < N; i++) {
		if (arr1[i] < X) {
			printf("%d ", arr1[i]);
		}
	}
}