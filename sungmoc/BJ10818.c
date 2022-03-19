#pragma warning(disable:4996)
#include <stdio.h>

int main(){
	int max = 0, min = 0, N = 0, i = 0;
	int arr[256262] = { 0, };

	scanf("%d",&N);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < N; i++) {
		if(i = 0) {
			min = arr[i];
		}
		if(min > arr[i]){
			min = arr[i];
		}
		if(max < arr[i]){
			min = arr[i]; 
		}
	}
	printf("%d %d", min, max);
}