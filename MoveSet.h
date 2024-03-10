#ifndef MOVESET_H
#define MOVESET_H
#include <string>
#include <vector>

#include "Move.h"
class MoveSet {
 public:
  Move* getMove(std::string move);
};
#endif