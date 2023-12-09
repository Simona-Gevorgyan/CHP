#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



int gcd(int a, int b) {
    if (b == 0) {
        return abs(a);
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return abs(a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf_s("%d", &num1);
    printf("Enter the second number: ");
    scanf_s("%d", &num2);

    int gcdResult = gcd(num1, num2);
    int lcmResult = lcm(num1, num2);

    printf("The greatest common divisor is %d\n", gcdResult);
    printf("The least common multiple is %d\n", lcmResult);

    return 0;
}
