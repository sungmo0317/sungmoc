#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int hansu(a) {
    int i = 1, j = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, sum = 0, namuji = 0, mok = 0, deungcha[5] = { 0, }, jaritsu = 0, ic = 0, output = 0;

    while (i <= a) {
        ic = i;
        jaritsu = 0;
        while (ic != 0) {
            ic = ic / 10;
            jaritsu = jaritsu + 1;
        }
        if (jaritsu <= 2) {
            output = output + 1;
        }
        for (j = 1; j <= jaritsu; j++) {
            if (j == 1) {
                mok = i;
            }
            namuji = mok % 10;
            mok = mok / 10;
            deungcha[j] = namuji;
        }
        
        if (jaritsu == 3) {
            if ((deungcha[3] - deungcha[2]) == (deungcha[2] - deungcha[1])) {
                output = output + 1;
            }
        }
        i = i + 1;
    }
    return output;

}


int main() {
    int a = 0, sum = 0;
    scanf("%d", &a);
    //printf("hello");
    printf("%d", hansu(a));
}