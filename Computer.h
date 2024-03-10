#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>

#include "Move.h"
#include "Player.h"
class Computer : public Player {
 private:
 public:
  Move* makeMove();
  std::string getName();
};
#endif