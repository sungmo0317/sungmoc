#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main(){
	int max = 0, min = 0, N = 0, i = 0;
	int* arr;
	arr = (int*)malloc(sizeof(int) * 1000000);

	scanf("%d",&N);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < N; i++) {
		if(i == 0) {
			min = arr[i];
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("%d %d", min, max);
	free(arr);
}