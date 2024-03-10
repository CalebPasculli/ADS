#include "Robot.h"
Robot::Robot(){
    this->name = "Robot";
    this->winList.push_back("Ninja");
    this->winList.push_back("Zombie");
    this->loseList.push_back("Monkey");
    this->loseList.push_back("Pirate");
    this->tieList.push_back("Robot");
}
std::string Robot::getName(){
return("Robot");
}