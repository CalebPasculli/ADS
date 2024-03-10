#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"
#include <string>
class Scissors : public Move{
private:
public:
Scissors();
std::string getName();
};
#endif