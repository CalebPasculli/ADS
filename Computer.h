#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <string>
class Computer : public Player{
private:
char move;
public:
Computer();
char makeMove();
std::string getName();
};
#endif