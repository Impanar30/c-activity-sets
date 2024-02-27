//Write a C program to compare three numbers using **pass by reference**

#include <stdio.h>

void input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main() {
    int a, b, c;
    input(&a, &b, &c);
    int comparelarge;
    compare(a, b, c, &comparelarge);
    output(a, b, c, comparelarge);
    return 0;
}

void input(int *a, int *b, int *c) {
    printf("Enter the numbers:");
    scanf("%d %d %d", a, b, c);
}

void compare(int a, int b, int c, int *largest) {
    if(a >= b && a >= c) {
        *largest = a;
    }
    if(b >= c) {
        *largest = b;
    }
    else {
        *largest = c;
    }
}

void output(int a, int b, int c, int largest) {
    printf("The largest number is %d, %d and %d is %d", a, b, c, largest);
}