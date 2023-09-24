#include <stdio.h>
#include <math.h>

int main() {
    double angle_degrees = 30.0;
    double angle_radians = angle_degrees * (3.14159265358979323846 / 180.0);

    double sine_value = sin(angle_radians);
    double cosine_value = cos(angle_radians);

    printf("Angle: %.2lf degrees\n", angle_degrees);
    printf("Sine: %.4lf\n", sine_value);
    printf("Cosine: %.4lf\n", cosine_value);

    return 0;
}
