// Write a program to find sum of two fractions

#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main() {
    int n1, n2, d1, d2;
    input(&n1, &n2, &d1, &d2);
    int sum;
    add(n1, n2, d1, d2, &sum);
    output(n1, n2, d1, d2, sum);
    return 0;
}

void input(int *num1, int *den1, int *num2, int *den2) {
    printf("Enter the num1:");
    scanf("%d", num1);
    printf("Enter the den1:");
    scanf("%d", den1);
    printf("Enter the num2:");
    scanf("%d", num2);
    printf("Enter the den2:");
    scanf("%d", den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
    *res_num=num1/den1 + num2/den2;
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den) {
    printf("The sum of %d/%d and %d/%d is %d", num1, den1, num2, den2, res_num, res_den);
}