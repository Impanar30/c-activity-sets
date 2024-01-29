#include <stdio.h>

int input()
{
    int number;
    printf("Enter the numbers:");
    scanf("%d", &number);
    return number;
}

int sum(int a, int b)
{
    return a+b;
}

void output(int a, int b, int sum)
{
    printf("%d+%d=%d", a, b, sum);
}

int main()
{
    int a, b;
    a=input();
    b=input();
    int add=sum(a, b);
    output(a, b, add);
    return 0;
}