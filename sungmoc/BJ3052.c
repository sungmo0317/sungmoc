#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int fn=0,i=0, arr[9]={0,}, sum=0, arr1[9]={0,},n1=0;
    
    for (i=0;i<10;i++) {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<10;i++) {
        sum=42%arr[i];
        arr1[i]=sum;
    }
    for (i=0;i<10;i++) {
        if(i==0) {
            n1=arr1[i];
        }
        else if (n1!=arr1[i]) {
            fn+=1;
        }
    }
    printf("%d", fn);
}