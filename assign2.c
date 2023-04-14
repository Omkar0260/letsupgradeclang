#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        sum += 2*i - 1; // Formula for finding the ith odd number
    }
    
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    printf("%d^2 = %d\n", n, n*n);
    
    if (sum == n*n) {
        printf("The fact is verified.\n");
    } else {
        printf("The fact is not verified.\n");
    }
    
    return 0;
}
