#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	int it=0, im=0;

	while (1) {
	
		printf("�� �� ���Է����ּ���\n");
	
		scanf("%d %d", &it, &im);

		im = im - 45;
	
		if (im < 0) {
			if (it!=0) {
				it = it - 1;
			}
			else {
				it = 23;
			}
			im = 60 + im;
		}
	
		printf("\n%d�� %d��\n", it, im);
	
	}

}