#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int d1 = 0, d2 = 0, d3 = 0, o=0;

	scanf("%d %d %d", &d1, &d2, &d3);

	if (d1 == d2 && d2 == d3) {
		
		o = 10000 + (d1 * 1000);

		printf("%d", o);
	}
	
	else if (d1 == d2 || d1 == d3 || d2 == d3) {
		
		if (d1 == d2) {
			o = 1000 + d1 * 100;
			printf("%d", o);
		}

		else if (d1 == d3) {
			o = 1000 + d1 * 100;
			printf("%d", o);
		}

		else {
			o = 1000 + d2 * 100;
			printf("%d", o);
		}
	}

	else {
		
		if (d1 > d2) {
			if (d1 > d3) {
				o = d1 * 100;
				printf("%d", o);
			}

			else {
				o = d3 * 100;
				printf("%d", o);
			}
		}

		else if (d2 > d1) {
			if (d2 > d3) {
				o = d2 * 100;
				printf("%d", o);
			}

			else {
				o = d3 * 100;
				printf("%d", o);
			}
		}
		else if (d3 > d1) {
			if (d3 > d2) {
				o = d3 * 100;
				printf("%d", o);
			}

			else {
				o = d2 * 100;
				printf("%d", o);
			}
		}
	}
}