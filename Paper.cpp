#include "Paper.h"
Paper::Paper() {
  // Stores the interactions with each other move
  this->name = "Paper";
  this->winList.push_back("Rock");
  this->loseList.push_back("Scissors");
  this->tieList.push_back("Paper");
}
std::string Paper::getName() { return ("Paper"); }