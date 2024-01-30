#include <stdio.h>

int input_array_size()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    return size;
}

void input_array(int n, int a[n])
{
    printf("Enter the array:");
    for(int i=0; i<n; ++i)
    {
        scanf("%d", &a[i]);
    }
}

int sum_n_array(int n, int a[n])
{
    int add, i;
    add=0;
    for(i=0; i<n; ++i)
    {
        add=add+i;
    }
    return add;
}

void output(int n, int a[n], int sum)
{
    int i=0;
    for(i=0; i<n-1; ++i)
    {
        printf("%d+", a[i]);
    }
    printf("%d is %d", a[i], sum);
}

int main()
{
    int n;
    n=input_array_size();
    int a[n], sum;
    input_array(n,a);
    sum=sum_n_array(n,a);
    output(n, a, sum);
    return 0;
}

