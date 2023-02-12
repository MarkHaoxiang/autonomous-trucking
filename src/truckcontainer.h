#ifndef AUTONOMOUSTRUCKING_TRUCKCONTAINER_H
#define AUTONOMOUSTRUCKING_TRUCKCONTAINER_H

#include <vector>
#include "truck.h"
#include "point2d.h"

class TruckContainer {

    public:
        std::vector<Truck*> trucks;
        std::vector<TruckContainer*> merging_points;

        virtual Point2d get_position(double position) = 0;
        virtual Point2d get_truck_position(int index) = 0;
        
};


#endif //AUTONOMOUSTRUCKING_TRUCKCONTAINER_H
