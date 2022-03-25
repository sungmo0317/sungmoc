#pragma warning(4996)
#include <stdio.h>

int main() {
    int i=0, arr[5]={0, }, a=0;
    for (i=0; i<5;i++) {
        printf("%d에넣을 인덱스를 입력",i);
        scanf("%d", &a);
        arr[i]=a;
    }
    for (i=0;i<5;i++) {
        printf("%d ", arr[i]);
    }
    
}