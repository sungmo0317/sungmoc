#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    char arr[100];
    int fst=0, i=0, a=0, bfr=0, sum=0;

    scanf("%d", &a);
    scanf("%s", arr);
    for (i=0; i < a; i++) {
        sum=arr[i]+bfr;
        bfr=arr[i];
        //printf("hello");
    }
    printf("%d",sum);
}