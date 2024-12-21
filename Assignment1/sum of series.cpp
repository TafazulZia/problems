#include <stdio.h>
int main() {
    int n;
    float sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (i * 2);
    }
    printf("Sum = %.2f\n", sum);
    return 0;
}
