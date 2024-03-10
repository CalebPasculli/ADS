#include "Monkey.h"
Monkey::Monkey(){
    this->name = "Monkey";
    this->winList.push_back("Ninja");
    this->winList.push_back("Robot");
    this->loseList.push_back("Pirate");
    this->loseList.push_back("Zombie");
    this->tieList.push_back("Monkey");}

std::string Monkey::getName(){
return("Monkey");
}
