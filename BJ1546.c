#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    double arr[100000]={0,},a=0,max=0,sum=0;
    int i=0;
    scanf("%lf", &a);
    for (i=0;i<a;i++) {
        scanf("%lf", &arr[i]);
        if(max<arr[i]) {
            max=arr[i];
        }
    }
    for (i=0;i<a;i++) {
        arr[i]=arr[i]/max*100;
    }
    for (i=0;i<a;i++) {
        sum=sum+arr[i];
    }
    sum=sum/a;
    printf("%f", a);
}