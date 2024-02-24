//Write a C program to add two numbers.

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the num1:");
    scanf("%d", &num1);

    printf("Enter the num2:");
    scanf("%d", &num2);

    int sum = num1+num2;

    printf("sum=%d", sum);

    return 0;
}