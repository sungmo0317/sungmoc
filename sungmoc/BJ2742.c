#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int n = 0, i = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("%d\n", n-i);
	}
}