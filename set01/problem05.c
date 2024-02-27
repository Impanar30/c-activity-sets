//Write a C program to compare three numbers using **pass by value**

#include <stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main() {
    int a, b, c;
    a = input();
    b = input();
    c = input();
    int comparelarge=compare(a, b, c);
    output(a, b, c, comparelarge);
    return 0;
}

int input() {
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    return number;
}

int compare(int a, int b, int c) {
    if(a >= b && a >= c) {
        return a;
    }
    if(b >= c) {
        return b;
    }
    else {
        return c;
    }
}

void output(int a, int b, int c, int largest) {
    printf("Largest number of %d, %d and %d is %d", a, b, c, largest);
}