#include "Truckloads.h"
#include <iostream>
int main(void){
    Truckloads t;
    std::cout << "Trucks needed: " << t.numTrucks(14,3) << std::endl << std::endl;
    std::cout << "Trucks needed: " << t.numTrucks(15,1) << std::endl;
    std::cout << "Trucks needed: " << t.numTrucks(1024,5) << std::endl;
}