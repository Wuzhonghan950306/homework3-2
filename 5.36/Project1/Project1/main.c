#include <stdio.h>
#include <stdlib.h>

void towersOfHanoi(int n, char fromPeg, char toPeg, char auxPeg) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", fromPeg, toPeg);
        return;
    }
    towersOfHanoi(n - 1, fromPeg, auxPeg, toPeg);
    printf("Move disk %d from %c to %c\n", n, fromPeg, toPeg);
    towersOfHanoi(n - 1, auxPeg, toPeg, fromPeg);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    towersOfHanoi(n, 'A', 'C', 'B');

    return 0;
}
