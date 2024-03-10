#include "Rock.h"
Rock::Rock(){
    this->name = "Rock";
    this->winList.push_back("Scissors");
    this->loseList.push_back("Paper");
    this->tieList.push_back("Rock");

}
std::string Rock::getName(){
return("Rock");
}