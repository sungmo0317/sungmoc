#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    double h=0, k=0, BMI=0;
    scanf("%lf %lf",&h,&k);
    h=h/100;
    BMI=k/(h*h);
    printf("%lf",BMI);
}