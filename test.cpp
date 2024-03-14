#include <iostream>
#include <cmath>
#include "Reverser.h"
#include "Truckloads.h"
int main(void){
Reverser r;
Truckloads t;
t.numTrucks(1024, 5);
std::cout<< r.reverseDigit(123456789) <<std::endl;
std::cout<< r.reverseString("abcdefghijklmnopqrstuvwxyz") <<std::endl;
}



