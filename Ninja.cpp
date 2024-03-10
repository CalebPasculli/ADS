#include "Ninja.h"

Ninja::Ninja(){
    this->name = "Ninja";
    this->winList.push_back("Pirate");
    this->winList.push_back("Zombie");
    this->loseList.push_back("Monkey");
    this->loseList.push_back("Robot");
    this->tieList.push_back("Ninja");
}
Ninja::~Ninja(){}