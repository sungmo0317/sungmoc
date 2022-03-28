#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int hansu(a) {
    int i=0,d1=0,d2=0,d3=0,d4=0,sum=0,namuji=0,mok=0,deungcha(4)={0,},jaritsu=0,ac=0;
    ac=a;
    while(ac!=0) {
        ac=ac/10;
        jaritsu=jaritsu+1;
    }
    
    for (i=0;i<=a;i++) {
        for (i=0; i<=jaritsu; i++) {
            sum=i;
            namuji=sum%10;
            mok=sum/10;
            deungcha(i)=namuji;
        }
    }
}


int main() {
    
}