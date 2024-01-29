#include <stdio.h>

void input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main()
{
    int a, b, c;
    input(&a, &b, &c);
    int large;
    compare(a, b, c, &large);
    output(a, b, c, large);
    return 0;
}

void input(int *a, int *b, int *c)
{
    printf("Enter the numbers:");
    scanf("%d %d %d", a,b ,c);
}

void compare(int a, int b, int c, int *largest)
{
    if (a>=b && a>=c)
    {
        *largest=a;
    }
    else if(b>=c)
    {
        *largest=b;
    }
    else{
        *largest=c;
    }
}

void output(int a, int b, int c, int largest)
{
    printf("Largest number of %d, %d and %d is %d", a, b, c, largest);
}