#pragma warning(disable:4996)
#include <stdio.h>
//더하기 싸이클

int main() {
    int mem1 = 0, mem10 = 0, in = 0, now1 = 10, now10 = 0, t = 0, b = 0;

    scanf("%d", &in);
    mem1 = in % 10;
    mem10 = in / 10;

    while (!(mem1 == now1 && mem10 == now10)) {
        if (t == 0) {
            now1 = mem1;
            now10 = mem10;
        }
        b = now1;
        now1 = (now10 + now1) % 10;
        now10 = b;
        t++;

    }
    printf("%d", t);
}