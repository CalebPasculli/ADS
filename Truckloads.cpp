#include "Truckloads.h"
#include <cmath>
#include <iostream>

int Truckloads::numTrucks(int numCrates, int loadSize){

    if(numCrates <= loadSize){
        return 1;
    }
    int halfCrates1 = std::floor(numCrates/2.0);
    int halfCrates2 = std::ceil(numCrates/2.0);

    return numTrucks(halfCrates1, loadSize) + numTrucks(halfCrates2, loadSize);
}