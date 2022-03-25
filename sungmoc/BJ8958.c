#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int T = 0, i = 0, a = 1, b = 1, sum = 0;
    char s1[81];
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%s", s1);
        //while (1) {

        b = 1;
        sum = 0;
        for (a = 0; a < 81; a++) {
            if (s1[a] != 'O' && s1[a] != 'X') {
                break;
            }
            if (s1[a] == 'O') {
                sum = sum + b;
                b += 1;
            }
            else if (s1[a] == 'X') {
                b = 1;
            }
        }

        //}
        printf("%d\n", sum);
    }

}