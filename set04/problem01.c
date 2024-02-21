// Write a program to find sum of two fractions

#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2) {
    printf("Enter the first fraction: ");
    scanf("%d/%d", num1, den1);

    printf("Enter the second fraction: ");
    scanf("%d/%d", num2, den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
    int lcm = (den1 * den2) / gcd(den1, den2);

    *res_num = (num1 * lcm / den1) + (num2 * lcm / den2);
    *res_den = lcm;
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den) {
    printf("Sum of the fractions %d/%d and %d/%d is %d/%d\n", num1, den1, num2, den2, res_num, res_den);
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, den1, num2, den2, res_num, res_den;

    input(&num1, &den1, &num2, &den2);
    add(num1, den1, num2, den2, &res_num, &res_den);
    output(num1, den1, num2, den2, res_num, res_den);

    return 0;
}