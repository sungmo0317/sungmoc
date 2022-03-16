#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int in = 0;

	scanf("%d", &in);

	int a[1000]= {0,}, b[1000] = {0,};

	for (int i = 0; i < in; i++) {
		scanf("%d %d", &a[i], &b[i]);
	}
	
	for (int i = 0; i < in; i++) {
		printf("\n%d", a[i] + b[i]);
	}
}