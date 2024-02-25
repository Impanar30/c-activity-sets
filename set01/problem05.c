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
    if(a>=b && a>=c) {
        return a;
    }
    else if(b>=c) {
        return b;
    }
    else {
        return c;
    }
    return largest;
}

void output(int a, int b, int c, int largest) {
    printf("The largest number of %d, %d and %d is %d", a, b, c, largest);
}
