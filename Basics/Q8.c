#include <stdio.h>
int main() {
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    /* ফেক্টৰিয়েল গণনা কৰা */
    for (i = 1; i <= n; ++i) {
        factorial *= i;
    }
    printf("Factorial of %d = %llu\n", n, factorial);
    return 0;
}
