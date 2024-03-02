//Write a C program to find sum of _n_ different numbers entered by the user.

#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum_n_array);

int main() {
    int size;
    size = input_array_size();
    int n, a[n];
    input_array(n, a[n]);
    int sum = sum_n_array(n, a[n]);
    output(sum, n, a[n]);
    return 0;
}

int input_size_array() {
    int size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    return size;
}

void input_array(int n, int a[n]) {
    int i = 0;
    while (i <= n) {
        printf("Enter the array:");
        scanf("%d", a[i]);
        i++;
    }
}

int sum_n_array(int n, int a[n]) {
    int sum = 0, i = 0;
    while (i <= n) {
        sum += a[i];
        i++;
    }
    return sum;
}

void output(int n, int a[n], int sum_n_array) {
    printf("The array of %d is %d", n, a[n], sum_n_array);
    int sum = 0, i = 0;
    while (i <= n) {
        sum += a[i];
        i++;
    }
    printf("The array of %d is %d", n, a[n], sum_n_array);
}