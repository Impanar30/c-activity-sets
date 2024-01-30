//Write a C program to find sum of all natural numbers until _n_

#include <stdio.h>

int input_n()
{
    int n;
    printf("Enter the n values:");
    scanf("%d", &n);
    return n;
}

int sum_n(int n)
{
    int s=0;
    for(int i=0; i<n; ++i)
    {
        s+=i;
    }
    return s;
}

void output(int n, int sum)
{
    printf("%d is %d", n, sum);
}

int main()
{
    int a;
    a=input_n();
    int sum=sum_n(a);
    output(a,sum);
    return 0;
}