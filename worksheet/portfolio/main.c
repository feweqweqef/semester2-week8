#include <stdio.h>
#include "shapes.h"
#include <stdbool.h>

int main(void) {
    Point a = makePoint(0, 0);
    Point b = makePoint(3, 0);
    Point c = makePoint(0, 4);

    Line line = makeLine(a, b);
    Triangle tri = makeTriangle(a, b, c);

    printf("Line length: %.2f\n", lineLength(line)); // should be 3.00
    printf("Triangle area: %.2f\n", triangleArea(tri)); // should be 6.00

    Point test1 = makePoint(0,0);
    Point test2 = makePoint(1,1);

    printf("test1 in line? %d\n", pointInLine(test1, line)); // 1 (true)
    printf("test2 in line? %d\n", pointInLine(test2, line)); // 0 (false)

    printf("test1 in triangle? %d\n", pointInTriangle(test1, tri)); // 1
    printf("test2 in triangle? %d\n", pointInTriangle(test2, tri)); // 0

    return 0;
}