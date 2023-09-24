#include <stdio.h>

int main() {
    float num1 = 3.5;
    float num2 = 2.0;
    double num3 = 4.75;
    double num4 = 1.25;

    // Addition
    float sumFloat = num1 + num2;
    double sumDouble = num3 + num4;

    // Subtraction
    float diffFloat = num1 - num2;
    double diffDouble = num3 - num4;

    // Multiplication
    float productFloat = num1 * num2;
    double productDouble = num3 * num4;

    // Division
    float quotientFloat = num1 / num2;
    double quotientDouble = num3 / num4;

    // Print results
    printf("Addition (float): %.2f\n", sumFloat);
    printf("Addition (double): %.2lf\n", sumDouble);
    printf("Subtraction (float): %.2f\n", diffFloat);
    printf("Subtraction (double): %.2lf\n", diffDouble);
    printf("Multiplication (float): %.2f\n", productFloat);
    printf("Multiplication (double): %.2lf\n", productDouble);
    printf("Division (float): %.2f\n", quotientFloat);
    printf("Division (double): %.2lf\n", quotientDouble);

    return 0;
}
