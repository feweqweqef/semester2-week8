
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    Rectangle r = makeRectangle((Point){.x=0, .y=0}, 10, 5);

    printf("Area: %f\n", area(r));

    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    Rectangle r;
    r.x = p.x;
    r.y = p.y;
    r.width = width;
    r.height = height;

    return r;
}

float area( Rectangle r ) {
    float a = 0.0;    
    a = r.width * r.height;    

    return a;
}

void shiftRectangle( Rectangle *r, Point dp ) {
    r->x += dp.x;
    r->y += dp.y;


    return;
}

void scaleRectangle( Rectangle *r, float scale ) {
    r->width *= scale;
    r->height *= scale;
    

    return;
}
