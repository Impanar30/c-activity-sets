// Write a program to find the area of a triangle

#include <stdio.h>


typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float length;
} Line;

Point input_point() {
    Point p;
    printf("Enter x-coordinate: ");
    scanf("%f", &p.x);
    printf("Enter y-coordinate: ");
    scanf("%f", &p.y);
    return p;
}

Line input_line() {
    Line l;
    printf("Enter coordinates for point 1: ");
    l.p1 = input_point();
    printf("Enter coordinates for point 2: ");
    l.p2 = input_point();
    return l;
}

void find_length(Line *l) {
    float dx = l->p2.x - l->p1.x;
    float dy = l->p2.y - l->p1.y;
    l->length = sqrt(dx * dx + dy * dy);
}

void output(Line l) {
    printf("Line segment (%.2f, %.2f) - (%.2f, %.2f) has length: %.2f\n",
           l.p1.x, l.p1.y, l.p2.x, l.p2.y, l.length);
}

int main() {
    Line line = input_line();
    find_length(&line);
    output(line);
    return 0;
}