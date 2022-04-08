#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main() {
    char arr[100]={0, };
    int fst=0, i=0, a=0, bfr=0, sum=0;

    scanf("%d", &a);
    scanf(" %s", arr);
    for (i=0; i < a; i++) {
        sum=atoi(arr[i])+sum;
    }
    printf("%d",sum);
}