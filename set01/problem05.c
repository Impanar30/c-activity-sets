//Write a C program to compare three numbers using **pass by value**

#include <stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main() {
    int a, b, c;
    a=input();
    b=input();
    c=input();
    int largest;
    largest=compare(a, b, c);
    output(a, b, c, largest);
    return 0;
}

int input() {
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    return n;
}

int compare(int a, int b, int c) {
    int largest;
    largest=a>=b?:a>=c?:b>=c; //variable=expression1:expression2:expression3
    return largest;
}

void output(int a, int b, int c, int largest) {
    printf("The largest number of %d, %d and %d is %d", a, b, c, largest);
}
