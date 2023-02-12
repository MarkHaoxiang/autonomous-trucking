#ifndef AUTONOMOUSTRUCKING_POINT2D_H
#define AUTONOMOUSTRUCKING_POINT2D_H

/**
 * Immutable 2 dimensional point representation
*/
class Point2d {
    public:
        const double x;
        const double y;
        Point2d(double x, double y): x(x), y(y) {}
    
        Point2d operator + (const Point2d& o) {
            return Point2d(x+o.x,y+o.y);
        }

        Point2d operator - (const Point2d& o) {
            return Point2d(x-o.x,y-o.y);
        }

        Point2d operator * (const double& lambda) {
            return Point2d(x*lambda, y*lambda);
        }
};


#endif //AUTONOMOUSTRUCKING_POINT2D_H
