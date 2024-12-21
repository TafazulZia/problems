#include <stdio.h>
#define PI 3.14159
int main() {
    double radius, area;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("Area = %.2lf\n", area);
    return 0;
}
