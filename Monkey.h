#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"
#include <string>
#include <vector>
class Monkey : public Move{
public:
Monkey();
std::string  getName();
};
#endif