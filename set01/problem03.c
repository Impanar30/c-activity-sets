//Write a C program to add two numbers using **pass by value**

#include <stdio.h>

int input();
int add(int a, int b);
void output(int a, int b, int add);

int main() {

    int a, b;
    a = input();
    b = input();
    int sum = add(a, b);
    output(a, b, sum);
    return 0;
}

int input() {

    int number;
    printf("Enter the numbers:");
    scanf("%d", &number);
    return number;
}

int add(int a, int b) {

    return a + b;
}

void output(int a, int b, int add) {
    
    printf("%d+%d=%d", a, b, add);
}