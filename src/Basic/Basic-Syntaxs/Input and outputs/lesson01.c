// stdi.h in C is that this header file imports different variables, macros, and functions to perform input and output operations.


#include <stdio.h>

int main() {
    short short_number = 32767;
    int integer_number = 2147483647;
    float float_number = 3.14159;
    char character = 'A';
    double double_number = 12345.6789;
    long double long_double_number = 1234567890.1234567890;
    long int long_integer_number = 2147483647;
    long long long2_integer_number = 9223372036854775807LL;

    // unsigned variables

    unsigned short int usi_number = 65535;
    unsigned char unsigned_character = 'B';
    unsigned long int uli_number = 4294967295UL;
    unsigned long long int ulli_number = 18446744073709551615ULL;
    unsigned int ui_number = 4294967295U;

    printf("Short: %hd\n", short_number);
    printf("Int: %d\n", integer_number);
    printf("Float: %.2f\n", float_number);
    printf("Char: %c\n", character);
    printf("Double: %lf\n", double_number);
    printf("Long Double: %.10Lf\n", long_double_number);
    printf("Long Int: %ld\n", long_integer_number);
    printf("Long Long Int: %lld\n", long2_integer_number);

    // Printing unsigned variables
    printf("Unsigned Short Int: %hu\n", usi_number);
    printf("Unsigned Char: %c\n", unsigned_character);
    printf("Unsigned Long Int: %lu\n", uli_number);
    printf("Unsigned Long Long Int: %llu\n", ulli_number);
    printf("Unsigned Int: %u\n", ui_number);

    return 0;
}
