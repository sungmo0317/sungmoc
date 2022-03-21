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
        if (i==0) {
            n1=arr1[i];
            if (arr[i] != n1) {
                fn+=1;
            }
        }
        else if (i==1) {
            if (arr[i] != n1) {
                fn+=1;
                n1=arr1[i];
            } 
        }
        else if (i==2) {
            if (arr[i] != n1) {
                fn+=1;
                n1=arr1[i];
            }
        }
        else if (i==3) {
            if (arr[i] != n1) {
                fn+=1;
                n1=arr1[i];
            }
        }
        else if (i==4) {
            if (arr[i] != n1) {
                fn+=1;
                n1=arr1[i];
            }
        }
        else if (i==5) {
            if (arr[i] != n1) {
                fn+=1;
                n1=arr1[i];
            }
        }
        else if (i==6) {
            if (arr[i] != n1) {
                fn+=1;
                n1=arr1[i];
            }
        }
        else if (i==7) {
            if (arr[i] != n1) {
                fn+=1;
                n1=arr1[i];
            }
        }
        else if (i==8) {
            if (arr[i] != n1) {
                fn+=1;
                n1=arr1[i];
            }
        }
        else {
            if (arr[i] != n1) {
                fn+=1;
                n1=arr1[i];
            }
        }
    }
    printf("%d", fn);
}