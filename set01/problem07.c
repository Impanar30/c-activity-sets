// Write a C program to find sum of all natural numbers until _n_

#include <stdio.h>

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main() {
    int number;
    number = input();
    int sum = sum_n_nos(number);
    output(number, sum);
    return 0;
}

int input_n() {
    int number;
    printf("Enter the natural nunber:");
    scanf("%d", &number);
    return number;
}

int sum_n_nos(int n) {
    int sum = 0;
    int i = 1;
    while(i <= n) {
        sum += i;
        i++;
    }
    return sum;
}

void output(int n, int sum_n_nos) {
    printf("%d is %d", n, sum_n_nos);
}