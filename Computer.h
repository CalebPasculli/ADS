#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include "Move.h"
#include <string>
class Computer : public Player{
private:
char move;
public:
Computer();
Move* makeMove(MoveSet* moveSet);
std::string getName();
};
#endif