#include <stdio.h>
int main() {
    int n;
    unsigned long long term = 2;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%llu ", term);
        term *= term;
    }
    printf("\n");
    return 0;
}
