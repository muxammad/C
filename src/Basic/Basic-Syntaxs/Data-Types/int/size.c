#include <stdio.h>

int main() {
    printf("integer Data Type  | Size (bytes)\n");
    printf("-------------------|--------------\n");
    printf("short              | %d\n", sizeof(short));
    printf("int                | %d\n", sizeof(int));
    printf("long               | %d\n", sizeof(long));
    printf("unsigned short     | %d\n", sizeof(unsigned short));
    printf("unsigned int       | %d\n", sizeof(unsigned int));
    printf("unsigned long      | %d\n", sizeof(unsigned long));
    printf("unsigned long long | %d\n", sizeof(unsigned long long));

    return 0;
}