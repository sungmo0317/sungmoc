#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int t = 0, m = 0, it=0, num=0, num1=0, num2=0;
	while (1) {
		
		printf("\n시 분 조리시간 을 입력해주세요\n");
		
		scanf("%d %d %d", &t, &m, &it);

		num = m + it;

		if (num < 60) {
			printf("%d %d", t, num);
		}

		else if (num < 120) {

			num = num % 60;
			t = t + 1;

			if (t < 24) {
				printf("%d %d", t, num);
			}
			else {
				t = 24 - t;
				printf("%d %d", t, num);
			}
		}
		else {
			num2 = num % 60;
			num1 = num / 60;
			t = t + num1;

			if (t < 24) {
				printf("%d %d", t, num2);
			}

			else {
				t = t - 24;

				printf("%d %d", t, num2);
			}

		}
	}
}