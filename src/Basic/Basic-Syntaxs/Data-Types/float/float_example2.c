#include <stdio.h>

int main() {
    float num1 = 0.1;
    float num2 = 0.2;
    float sum = num1 + num2;

    float nums1 = 1.234567890123456789;
    double nums2 = 1.234567890123456789;
    long double num3 = 1.234567890123456789;

    printf("Float: %.2f\n", nums1);
    printf("Double: %.2lf\n", nums2);
    printf("Long Double: %.20Lf\n", num3);

    printf("Sum: %.2f\n", sum);

    return 0;
}
