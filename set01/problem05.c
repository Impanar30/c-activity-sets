#include <stdio.h>

int input()
{
    int number;
    printf("Enter the numbers:");
    scanf("%d", &number);
    return number;

}

int compare(int a, int b, int c)
{
    if(a>=b && a>=c)
    return a;
    else if(b>=c)
    return b;
    return c;
}

void output(int a, int b, int c, int largest)
{
    printf("The largest number of %d, %d, %d is %d", a, b, c, largest);
}

int main()
{
    int a, b, c;
    a=input();
    b=input();
    c=input();
    int large=compare(a, b, c);
    output(a, b, c, large);
    return 0;
}
