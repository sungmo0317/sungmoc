#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int a = 0, b=0;
	
	while (1) {
		
		printf("\nx y 를 입력해주세요\n");
		
		scanf("%d %d", &a, &b);

		if (-1000 <= a && a <= 1000 && a != 0 && -1000 <= b && b <= 1000 && b != 0) {
			
			if (a > 0 && b > 0) {
				printf("1");
			}

			else if (a < 0 && b>0) {
				printf("2");
			}

			else if (a < 0 && b < 0) {
				printf("3");
			}

			else {
				printf("4");
			}
		}
	}


}