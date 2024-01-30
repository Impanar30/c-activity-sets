#include <stdio.h>

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main()
{
    int n;
    n=input_n();
    int sum=sum_n_nos(n);
    output(n, sum);
    return 0;
}

int input_n()
{
    int n;
    printf("Enter the n values:");
    scanf("%d", &n);
    return n;
}

int sum_n_nos(int n)
{
    int s, i;
    for(i=0; n>=1; ++i)
    {
        s+=i;
    }
    return s;
}

void output(int n, int sum)
{
    printf("%d is %d", n, sum);
}