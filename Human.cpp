#include <string>
#include "Player.h"
#include <iostream>
#include "Human.h"

Human::Human(std::string name){this->name = name;};
Human::Human(){this->name = "Human";};

char Human::makeMove(){
    char move;
std::cout<< "Enter move:";
std::cin >> move;
return (move);
};

std::string Human::getName(){
    return(name);
};

