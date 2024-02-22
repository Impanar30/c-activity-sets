//Write a program to find the permeter of a polygon

#include <stdio.h>
#include <math.h>

typedef struct point {
    float x;
    float y;
} Point;

typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n() {
    int sides;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &sides);
    return sides;
}

Point input_point(char *prompt_msg) {
    Point point;
    printf("%s", prompt_msg);
    scanf("%f %f", &point.x, &point.y);
    return point;
}

int input_polygon(Polygon *p) {
    int i=0;
    p->sides = input_n();

    if (p->sides > 100) {
        printf("Error: Maximum number of sides allowed is 100.\n");
        return -1;
    }
    for (int i = 0; i < p->sides; ++i) {
        p->p[i] = input_point("Enter coordinates of point %d (x y): ", i + 1);
    }
    return 0;
}

float find_distance(Point a, Point b) {
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

void find_perimeter(Polygon *p) {
    p->perimeter = 0;
    for (int i = 0; i < p->sides; ++i) {
        int next_i = (i + 1) % p->sides;
        p->perimeter += find_distance(p->p[i], p->p[next_i]);
    }
}

void output(Polygon p) {
    printf("Polygon with %d sides:\n", p.sides);
    for (int i = 0; i < p.sides; ++i) {
        printf("Point %d: (%.2f, %.2f)\n", i + 1, p.p[i].x, p.p[i].y);
    }
    printf("Perimeter: %.2f\n", p.perimeter);
}

int main() {
    Polygon polygon;
    if (input_polygon(&polygon) == 0) {
        find_perimeter(&polygon);
        output(polygon);
    } else {
        printf("Error reading polygon data.\n");
    }
    return 0;
}
