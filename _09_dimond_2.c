#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Print upper half of the diamond
    for(int i = 0; i < n; i++) {
        // Print leading spaces
        for(int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print stars
        for(int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Print lower half of the diamond
    for(int i = n - 2; i >= 0; i--) {
        // Print leading spaces
        for(int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print stars
        for(int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
