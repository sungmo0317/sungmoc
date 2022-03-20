#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int in = 0, i = 0, fn = 0, max = 0, fi = 0;

	for (i = 1; i < 10; i++) {
		scanf("%d", &in);

		if (max < in) {
			max = in;
			fi = i;
		}
	}
	printf("%d\n%d", max, fi);

}