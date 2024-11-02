#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;  
    }

    unsigned long long int a = 0;  
    unsigned long long int b = 1;  
    unsigned long long int c;      

    for (int i = 2; i <= n; i++) {
        c = a + b;  
        a = b;      
        b = c;      
    }

    return c; 
}

int main() {
    int n;

    printf("Enter the position of Fibonacci number: ");
    scanf("%d", &n);

    unsigned long long int result = fibonacci(n);
    printf("Fibonacci(%d) = %llu\n", n, result);

    return 0;
}
