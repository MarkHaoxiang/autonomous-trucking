#include <stdexcept>

#include "truckcontainer.h"
#include "point2d.h"
#include "road.h"

Road::Road(Point2d start, Point2d end) {
    Construct(start+start-end,start,end,end+end-start);
}

Road::Road(Point2d start, Point2d end, Point2d prev, Point2d next) {
    Construct(prev,start,end,next);
}

void Road::Construct(Point2d prev, Point2d start, Point2d end, Point2d next) {
    double dudx = 1.0 / (end.x-start.x); double dudy = 1.0 / (end.y-start.y);
    Point2d dp0 = Point2d((start-prev).x*dudx,(start-prev).x*dudy); 
    Point2d dp1 = Point2d((next-end).x*dudx,(next-end).x*dudy); 

    dx = start.x; dy = start.y;
    cx = dp0.x; cy = dp0.y;
    ax = dp1.x+cx+2*(dx-end.x); ay = dp1.y+cy+2*(dy-end.y);
    bx = end.x-ax-cx-dx; by = end.y-ay-cy-dy;
}

Point2d Road::get_position(double position) {
    if (position < 0 || position > 1) {
        throw std::invalid_argument( "parameter out of bounds" );
    }
    double u = position;
    return Point2d(u*u*u*ax+u*u*bx+u*cx+dx,u*u*u*ay+u*u*by+u*cy+dy);
}

Point2d Road::get_truck_position(int index) {
    // TODO(mark)
    return Point2d(0,0);
}
