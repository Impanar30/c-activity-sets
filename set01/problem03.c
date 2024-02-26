/*Write a C program to add two numbers using **pass by value**
int input();
int add(int a, int b);
void output(int a, int b, int sum)*/

#include <stdio.h>

int input();
int add(int a, int b);
void output(int a, int b, int add);

int main() {
    int number1, number2;
    number1=input();
    number2=input();
    int sum=add(number1, number2);
    output(number1, number2, sum);
    return 0;
}

int input() {
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    return number;
}

int add(int a, int b) {
    return a+b;
}

void output(int a, int b, int add) {
    printf("%d+%d=%d", a, b, add);
}