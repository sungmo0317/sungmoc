#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int num1 = 0, num2 = 0, num3 = 0, sum = 0, arr[8] = { 0, }, i = 0, fuck = 0,i0=0, i1=0,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0,i8=0,i9=0;

	scanf("%d %d %d", &num1, &num2, &num3);

	sum = num1 * num2 * num3;

	for (i = 0; i <= 8; i++) {
		fuck = sum % 10;
		sum = sum / 10;
		
		if (fuck == 0) {
			i0 = i0 + 1;
		}
		else if (fuck == 1) {
			i1 = i1 + 1;
		}
		else if (fuck == 2) {
			i2 = i2 + 1;
		}
		else if (fuck == 3) {
			i3 = i3 + 1;
		}
		else if (fuck == 4) {
			i4 = i4 + 1;
		}
		else if (fuck == 5) {
			i5 = i5 + 1;
		}
		else if (fuck == 6) {
			i6 = i6 + 1;
		}
		else if (fuck == 7) {
			i7 = i7 + 1;
		}
		else if (fuck == 8) {
			i8 = i8 + 1;
		}
		else if (fuck == 9) {
			i9 = i9 + 1;
		}
		if (sum == 0) {
			break;
		}
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", i0, i1, i2, i3, i4, i5, i6, i7, i8, i9);
}