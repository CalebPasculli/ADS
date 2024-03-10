#include "Pirate.h"
Pirate::Pirate(){
    this->name = "Pirate";
    this->winList.push_back("Robot");
    this->winList.push_back("Monkey");
    this->loseList.push_back("Ninja");
    this->loseList.push_back("Zombie");
    this->tieList.push_back("Pirate");
}
std::string Pirate::getName(){
return("Paper");
}