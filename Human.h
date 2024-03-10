#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>

#include "Move.h"
#include "MoveSet.h"
#include "Player.h"
class Human : public Player {
 private:
  std::string name;

 public:
  Human(std::string name);
  Human();
  Move* makeMove();
  std::string getName();
};

#endif