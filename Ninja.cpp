#include "Ninja.h"

Ninja::Ninja() {
  // Stores the interactions with each other move
  this->name = "Ninja";
  this->winList.push_back("Pirate");
  this->winList.push_back("Zombie");
  this->loseList.push_back("Monkey");
  this->loseList.push_back("Robot");
  this->tieList.push_back("Ninja");
}