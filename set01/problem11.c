#include <stdio.h>

struct complex
{
    float real, imaginary;
};
typedef struct complex Complex;

Complex input_complex()
{
    Complex n;
    printf("Enter the real number:");
    scanf("%f", &n.real);
    printf("Enter the imagianry number:");
    scanf("%f", &n.imaginary);
    return n;
}

Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.imaginary;
    sum.imaginary=a.real+b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum)
{
    printf("%f+%fi + %f+%fi = %f+%fi", a.real, b.imaginary, a.imaginary, b.real, sum.real, sum.imaginary);
}

int main()
{
    Complex a, b;
    a=input_complex();
    b=input_complex();
    Complex sum= add_complex(a, b);
    output(a, b, sum);
    return 0;
}