#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int T = 0, STUN = 0, i = 0, j = 0;
    double arr[1000] = { 0, }, per = 0, plus = 0, overst = 0, a = 0;

    scanf("%d", &T);
    for (j = 0; j < T; j++) {
        plus = 0;
        overst = 0;

        scanf("%d", &STUN);
        for (i = 0; i < STUN; i++) {
            scanf("%lf", &a);
            arr[i] = a;
            plus = plus + arr[i];
        }

        plus = plus / STUN;

        for (i = 0; i < STUN; i++) {
            if (arr[i] > plus) {
                overst = overst + 1;
            }
        }
        per = ((double)100 / STUN) * overst;
        printf("%.3lf%%\n", per);
    }
}