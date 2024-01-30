//. Write a C program to find the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.

#include <stdio.h>
#include <math.h>

float input()
{
    float number;
    printf("Enter the square root number:");
    scanf("%f", &number);
    return number;
}

float square_root(float n)
{
    float x=2;
    while(fabs(x*x-n)>0.0001)
    {
        printf("Guess:%f/n",x);
        x=(x+n/x)/2;
    }
    return x;
}

void output(float n, float sqrroot)
{
    printf("The square root of %f is %f", n, sqrroot);
}

int main()
{
    float n;
    n=input();
    float square=square_root(n);
    output(n, square);
    return 0;
}