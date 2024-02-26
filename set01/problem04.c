//Write a C program to add two numbers using **pass by reference**

#include <stdio.h>

void input(int *a, int *b);
void add(int a, int b, int *add);
void output(int a, int b, int add);

int main() {
    int a, b;
    input(&a, &b);
    int sum;
    add(a, b, &sum);
    output(a, b, sum);
    return 0;
}

void input(int *a, int *b) {
    printf("Enter the value of a:");
    scanf("%d", a);
    
    printf("Enter the value of b:");
    scanf("%d", b);
}

void add(int a, int b, int *add) {
    *add = a + b;
}

void output(int a, int b, int add) {
    printf("%d + %d = %d", a, b, add);
}