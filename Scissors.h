#ifndef SCISSORS_H
#define SCISSORS_H
#include <string>

#include "Move.h"
class Scissors : public Move {
 private:
 public:
  Scissors();
  std::string getName();
};
#endif