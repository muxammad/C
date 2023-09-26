#include <stdio.h>
#include <stdint.h>
#include <inttypes.h> // Include this header for the format specifiers


int main() {
    int8_t int8_number = -128;
    int16_t int16_number = -32768;
    int32_t int32_number = -2147483647 - 1;
    int64_t int64_number = -9223372036854775807LL - 1;
    uint8_t uint8_number = 255;
    uint16_t uint16_number = 65535;
    uint32_t uint32_number = 4294967295U;
    uint64_t uint64_number = 18446744073709551615ULL;

    printf("int8_t: %" PRId8 "\n", int8_number);
    printf("int16_t: %" PRId16 "\n", int16_number);
    printf("int32_t: %" PRId32 "\n", int32_number);
    printf("int64_t: %" PRId64 "\n", int64_number);
    printf("uint8_t: %" PRIu8 "\n", uint8_number);
    printf("uint16_t: %" PRIu16 "\n", uint16_number);
    printf("uint32_t: %" PRIu32 "\n", uint32_number);
    printf("uint64_t: %" PRIu64 "\n", uint64_number);

    return 0;
}
