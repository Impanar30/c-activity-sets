#include <stdio.h>

void input(int *a, int *b);
void sum(int a, int b, int *sum);
void output(int a, int b, int sum);

int main()
{
    int a, b;
    input(&a, &b);
    int add;
    sum(a, b, &add);
    output(a, b, add);
    return 0;
}

void input(int *a, int *b)
{
    printf("Enter the numbers:");
    scanf("%d %d", a, b);
}

void sum(int a, int b, int *sum)
{
    *sum=a+b;
}

void output(int a, int b, int sum)
{
    printf("%d+%d=%d", a, b, sum);
}