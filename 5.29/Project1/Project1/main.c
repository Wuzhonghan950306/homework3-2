#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = lcm(num1, num2);
    printf("LCM of %d and %d is %d\n", num1, num2, result);

    return 0;
}

	

