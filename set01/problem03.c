#include <stdio.h>

int input()
{
    int n;
    printf("Enter the numbers:");
    scanf("%d", &n);
    return n;
}

int sum(int a, int b)
{
    return a+b;
}

void output(int a, int b, int sum)
{
    printf("Sum of %d and %d is %d", a, b, sum);
}

int main()
{
    int a, b;
    a=input();
    b=input();
    int add=sum(a, b);
    output(a, b, sum);
    return 0;
}