#ifndef ROCK_H
#define ROCK_H
#include "Move.h"
#include <string>
class Rock : public Move{
public:
Rock();
std::string getName();
};
#endif