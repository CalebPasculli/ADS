#include "Scissors.h"
Scissors::Scissors(){
    this->name = "Scissors";
    this->winList.push_back("Paper");
    this->loseList.push_back("Rock");
    this->tieList.push_back("Scissors");

}
std::string Scissors::getName(){
return("Scissors");
}