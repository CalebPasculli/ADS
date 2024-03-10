#include "Move.h"

#include <string>
#include <vector>

std::string Move::getName() { return this->name; }
// Checks the moves vectors for input move
// Returns the game state based on what vector it is in
int Move::checkWin(Move* move) {
  for (unsigned int i = 0; i < this->winList.size(); i++)
    if (this->winList.at(i) == move->getName()) return 1;  // win
  for (unsigned int i = 0; i < this->loseList.size(); i++)
    if (this->loseList.at(i) == move->getName()) return 2;  // lose
  for (unsigned int i = 0; i < this->tieList.size(); i++)
    if (this->tieList.at(i) == move->getName()) return 3;  // tie
  return 4;                                                // invalid game;
}