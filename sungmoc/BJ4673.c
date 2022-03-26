#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int d(a) {
	int d4 = 0, d3 = 0, d2 = 0, d1 = 0, c=0;
	d1 = a % 10;
	d2 = (a / 10) % 10;
	d3 = (a / 100) % 10;
	d4 = (a / 1000) % 10;

	c = a + d1 + d2 + d3 + d4;
	return c;
}

int main() {
	int i = 0,j=0;
	bool a[10001] = { 0, };
	for (i=0; i < 10000; i++) {
		j = d(i);
		if (j <= 10000) {
			a[j] = true;
		}
	}
	for (i = 0; i < 10000; i++) {
		if (!(a[i] == true)) {
			printf("%d\n", i);
		}
	}
}