#include "Computer.h"

#include <string>

#include "Player.h"
#include "Rock.h"
//The computer always plays rock
Move* Computer::makeMove() {
  MoveSet moveSet;
  return (moveSet.getMove("Rock"));
}
std::string Computer::getName() {
  std::string name = "Computer";
  return (name);
}
