#include <string>
#include "Player.h"
#include <iostream>
#include "Human.h"
#include "MoveSet.h"
Human::Human(std::string name){this->name = name;};
Human::Human(){this->name = "Human";};

Move* Human::makeMove(){
MoveSet* MoveSet;
std::string move;
std::cout<< "Enter move:";
std::cin >> move;
return (MoveSet->getMove(move));
};

std::string Human::getName(){
    return(name);
};

