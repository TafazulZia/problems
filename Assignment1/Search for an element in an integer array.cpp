#include <stdio.h>
int main() {
    int arr[10], n, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            printf("Element found at index %d\n", i);
            break;
        }
    }
    if (!found) {
        printf("Element not found.\n");
    }
    return 0;
}
