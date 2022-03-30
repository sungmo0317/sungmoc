#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int hansu(a) {
    int i=0,d1=0,d2=0,d3=0,d4=0,sum=0,namuji=0,mok=0, deungcha[4]={0,},jaritsu=0,ic=0,output=0;
    
    for (i=0;i<=a;i++) {
        ic=i;
        while(ic!=0) {
            ic=ic/10;
            jaritsu=jaritsu+1;
        }
        for (i=0; i<=jaritsu; i++) {
            mok=i;
            namuji=mok%10;
            mok=mok/10;
            deungcha[i]=namuji;
        }
        if (jaritsu<=2) {
            output=output+1;
        }
        else if (jaritsu==3) {
            if (deungcha[0]-deungcha[1]==deungcha[1]-deungcha[2]) {
                output=output+1;
            }
        }
        
    }
    return output;
}


int main() {
    int a=0, sum=0;
    scanf("%d", &a);
    //sum=hansu(a);
    printf("%d",hansu(a));
}