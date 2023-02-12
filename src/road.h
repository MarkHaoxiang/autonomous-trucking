#ifndef AUTONOMOUSTRUCKING_ROAD_H
#define AUTONOMOUSTRUCKING_ROAD_H

#include "truckcontainer.h"
#include "point2d.h"

/**
 * Road containing arbitrary number of trucks.
 * 
 * Each road is a one-directional, single lane transport link between two other arbitrary nodes. 
 * The geometry of each road is defined by a 2D spline curve. As such, we are able to define a 
 * single road of arbitary shape by joining multiple road modules. Required acceleration from 
 * is ignored, curve is only a visual property. Assumed length of each road is EUCLIDEAN.
 * 
*/
class Road : public TruckContainer {

    private:
        // pos = au^3 + bu^2 + cu + d
        double ax, ay;
        double bx, by;
        double cx, cy;
        double dx, dy;

        void Construct (Point2d prev, Point2d start, Point2d end, Point2d next);

    public:
        /**
         * Get the current point of a truck at index
         * 
         * @param index index representing truck inside road.
        */
        Point2d get_truck_position(int index);

        /**
         * Gets the mapped point at position
         * 
         * @param position [0-1]
        */
        Point2d get_position(double position);

        /**
         * Create a straight road
        */
        Road(Point2d start, Point2d end);

        /**
         * Create a curved road
         * 
         * previous >> start >> end >> next
         * where this object represents the curved section from start >> end
         * with catmul-rom splines
         *  
        */
       Road(Point2d start, Point2d end, Point2d prev, Point2d next);

};


#endif //AUTONOMOUSTRUCKING_ROAD_H
