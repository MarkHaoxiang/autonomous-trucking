#ifndef AUTONOMOUSTRUCKING_ROAD_H
#define AUTONOMOUSTRUCKING_ROAD_H

#include "truckcontainer.h"

class Road : public TruckContainer {

    Point2d get_truck_position(int index);
};


#endif //AUTONOMOUSTRUCKING_ROAD_H
