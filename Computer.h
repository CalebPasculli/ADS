#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>

#include "Move.h"
#include "Player.h"
class Computer : public Player {
 private:
 public:
  Computer();
  Move* makeMove();
  std::string getName();
};
#endif