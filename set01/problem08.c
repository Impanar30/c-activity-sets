//Write a C program to find sum of _n_ different numbers entered by the user.

#include <stdio.h>

int input_array_size();
void input_array(int n, int **a);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main() {
    int n;
    n = input_array_size();
    int a[n];
    input_array(n, a);
    int sum = sum_n_array(n, a);
    output(n, a, sum);
    return 0;
}

int input_size_array() {
    int size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    return size;
}

void input_array(int n, int **a) {
    *a = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &(*a)[i]);
    }
}

int sum_n_array(int n, int a[n]) {
    int sum = 0;
    for(int i = 0; i <= n; ++i) {
        sum += a[i];
    }
    return sum;
}

void output(int n, int a[n], int sum) {
   printf("The array is %d");
   for(int i = 0; i <= n; ++i) {
    printf("%d", a[i]);
   }
   printf("The elements of the array is %d", n, sum);
}