#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int num1=0,i=1,sum=0;

    scanf("%d", &num1);

    while(i<10) {
        sum=num1*i;
        printf("%d * %d = %d\n",num1,i,sum);
        i+=1;
    }
}