#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include "Player.h"
#include "Move.h"
#include "MoveSet.h"
#include <iostream>
class Human : public Player{
private:
std::string name;
//vector of possible moves
public:
Human(std::string name);
Human();
Move* makeMove(MoveSet* moveSet);
std::string getName();

};

#endif