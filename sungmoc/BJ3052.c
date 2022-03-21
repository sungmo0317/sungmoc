#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int i = 0, j = 0, num[10] = { 0, }, c = 10;

    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
        num[i] = num[i] % 42;
    }

    for (i = 0; i < 10; i++) {
        for (j = i+1; j < 10; j++) {
            if (num[i] == num[j]) {
                num[j] = 43;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        if (num[i] == 43) {
            c--;
        }
    }
    printf("%d", c);
}