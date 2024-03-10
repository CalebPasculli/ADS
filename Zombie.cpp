#include "Zombie.h"
Zombie::Zombie() {
  // Stores the interactions with each other move
  this->name = "Zombie";
  this->winList.push_back("Pirate");
  this->winList.push_back("Monkey");
  this->loseList.push_back("Ninja");
  this->loseList.push_back("Robot");
  this->tieList.push_back("Zombie");
}
std::string Zombie::getName() { return ("Zombie"); }