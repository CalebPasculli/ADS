#include "Paper.h"
Paper::Paper(){
    this->name = "Paper";
    this->winList.push_back("Rock");
    this->loseList.push_back("Scissors");
    this->tieList.push_back("Paper");

}
std::string Paper::getName(){
return("Paper");
}