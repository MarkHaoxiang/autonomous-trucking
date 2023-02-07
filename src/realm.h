//
// Created by Sam Penny on 07/02/2023.
//

#ifndef AUTONOMOUSTRUCKING_REALM_H
#define AUTONOMOUSTRUCKING_REALM_H

#include <unordered_map>
#include "truck.h"
#include "truckcontainer.h"
#include <string>

class Realm {
public:
    std::unordered_map<int, Truck*> trucks();
    std::unordered_map<int, TruckContainer*> truck_containers();

    Realm(std::string config_filename) {
        // read in JSON into map
    }

    // step mutates all the trucks to their new positions, for the next update
    void step() {};

    // executes algorithm, decides new acceleration of cars without adjusting position (no mutation)
    void compute_actions() {};



};


#endif //AUTONOMOUSTRUCKING_REALM_H
