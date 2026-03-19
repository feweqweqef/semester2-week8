// Hafeezah Binte Abdul Kasim
#include <stdbool.h>
#include <math.h>
#define EPSILON 1.0e-6

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point p;
    p.x = x;
    p.y = y;
    return p;
    // implementation
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()

// a line contains 2 points - in  this case p1 and p2
Line makeLine(Point p1, Point p2){
    Line l;
    l.p[0] = p1;
    l.p[1] =p2;
    return l;
}

// a triangle contaisn 3 points
Triangle makeTriangle(Point p1, Point p2, Point p3){
    Triangle t;
    t.p[0] = p1;
    t.p[1] = p2;
    t.p[2] = p3;
    return t;
}

//calc functions
// distance formula : square root of (x1 - x2) ^ 2 + (y1-y2)^2
float lineLength(Line l){
    float dx = l.p[0].x - l.p[1].x;
    float dy = l.p[0].y - l.p[1].y;
    return sqrt(dx * dx + dy * dy);
}

// triangle area formula: 1/2 | x1(y2-y3) + x2(y3-y1) + x3(y1-y2) |
//use fabs to always make it positive 
float triangleArea(Triangle t){
    float x1 = t.p[0].x, y1 = t.p[0].y;
    float x2 = t.p[1].x, y2 = t.p[1].y;
    float x3 = t.p[2].x, y3 = t.p[2].y;
    float area = fabs(
        x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)

    ) / 2.0;

    return area;
}


// comparisons
bool samePoint(Point p1, Point p2){
    return (fabs(p1.x - p2.x) < EPSILON) && //check if x and y are very close
            (fabs(p1.y - p2.y) < EPSILON);
}


// check if p matches the endpoint of the line (either)
bool pointInLine(Point p, Line l){
    return samePoint(p, l.p[0]) || samePoint(p, l.p[1]);
}

// check if p mathces any of the triangle's vertices
bool pointInTriangle(Point p, Triangle t){
    return samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2]);
}